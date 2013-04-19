#pragma once
#include "stdafx.h"

namespace PersonalInventoryControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Busca_amigo_form
	/// </summary>
	public ref class Busca_amigo_form : public System::Windows::Forms::Form
	{
	public:
		ControllerAmigo* controller_amigo;
		Amigo* _amigo;
		TextBox^ _text_box_amigo;
		
		Busca_amigo_form(TextBox^ text_box_emprestimo )
		{
			InitializeComponent();
			controller_amigo = new ControllerAmigo();
			carregar_dadosAmigos();
			_text_box_amigo = text_box_emprestimo;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Busca_amigo_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_selecionar_amigo;
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	private: 
	protected: 

	protected: 

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_sobrenome;
	private: System::Windows::Forms::Label^  label1;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_selecionar_amigo = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->col_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_sobrenome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_selecionar_amigo
			// 
			this->btn_selecionar_amigo->Location = System::Drawing::Point(109, 224);
			this->btn_selecionar_amigo->Name = L"btn_selecionar_amigo";
			this->btn_selecionar_amigo->Size = System::Drawing::Size(75, 23);
			this->btn_selecionar_amigo->TabIndex = 0;
			this->btn_selecionar_amigo->Text = L"Selecionar";
			this->btn_selecionar_amigo->UseVisualStyleBackColor = true;
			this->btn_selecionar_amigo->Click += gcnew System::EventHandler(this, &Busca_amigo_form::btn_selecionar_amigo_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->col_name, 
				this->col_sobrenome});
			this->dataGridView1->Location = System::Drawing::Point(12, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(286, 184);
			this->dataGridView1->TabIndex = 2;
			// 
			// col_name
			// 
			this->col_name->HeaderText = L"Nome";
			this->col_name->Name = L"col_name";
			this->col_name->ReadOnly = true;
			this->col_name->Width = 120;
			// 
			// col_sobrenome
			// 
			this->col_sobrenome->HeaderText = L"Sobrenome";
			this->col_sobrenome->Name = L"col_sobrenome";
			this->col_sobrenome->ReadOnly = true;
			this->col_sobrenome->Width = 120;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Selecione o amigo abaixo";
			// 
			// Busca_amigo_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 259);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btn_selecionar_amigo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Busca_amigo_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Busca_amigo_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void carregar_dadosAmigos()
				{
					list<Amigo*> *amigos = this->controller_amigo->buscarTodos();

					for each (Amigo *it in *amigos)
					{
						array<String^>^row1 = 
							gcnew array<String^>{
							gcnew String(it->getNome().c_str()),
							gcnew String(it->getSobrenome().c_str())
									};

						//if(it->getId() > data_grid_amigos->RowCount)  Why this? If the map keys are not sorted, some elements will not be showed
						this->dataGridView1->Rows->Add(row1);
					}		 
				}
	private: System::Void btn_selecionar_amigo_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ nome_chave = this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
				 if(!System::String::IsNullOrEmpty(nome_chave))
				 { // nome nao vazio
					
					 _amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave));
					 _text_box_amigo->Text = gcnew String(_amigo->getNome().c_str());
				 } else {
					 MessageBox::Show("Por favor, selecione um amigo!","Erro",
						 MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
				 this->Close();
			 }
		};
}
