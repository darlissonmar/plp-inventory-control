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
	private: System::Windows::Forms::Button^  ger_amigo_btn_alterar;
	private: System::Windows::Forms::Button^  ger_amigo_btn_cadastrar;
	private: System::Windows::Forms::DataGridView^  data_grid_amigos;
	private: System::Windows::Forms::Button^  ger_amigo_btn_remover;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  lb_telefone;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  lb_endereco;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  lb_sexo;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lb_email;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lb_sobrenome;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lb_nome;
	private: System::Windows::Forms::Label^  label2;
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
			this->ger_amigo_btn_alterar = (gcnew System::Windows::Forms::Button());
			this->ger_amigo_btn_cadastrar = (gcnew System::Windows::Forms::Button());
			this->data_grid_amigos = (gcnew System::Windows::Forms::DataGridView());
			this->tb_amigo_col_nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_sobrenome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_sexo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tb_amigo_col_telefone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ger_amigo_btn_remover = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_telefone = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->lb_endereco = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lb_sexo = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lb_email = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lb_sobrenome = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lb_nome = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_amigos))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(752, 36);
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
			// ger_amigo_btn_alterar
			// 
			this->ger_amigo_btn_alterar->Location = System::Drawing::Point(651, 98);
			this->ger_amigo_btn_alterar->Name = L"ger_amigo_btn_alterar";
			this->ger_amigo_btn_alterar->Size = System::Drawing::Size(75, 23);
			this->ger_amigo_btn_alterar->TabIndex = 2;
			this->ger_amigo_btn_alterar->Text = L"Alterar";
			this->ger_amigo_btn_alterar->UseVisualStyleBackColor = true;
			this->ger_amigo_btn_alterar->Click += gcnew System::EventHandler(this, &gerenciarAmigosForm::ger_amigo_btn_alterar_Click);
			// 
			// ger_amigo_btn_cadastrar
			// 
			this->ger_amigo_btn_cadastrar->Location = System::Drawing::Point(651, 69);
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
			this->data_grid_amigos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->data_grid_amigos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_amigos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->tb_amigo_col_nome,
					this->tb_amigo_col_sobrenome, this->tb_amigo_col_email, this->tb_amigo_col_sexo, this->tb_amigo_col_telefone
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::MenuHighlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->data_grid_amigos->DefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid_amigos->Location = System::Drawing::Point(20, 69);
			this->data_grid_amigos->MultiSelect = false;
			this->data_grid_amigos->Name = L"data_grid_amigos";
			this->data_grid_amigos->ReadOnly = true;
			this->data_grid_amigos->RowHeadersVisible = false;
			this->data_grid_amigos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->data_grid_amigos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_amigos->Size = System::Drawing::Size(625, 128);
			this->data_grid_amigos->TabIndex = 4;
			this->data_grid_amigos->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &gerenciarAmigosForm::data_grid_amigos_RowsAdded);
			this->data_grid_amigos->SelectionChanged += gcnew System::EventHandler(this, &gerenciarAmigosForm::data_grid_amigos_SelectionChanged);
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
			this->tb_amigo_col_email->Width = 150;
			// 
			// tb_amigo_col_sexo
			// 
			this->tb_amigo_col_sexo->HeaderText = L"Sexo";
			this->tb_amigo_col_sexo->Name = L"tb_amigo_col_sexo";
			this->tb_amigo_col_sexo->ReadOnly = true;
			// 
			// tb_amigo_col_telefone
			// 
			this->tb_amigo_col_telefone->HeaderText = L"Telefone";
			this->tb_amigo_col_telefone->Name = L"tb_amigo_col_telefone";
			this->tb_amigo_col_telefone->ReadOnly = true;
			this->tb_amigo_col_telefone->Width = 110;
			// 
			// ger_amigo_btn_remover
			// 
			this->ger_amigo_btn_remover->Location = System::Drawing::Point(639, 106);
			this->ger_amigo_btn_remover->Name = L"ger_amigo_btn_remover";
			this->ger_amigo_btn_remover->Size = System::Drawing::Size(75, 23);
			this->ger_amigo_btn_remover->TabIndex = 5;
			this->ger_amigo_btn_remover->Text = L"Remover";
			this->ger_amigo_btn_remover->UseVisualStyleBackColor = true;
			this->ger_amigo_btn_remover->Click += gcnew System::EventHandler(this, &gerenciarAmigosForm::ger_amigo_btn_remover_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ger_amigo_btn_remover);
			this->groupBox1->Location = System::Drawing::Point(12, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(728, 159);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de Amigos";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Window;
			this->groupBox2->Controls->Add(this->lb_telefone);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->lb_endereco);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->lb_sexo);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->lb_email);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->lb_sobrenome);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->lb_nome);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(12, 220);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(728, 103);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Detalhes do Amigo";
			// 
			// lb_telefone
			// 
			this->lb_telefone->AutoSize = true;
			this->lb_telefone->Location = System::Drawing::Point(360, 69);
			this->lb_telefone->Name = L"lb_telefone";
			this->lb_telefone->Size = System::Drawing::Size(41, 13);
			this->lb_telefone->TabIndex = 11;
			this->lb_telefone->Text = L"label13";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(302, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Telefone:";
			// 
			// lb_endereco
			// 
			this->lb_endereco->AutoSize = true;
			this->lb_endereco->Location = System::Drawing::Point(81, 69);
			this->lb_endereco->Name = L"lb_endereco";
			this->lb_endereco->Size = System::Drawing::Size(41, 13);
			this->lb_endereco->TabIndex = 9;
			this->lb_endereco->Text = L"label11";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Endereço:";
			// 
			// lb_sexo
			// 
			this->lb_sexo->AutoSize = true;
			this->lb_sexo->Location = System::Drawing::Point(559, 31);
			this->lb_sexo->Name = L"lb_sexo";
			this->lb_sexo->Size = System::Drawing::Size(35, 13);
			this->lb_sexo->TabIndex = 7;
			this->lb_sexo->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(519, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Sexo:";
			// 
			// lb_email
			// 
			this->lb_email->AutoSize = true;
			this->lb_email->Location = System::Drawing::Point(360, 31);
			this->lb_email->Name = L"lb_email";
			this->lb_email->Size = System::Drawing::Size(35, 13);
			this->lb_email->TabIndex = 5;
			this->lb_email->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(319, 31);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Email:";
			// 
			// lb_sobrenome
			// 
			this->lb_sobrenome->AutoSize = true;
			this->lb_sobrenome->Location = System::Drawing::Point(81, 50);
			this->lb_sobrenome->Name = L"lb_sobrenome";
			this->lb_sobrenome->Size = System::Drawing::Size(35, 13);
			this->lb_sobrenome->TabIndex = 3;
			this->lb_sobrenome->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Sobrenome:";
			// 
			// lb_nome
			// 
			this->lb_nome->AutoSize = true;
			this->lb_nome->Location = System::Drawing::Point(81, 31);
			this->lb_nome->Name = L"lb_nome";
			this->lb_nome->Size = System::Drawing::Size(38, 13);
			this->lb_nome->TabIndex = 1;
			this->lb_nome->Text = L"Nome:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(37, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nome:";
			// 
			// gerenciarAmigosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(752, 334);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->data_grid_amigos);
			this->Controls->Add(this->ger_amigo_btn_cadastrar);
			this->Controls->Add(this->ger_amigo_btn_alterar);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"gerenciarAmigosForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gerenciamento de amigos";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid_amigos))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
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
		if (!System::String::IsNullOrEmpty(nome_chave))
		{ // nome nao vazio
			Amigo* amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave));//pegar amigo da coluna
			cadAmigoForm ^amigo_form = gcnew cadAmigoForm(this->data_grid_amigos, amigo);
			amigo_form->Show();
		}
		else {
			MessageBox::Show("Por favor, selecione um amigo!", "Erro",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

			 /*private: System::Void ger_amigos_btn_detalhes_Click(System::Object^  sender, System::EventArgs^  e) {

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
							  }*/

	private: System::Void ger_amigo_btn_remover_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ nome_chave = data_grid_amigos->SelectedRows[0]->Cells[0]->Value->ToString();
		if (!System::String::IsNullOrEmpty(nome_chave))
		{ // nome nao vazio

			if (MessageBox::Show("Tem certeza que deseja remover o seu amigo '" + nome_chave + "'?", "Remover",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question)
				== System::Windows::Forms::DialogResult::Yes)
			{
				int amigo_id = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave))->getId();
				if (controller_amigo->deletar(amigo_id))
				{
					MessageBox::Show("Amigo removido com sucesso", "Sucesso",
						MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			this->data_grid_amigos->Rows->Clear();
			carregar_dadosAmigos();
		}
		else
		{
			MessageBox::Show("Por favor, selecione um amigo!", "Erro",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void data_grid_amigos_RowsAdded(System::Object^  sender,
		System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {
		this->ger_amigo_btn_alterar->Enabled = true;
		this->ger_amigo_btn_remover->Enabled = true;
	}
	private: System::Void data_grid_amigos_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {

		if (this->data_grid_amigos->SelectedRows->Count > 0) {

			String^ nome_chave = data_grid_amigos->SelectedRows[0]->Cells[0]->Value->ToString();
			if (!System::String::IsNullOrEmpty(nome_chave))
			{ // nome nao vazio
				Amigo* amigo = new Amigo();
				amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave));//pegar amigo da coluna

				this->lb_nome->Text = gcnew String(amigo->getNome().c_str());
				this->lb_sobrenome->Text = gcnew String(amigo->getSobrenome().c_str());
				this->lb_email->Text = gcnew String(amigo->getEmail().c_str());
				this->lb_sexo->Text = gcnew String(amigo->getGenero().c_str());
				this->lb_telefone->Text = gcnew String(amigo->getTelefone().c_str());
				this->lb_endereco->Text = gcnew String(amigo->getEndereco().c_str());

			}
			else {
				MessageBox::Show("Por favor, selecione um amigo!", "Erro",
					MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
	}
	public: void carregar_dadosAmigos()
	{

		list<Amigo*> *amigos = this->controller_amigo->buscarTodos();

		for each (Amigo *it in *amigos)
		{
			cli::array<String^>^row1 =
				gcnew cli::array<String^>{
				gcnew String(it->getNome().c_str()),
					gcnew String(it->getSobrenome().c_str()),
					gcnew String(it->getEmail().c_str()),
					gcnew String(it->getGenero().c_str()),
					gcnew String(it->getTelefone().c_str())
			};
			this->data_grid_amigos->Rows->Add(row1);
		}

		if (this->data_grid_amigos->Rows->Count == 0)
		{
			this->ger_amigo_btn_alterar->Enabled = false;
			this->ger_amigo_btn_remover->Enabled = false;
		}

	}
	};
}
