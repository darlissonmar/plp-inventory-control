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
	/// Summary for cadAmigoForm
	/// </summary>
	public ref class cadAmigoForm : public System::Windows::Forms::Form
	{
		
	private:
		ControllerAmigo* controller_amigo;
		int _codigo_operacao;
		Amigo *_amigo;
		DataGridView^ _data_grid_amigos;

	public:	
		
		cadAmigoForm(DataGridView^ data_grid_amigos, Amigo *amigo)
		{			
			controller_amigo = new ControllerAmigo();
			InitializeComponent();	 
			_amigo = amigo;
			_codigo_operacao = COD_EDITAR;
			_data_grid_amigos = data_grid_amigos;
			editar_amigoNoForm(_amigo);
		}
	
	public:		
		cadAmigoForm(DataGridView^ data_grid_amigos)
		{
			controller_amigo = new ControllerAmigo();
			InitializeComponent();
			_data_grid_amigos = data_grid_amigos;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cadAmigoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comBox_cad_user_gen;
	private: System::Windows::Forms::TextBox^  txtBox_cad_user_end;
	private: System::Windows::Forms::TextBox^  txtBox_cad_user_telef;
	private: System::Windows::Forms::TextBox^  txtBox_cad_user_email;
	private: System::Windows::Forms::TextBox^  txtBox_cad_user_sobnome;
	private: System::Windows::Forms::TextBox^  txtBox_cad_user_nome;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lb_titulo;
	private: System::Windows::Forms::Button^  bt_cad_amigo;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comBox_cad_user_gen = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_cad_user_end = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_telef = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_email = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_sobnome = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_nome = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lb_titulo = (gcnew System::Windows::Forms::Label());
			this->bt_cad_amigo = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comBox_cad_user_gen);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_end);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_telef);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_email);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_sobnome);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_nome);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(7, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(307, 190);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados Pessoais";
			// 
			// comBox_cad_user_gen
			// 
			this->comBox_cad_user_gen->FormattingEnabled = true;
			this->comBox_cad_user_gen->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Masculino", L"Feminino"});
			this->comBox_cad_user_gen->Location = System::Drawing::Point(76, 107);
			this->comBox_cad_user_gen->Name = L"comBox_cad_user_gen";
			this->comBox_cad_user_gen->Size = System::Drawing::Size(151, 21);
			this->comBox_cad_user_gen->TabIndex = 11;
			// 
			// txtBox_cad_user_end
			// 
			this->txtBox_cad_user_end->Location = System::Drawing::Point(76, 161);
			this->txtBox_cad_user_end->Name = L"txtBox_cad_user_end";
			this->txtBox_cad_user_end->Size = System::Drawing::Size(219, 20);
			this->txtBox_cad_user_end->TabIndex = 10;
			// 
			// txtBox_cad_user_telef
			// 
			this->txtBox_cad_user_telef->Location = System::Drawing::Point(76, 134);
			this->txtBox_cad_user_telef->Name = L"txtBox_cad_user_telef";
			this->txtBox_cad_user_telef->Size = System::Drawing::Size(151, 20);
			this->txtBox_cad_user_telef->TabIndex = 9;
			// 
			// txtBox_cad_user_email
			// 
			this->txtBox_cad_user_email->Location = System::Drawing::Point(75, 80);
			this->txtBox_cad_user_email->Name = L"txtBox_cad_user_email";
			this->txtBox_cad_user_email->Size = System::Drawing::Size(152, 20);
			this->txtBox_cad_user_email->TabIndex = 8;
			// 
			// txtBox_cad_user_sobnome
			// 
			this->txtBox_cad_user_sobnome->Location = System::Drawing::Point(75, 53);
			this->txtBox_cad_user_sobnome->Name = L"txtBox_cad_user_sobnome";
			this->txtBox_cad_user_sobnome->Size = System::Drawing::Size(152, 20);
			this->txtBox_cad_user_sobnome->TabIndex = 7;
			// 
			// txtBox_cad_user_nome
			// 
			this->txtBox_cad_user_nome->Location = System::Drawing::Point(75, 26);
			this->txtBox_cad_user_nome->Name = L"txtBox_cad_user_nome";
			this->txtBox_cad_user_nome->Size = System::Drawing::Size(152, 20);
			this->txtBox_cad_user_nome->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Endereço";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Gênero";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Telefone";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Sobrenome";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nome";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(88)), 
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel1->Controls->Add(this->lb_titulo);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(321, 43);
			this->panel1->TabIndex = 1;
			// 
			// lb_titulo
			// 
			this->lb_titulo->AutoSize = true;
			this->lb_titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lb_titulo->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lb_titulo->Location = System::Drawing::Point(3, 7);
			this->lb_titulo->Name = L"lb_titulo";
			this->lb_titulo->Size = System::Drawing::Size(187, 25);
			this->lb_titulo->TabIndex = 0;
			this->lb_titulo->Text = L"Cadastrar Amigo";
			// 
			// bt_cad_amigo
			// 
			this->bt_cad_amigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bt_cad_amigo->Location = System::Drawing::Point(98, 245);
			this->bt_cad_amigo->Name = L"bt_cad_amigo";
			this->bt_cad_amigo->Size = System::Drawing::Size(110, 23);
			this->bt_cad_amigo->TabIndex = 2;
			this->bt_cad_amigo->Text = L"Efetuar operação";
			this->bt_cad_amigo->UseVisualStyleBackColor = true;
			this->bt_cad_amigo->Click += gcnew System::EventHandler(this, &cadAmigoForm::bt_cad_amigo_Click);
			// 
			// cadAmigoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 274);
			this->Controls->Add(this->bt_cad_amigo);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"cadAmigoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cadastrar Amigo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		public: System::Void bt_cad_amigo_Click(System::Object^  sender, System::EventArgs^  e)
				{	
					Amigo* amigo_to_grid;
					switch(this->_codigo_operacao)
						{
					case COD_EDITAR:
							amigo_to_grid = get_amigoDoForm(true);
							if(controller_amigo->atualizar(amigo_to_grid))
							
							{
								int index_remove = this->_data_grid_amigos->SelectedRows[0]->Cells[0]->RowIndex;
								this->_data_grid_amigos->Rows->RemoveAt(index_remove);
								
								array<String^>^row1 = 
								gcnew array<String^>{
									gcnew String(amigo_to_grid->getNome().c_str()),
									gcnew String(amigo_to_grid->getSobrenome().c_str()),
									gcnew String(amigo_to_grid->getEmail().c_str()),
									gcnew String(amigo_to_grid->getGenero().c_str()),
									gcnew String(amigo_to_grid->getTelefone().c_str())
									};
									
								this->_data_grid_amigos->Rows->Add(row1);									
														
									MessageBox::Show("Amigo editado com sucesso", "Sucesso",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
									this->Close();
								}	break; //editar
							
							case COD_VISUALIZAR:  				  
								this->Close();
								break; //visualizar

							default: 
								if( !System::String::IsNullOrEmpty(this->txtBox_cad_user_nome->Text) ||
									!System::String::IsNullOrEmpty(this->txtBox_cad_user_sobnome->Text) ||
									!System::String::IsNullOrEmpty(this->txtBox_cad_user_email->Text) ||
									!System::String::IsNullOrEmpty(this->txtBox_cad_user_telef->Text) ||
									!System::String::IsNullOrEmpty(this->txtBox_cad_user_end->Text) ||
									!System::String::IsNullOrEmpty(this->comBox_cad_user_gen->Text)
									)
								{
									amigo_to_grid = get_amigoDoForm(false);
									if(controller_amigo->adicionar(amigo_to_grid))
									{
									
									array<String^>^row1 = 
										gcnew array<String^>{
										gcnew String(amigo_to_grid->getNome().c_str()),
										gcnew String(amigo_to_grid->getSobrenome().c_str()),
										gcnew String(amigo_to_grid->getEmail().c_str()),
										gcnew String(amigo_to_grid->getGenero().c_str()),
										gcnew String(amigo_to_grid->getTelefone().c_str())
										};
										this->_data_grid_amigos->Rows->Add(row1);
										
										MessageBox::Show("Amigo cadastrado com sucesso", "Sucesso",
										MessageBoxButtons::OK, MessageBoxIcon::Information);
										this->Close();
									} 
								} else 
								{
									MessageBox::Show("Preencha os campos", "Aviso",
										MessageBoxButtons::OK, MessageBoxIcon::Warning);
								}
								break; //cadastrarbreak;
					}
			  }
		 
		public: 
			void set_amigoNoForm(Amigo *amigo)
			{
				this->txtBox_cad_user_nome->Text = gcnew String (amigo->getNome().c_str());
				this->txtBox_cad_user_sobnome->Text = gcnew String(amigo->getSobrenome().c_str());
				this->txtBox_cad_user_email->Text = gcnew String(amigo->getEmail().c_str());
				this->txtBox_cad_user_telef->Text = gcnew String(amigo->getTelefone().c_str());
				this->comBox_cad_user_gen->Text = gcnew String(amigo->getGenero().c_str());
				this->txtBox_cad_user_end->Text = gcnew String(amigo->getEndereco().c_str());
			}

		private: 
			Amigo* get_amigoDoForm(bool editando){

			Amigo *amigo;
			if (editando){
				_amigo->setNome(String_utils::SystemToStdString(this->txtBox_cad_user_nome->Text));
				_amigo->setSobrenome(String_utils::SystemToStdString(this->txtBox_cad_user_sobnome->Text));
				_amigo->setEmail(String_utils::SystemToStdString(this->txtBox_cad_user_email->Text));
				_amigo->setTelefone(String_utils::SystemToStdString(this->txtBox_cad_user_telef->Text));
				_amigo->setGenero(String_utils::SystemToStdString(this->comBox_cad_user_gen->Text));
				_amigo->setEndereco(String_utils::SystemToStdString(this->txtBox_cad_user_end->Text));

				amigo = _amigo;
			}else{
				amigo = new Amigo(1,
					String_utils::SystemToStdString(this->txtBox_cad_user_nome->Text),
					String_utils::SystemToStdString(this->txtBox_cad_user_sobnome->Text),
					String_utils::SystemToStdString(this->txtBox_cad_user_email->Text),
					String_utils::SystemToStdString(this->txtBox_cad_user_telef->Text),
					String_utils::SystemToStdString(this->comBox_cad_user_gen->Text),
					String_utils::SystemToStdString(this->txtBox_cad_user_end->Text));
			}

			return amigo;
			}

		private:
			void editar_amigoNoForm(Amigo *amigo)
			{
				this->lb_titulo->Text = gcnew String("Editar Amigo");
				set_amigoNoForm(amigo);
			}
			void set_formReadOnly(){
				this->txtBox_cad_user_nome->ReadOnly = true;
				this->txtBox_cad_user_sobnome->ReadOnly = true;
				this->txtBox_cad_user_email->ReadOnly = true;
				this->txtBox_cad_user_telef->ReadOnly = true; 
				this->comBox_cad_user_gen->Enabled = false; //DropDownStyle = ComboBoxStyle::Simple;
				this->txtBox_cad_user_end->ReadOnly = true;
			}
		};
	}