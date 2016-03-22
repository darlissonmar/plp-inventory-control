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

		Busca_amigo_form(TextBox^ text_box_emprestimo)
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

	public: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_name;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->col_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->col_name });
			this->dataGridView1->Location = System::Drawing::Point(4, 34);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(300, 184);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Busca_amigo_form::dataGridView1_CellDoubleClick);
			// 
			// col_name
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->col_name->DefaultCellStyle = dataGridViewCellStyle1;
			this->col_name->HeaderText = L"Nome";
			this->col_name->Name = L"col_name";
			this->col_name->ReadOnly = true;
			this->col_name->Width = 290;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Dê um clique duplo sobre nome do seu amigo para selecioná-lo.";
			// 
			// Busca_amigo_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(316, 230);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Busca_amigo_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Amigos cadastrados";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void carregar_dadosAmigos()
	{

		list<Amigo*> *amigos = this->controller_amigo->buscarTodos();

		for each (Amigo *it in *amigos)
		{
			cli::array<String^>^row1 =
				gcnew cli::array<String^>{
				gcnew String(it->getNome().c_str()) + " " + gcnew String(it->getSobrenome().c_str())
			};
			this->dataGridView1->Rows->Add(row1);
		}
	}

	private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		String^ nome_chave = this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();

		String^ pattern = "^(\\S*)";
		System::Text::RegularExpressions::Regex ^ regex = gcnew System::Text::RegularExpressions::Regex(pattern);
		System::Text::RegularExpressions::Match^ match = regex->Match(nome_chave);
		String^ nome_chave_split = match->Value;


		if (!System::String::IsNullOrEmpty(nome_chave_split))
		{ // nome nao vazio

			_amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave_split));
			_text_box_amigo->Text = gcnew String(_amigo->getNome().c_str()) + " " + gcnew String(_amigo->getSobrenome().c_str());
		}
		else {
			MessageBox::Show("Por favor, selecione um amigo!", "Erro",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		this->Close();

	}
	};
}
