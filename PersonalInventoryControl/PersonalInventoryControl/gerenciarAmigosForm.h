#pragma once

#include "stdafx.h"
#include "cadAmigoForm.h"


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
	private:
		ControllerAmigo *controller_amigo;
		
	public:
		
		gerenciarAmigosForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			controller_amigo = new ControllerAmigo();
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
	private: System::Windows::Forms::Button^  ger_amigos_btn_detalhes;
	private: System::Windows::Forms::Button^  ger_amigo_btn_alterar;
	private: System::Windows::Forms::Button^  ger_amigo_btn_cadastrar;
	private: System::Windows::Forms::DataGridView^  data_grid_amigos;
	private: System::Windows::Forms::Button^  ger_amigo_btn_remover;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_sobrenome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_sexo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tb_amigo_col_telefone;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ger_amigos_btn_detalhes = (gcnew System::Windows::Forms::Button());
			this->ger_amigo_btn_alterar = (gcnew System::Windows::Forms::Button());
			this->ger_amigo_btn_cadastrar = (gcnew System::Windows::Forms::Button());
			this->data_grid_amigos = (gcnew System::Windows::Forms::DataGridView());
			this->tb_amigo_col_nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_sobrenome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_telefone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ger_amigo_btn_remover = (gcnew System::Windows::Forms::Button());
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
			// ger_amigos_btn_detalhes
			// 
			this->ger_amigos_btn_detalhes->Location = System::Drawing::Point(8, 51);
			this->ger_amigos_btn_detalhes->Name = L"ger_amigos_btn_detalhes";
			this->ger_amigos_btn_detalhes->Size = System::Drawing::Size(75, 23);
			this->ger_amigos_btn_detalhes->TabIndex = 1;
			this->ger_amigos_btn_detalhes->Text = L"Visualizar";
			this->ger_amigos_btn_detalhes->UseVisualStyleBackColor = true;
			this->ger_amigos_btn_detalhes->Click += gcnew System::EventHandler(this, &gerenciarAmigosForm::ger_amigos_btn_detalhes_Click);
			// 
			// ger_amigo_btn_alterar
			// 
			this->ger_amigo_btn_alterar->Location = System::Drawing::Point(97, 51);
			this->ger_amigo_btn_alterar->Name = L"ger_amigo_btn_alterar";
			this->ger_amigo_btn_alterar->Size = System::Drawing::Size(75, 23);
			this->ger_amigo_btn_alterar->TabIndex = 2;
			this->ger_amigo_btn_alterar->Text = L"Alterar";
			this->ger_amigo_btn_alterar->UseVisualStyleBackColor = true;
			this->ger_amigo_btn_alterar->Click += gcnew System::EventHandler(this, &gerenciarAmigosForm::ger_amigo_btn_alterar_Click);
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
			this->data_grid_amigos->AllowUserToOrderColumns = true;
			this->data_grid_amigos->BackgroundColor = System::Drawing::SystemColors::Control;
			this->data_grid_amigos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->data_grid_amigos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->data_grid_amigos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_amigos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->tb_amigo_col_nome, 
				this->tb_amigo_col_sobrenome, this->tb_amigo_col_email, this->tb_amigo_col_sexo, this->tb_amigo_col_telefone});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid_amigos->DefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid_amigos->Location = System::Drawing::Point(8, 85);
			this->data_grid_amigos->Name = L"data_grid_amigos";
			this->data_grid_amigos->ReadOnly = true;
			this->data_grid_amigos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_amigos->Size = System::Drawing::Size(625, 138);
			this->data_grid_amigos->TabIndex = 4;
			this->data_grid_amigos->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &gerenciarAmigosForm::data_grid_amigos_RowsAdded);
			// 
			// tb_amigo_col_nome
			// 
			this->tb_amigo_col_nome->HeaderText = L"Nome";
			this->tb_amigo_col_nome->Name = L"tb_amigo_col_nome";
			this->tb_amigo_col_nome->ReadOnly = true;
			this->tb_amigo_col_nome->Width = 140;
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
			this->tb_amigo_col_email->Width = 130;
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
			// ger_amigo_btn_remover
			// 
			this->ger_amigo_btn_remover->Location = System::Drawing::Point(558, 51);
			this->ger_amigo_btn_remover->Name = L"ger_amigo_btn_remover";
			this->ger_amigo_btn_remover->Size = System::Drawing::Size(75, 23);
			this->ger_amigo_btn_remover->TabIndex = 5;
			this->ger_amigo_btn_remover->Text = L"Remover";
			this->ger_amigo_btn_remover->UseVisualStyleBackColor = true;
			this->ger_amigo_btn_remover->Click += gcnew System::EventHandler(this, &gerenciarAmigosForm::ger_amigo_btn_remover_Click);
			// 
			// gerenciarAmigosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 243);
			this->Controls->Add(this->ger_amigo_btn_remover);
			this->Controls->Add(this->data_grid_amigos);
			this->Controls->Add(this->ger_amigo_btn_cadastrar);
			this->Controls->Add(this->ger_amigo_btn_alterar);
			this->Controls->Add(this->ger_amigos_btn_detalhes);
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

		}

#pragma endregion
	
	public: System::Void ger_amigo_btn_cadastrar_Click(System::Object^  sender, System::EventArgs^  e)
			{
				cadAmigoForm ^amigo_form = gcnew cadAmigoForm(this->data_grid_amigos);
				amigo_form->Show();
			}
	private: System::Void ger_amigo_btn_alterar_Click(System::Object^  sender, System::EventArgs^  e)
				 {
					 String^ nome_chave = data_grid_amigos->SelectedRows[0]->Cells[0]->Value->ToString();
					 if(!System::String::IsNullOrEmpty(nome_chave))
					 { // nome nao vazio
						Amigo* amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave));//pegar amigo da coluna
						cadAmigoForm ^amigo_form = gcnew cadAmigoForm(COD_EDITAR,amigo);
						amigo_form->Show();
					 } else {
						 MessageBox::Show("Por favor, selecione um amigo!","Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }

					this->Close();
				 }
	private: System::Void ger_amigos_btn_detalhes_Click(System::Object^  sender, System::EventArgs^  e) {
					 
					 String^ nome_chave = data_grid_amigos->SelectedRows[0]->Cells[0]->Value->ToString();
					 if(!System::String::IsNullOrEmpty(nome_chave))
					 { // nome nao vazio
						 Amigo* amigo = new Amigo();	
						 amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave));//pegar amigo da coluna
						 cadAmigoForm ^amigo_form = gcnew cadAmigoForm(COD_VISUALIZAR,amigo);
						 amigo_form->Show();
					 } else {
						 MessageBox::Show("Por favor, selecione um amigo!","Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }

					 this->Close();
					 }
	private: System::Void ger_amigo_btn_remover_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 String^ nome_chave = data_grid_amigos->SelectedRows[0]->Cells[0]->Value->ToString();
			 if(!System::String::IsNullOrEmpty(nome_chave))
			 { // nome nao vazio
				
				 if(MessageBox::Show ("Tem certeza que deseja remover o seu amigo'"+nome_chave+"'?", "Remover",
					 MessageBoxButtons::YesNo, MessageBoxIcon::Question)
					 == System::Windows::Forms::DialogResult::Yes)
				{	
					int amigo_id = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave))->getId();
					if(controller_amigo->deletar(amigo_id))
						{
							MessageBox::Show("Amigo removido com sucesso", "Sucesso",
							MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
				}
			 }
			 else 
				 {
					MessageBox::Show("Por favor, selecione um amigo!","Erro",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }
			 this->data_grid_amigos->Rows->Clear();
			carregar_dadosAmigos();
		 }
	public: void carregar_dadosAmigos()
					 {
						 
						 list<Amigo*> *amigos = this->controller_amigo->buscarTodos();

						 for each (Amigo *it in *amigos)
						 {
							 array<String^>^row1 = 
								 gcnew array<String^>{
										 gcnew String(it->getNome().c_str()),
										 gcnew String(it->getSobrenome().c_str()),
										 gcnew String(it->getEmail().c_str()),
										 gcnew String(it->getGenero().c_str()),
										 gcnew String(it->getTelefone().c_str())
							 };
							 this->data_grid_amigos->Rows->Add(row1);
						 }	

						 if(this->data_grid_amigos->Rows->Count == 0)
						 {
							 this->ger_amigo_btn_alterar->Enabled = false;
							 this->ger_amigos_btn_detalhes->Enabled = false;
							this->ger_amigo_btn_remover->Enabled = false;	
						 }
					 }
	
		private: System::Void data_grid_amigos_RowsAdded(System::Object^  sender,	
					 System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
						 this->ger_amigo_btn_alterar->Enabled = true;
						 this->ger_amigos_btn_detalhes->Enabled = true;
						 this->ger_amigo_btn_remover->Enabled = true;
				 }
};
	}
