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
	/// Summary for gerenciarAmigosForm
	/// </summary>
	public ref class gerenciarAmigosForm : public System::Windows::Forms::Form
	{
	public:
		
		gerenciarAmigosForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			carregar_dadosAmigos();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gerenciarAmigosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  ger_amigo_btn_cadastrar;
	private: System::Windows::Forms::DataGridView^  data_grid_amigos;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_sobrenome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_telefone;
	protected: 

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->ger_amigo_btn_cadastrar = (gcnew System::Windows::Forms::Button());
			this->data_grid_amigos = (gcnew System::Windows::Forms::DataGridView());
			this->tb_amigo_col_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_sobrenome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_telefone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_amigos))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(88)), 
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(640, 36);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(3, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Amigos";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Visualizar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(97, 51);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Alterar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// ger_amigo_btn_cadastrar
			// 
			this->ger_amigo_btn_cadastrar->Location = System::Drawing::Point(190, 51);
			this->ger_amigo_btn_cadastrar->Name = L"ger_amigo_btn_cadastrar";
			this->ger_amigo_btn_cadastrar->Size = System::Drawing::Size(75, 23);
			this->ger_amigo_btn_cadastrar->TabIndex = 3;
			this->ger_amigo_btn_cadastrar->Text = L"Cadastrar";
			this->ger_amigo_btn_cadastrar->UseVisualStyleBackColor = true;
			this->ger_amigo_btn_cadastrar->Click += gcnew System::EventHandler(this, &gerenciarAmigosForm::ger_amigo_btn_cadastrar_Click);
			// 
			// data_grid_amigos
			// 
			this->data_grid_amigos->AllowUserToAddRows = false;
			this->data_grid_amigos->AllowUserToDeleteRows = false;
			this->data_grid_amigos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_amigos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->tb_amigo_col_id, 
				this->tb_amigo_col_nome, this->tb_amigo_col_sobrenome, this->tb_amigo_col_email, this->tb_amigo_col_sexo, this->tb_amigo_col_telefone});
			this->data_grid_amigos->Location = System::Drawing::Point(8, 85);
			this->data_grid_amigos->Name = L"data_grid_amigos";
			this->data_grid_amigos->ReadOnly = true;
			this->data_grid_amigos->Size = System::Drawing::Size(625, 138);
			this->data_grid_amigos->TabIndex = 4;
			// 
			// tb_amigo_col_id
			// 
			this->tb_amigo_col_id->HeaderText = L"id";
			this->tb_amigo_col_id->Name = L"tb_amigo_col_id";
			this->tb_amigo_col_id->ReadOnly = true;
			this->tb_amigo_col_id->Width = 30;
			// 
			// tb_amigo_col_nome
			// 
			this->tb_amigo_col_nome->HeaderText = L"Nome";
			this->tb_amigo_col_nome->Name = L"tb_amigo_col_nome";
			this->tb_amigo_col_nome->ReadOnly = true;
			this->tb_amigo_col_nome->Width = 120;
			// 
			// tb_amigo_col_sobrenome
			// 
			this->tb_amigo_col_sobrenome->HeaderText = L"Sobrenome";
			this->tb_amigo_col_sobrenome->Name = L"tb_amigo_col_sobrenome";
			this->tb_amigo_col_sobrenome->ReadOnly = true;
			this->tb_amigo_col_sobrenome->Width = 120;
			// 
			// tb_amigo_col_email
			// 
			this->tb_amigo_col_email->HeaderText = L"Email";
			this->tb_amigo_col_email->Name = L"tb_amigo_col_email";
			this->tb_amigo_col_email->ReadOnly = true;
			this->tb_amigo_col_email->Width = 120;
			// 
			// tb_amigo_col_sexo
			// 
			this->tb_amigo_col_sexo->HeaderText = L"Sexo";
			this->tb_amigo_col_sexo->Name = L"tb_amigo_col_sexo";
			this->tb_amigo_col_sexo->ReadOnly = true;
			this->tb_amigo_col_sexo->Width = 95;
			// 
			// tb_amigo_col_telefone
			// 
			this->tb_amigo_col_telefone->HeaderText = L"Telefone";
			this->tb_amigo_col_telefone->Name = L"tb_amigo_col_telefone";
			this->tb_amigo_col_telefone->ReadOnly = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(558, 51);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Pesquisar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(323, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nome";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(364, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 20);
			this->textBox1->TabIndex = 7;
			// 
			// gerenciarAmigosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 243);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->data_grid_amigos);
			this->Controls->Add(this->ger_amigo_btn_cadastrar);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"gerenciarAmigosForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gerenciamento de amigos";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_amigos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void ger_amigo_btn_cadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
			 cadAmigoForm ^amigo_form = gcnew cadAmigoForm(this->data_grid_amigos);
			 amigo_form->Show();
		 }
   
	 
	public: void carregar_dadosAmigos(){
				 ControllerAmigo* controller = new ControllerAmigo();
				 list<Amigo*> *amigos = controller->buscarTodos();
				
				 for each (Amigo *it in *amigos)
				 {
					 array<String^>^row1 = 
						 gcnew array<String^>{
							 gcnew String(Convert::ToString(it->getId())),
								 gcnew String(it->getNome().c_str()),
								 gcnew String(it->getSobrenome().c_str()),
								 gcnew String(it->getEmail().c_str()),
								 gcnew String(it->getGenero().c_str()),
								 gcnew String(it->getTelefone().c_str())
					 };
					 this->data_grid_amigos->Rows->Add(row1);
				 }		 
			 }
	
};
}