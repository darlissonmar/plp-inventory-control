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
	/// Summary for gerenciarEmprestimosForm
	/// </summary>
	public ref class gerenciarEmprestimosForm : public System::Windows::Forms::Form
	{
	public:
		ControllerEmprestimo *controller_emprestimo;
		ControllerLivro* controller_livro;
		ControllerMidiaAudio* controller_midiaAudio;
		ControllerMidiaDados* controller_midiaDados;
		ControllerMidiaFilme* controller_midiaFilme;
		int _CODIGO_MATERIAL;

		gerenciarEmprestimosForm(void)
		{
			InitializeComponent();
			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();
			controller_emprestimo = new ControllerEmprestimo();
			carregar_dadosEmprestimos();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~gerenciarEmprestimosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ger_emp_btn_alterar;
	private: System::Windows::Forms::Button^  ger_emp_btn_novo;
	private: System::Windows::Forms::DataGridView^  data_grid_emprestimos;
	private: System::Windows::Forms::Button^  ger_emp_btn_remover;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  lb_data_devolucao;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  lb_emp_status;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  lb_material_titulo;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lb_amigo_nome;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  ger_emp_btn_devolver;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_amigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_mat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_data_emp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_data_dev;

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
			this->ger_emp_btn_alterar = (gcnew System::Windows::Forms::Button());
			this->ger_emp_btn_novo = (gcnew System::Windows::Forms::Button());
			this->data_grid_emprestimos = (gcnew System::Windows::Forms::DataGridView());
			this->ger_emp_btn_remover = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->ger_emp_btn_devolver = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lb_data_devolucao = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lb_emp_status = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lb_material_titulo = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lb_amigo_nome = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dt_grid_emp_col_amigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_mat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_data_emp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_data_dev = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_emprestimos))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Empréstimos";
			// 
			// ger_emp_btn_alterar
			// 
			this->ger_emp_btn_alterar->Location = System::Drawing::Point(651, 48);
			this->ger_emp_btn_alterar->Name = L"ger_emp_btn_alterar";
			this->ger_emp_btn_alterar->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_alterar->TabIndex = 2;
			this->ger_emp_btn_alterar->Text = L"Alterar";
			this->ger_emp_btn_alterar->UseVisualStyleBackColor = true;
			this->ger_emp_btn_alterar->Click += gcnew System::EventHandler(this, &gerenciarEmprestimosForm::ger_emp_btn_alterar_Click);
			// 
			// ger_emp_btn_novo
			// 
			this->ger_emp_btn_novo->Location = System::Drawing::Point(651, 19);
			this->ger_emp_btn_novo->Name = L"ger_emp_btn_novo";
			this->ger_emp_btn_novo->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_novo->TabIndex = 3;
			this->ger_emp_btn_novo->Text = L"Novo";
			this->ger_emp_btn_novo->UseVisualStyleBackColor = true;
			this->ger_emp_btn_novo->Click += gcnew System::EventHandler(this, &gerenciarEmprestimosForm::ger_emp_btn_novo_Click);
			// 
			// data_grid_emprestimos
			// 
			this->data_grid_emprestimos->AllowUserToAddRows = false;
			this->data_grid_emprestimos->AllowUserToDeleteRows = false;
			this->data_grid_emprestimos->AllowUserToOrderColumns = true;
			this->data_grid_emprestimos->BackgroundColor = System::Drawing::SystemColors::Control;
			this->data_grid_emprestimos->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->data_grid_emprestimos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->data_grid_emprestimos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_emprestimos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dt_grid_emp_col_amigo, 
				this->dt_grid_emp_col_mat, this->dt_grid_emp_col_data_emp, this->dt_grid_emp_col_data_dev});
			this->data_grid_emprestimos->Location = System::Drawing::Point(6, 19);
			this->data_grid_emprestimos->MultiSelect = false;
			this->data_grid_emprestimos->Name = L"data_grid_emprestimos";
			this->data_grid_emprestimos->ReadOnly = true;
			this->data_grid_emprestimos->RowHeadersVisible = false;
			this->data_grid_emprestimos->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->data_grid_emprestimos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_emprestimos->Size = System::Drawing::Size(639, 137);
			this->data_grid_emprestimos->TabIndex = 4;
			this->data_grid_emprestimos->SelectionChanged += gcnew System::EventHandler(this, &gerenciarEmprestimosForm::data_grid_emprestimos_SelectionChanged);
			// 
			// ger_emp_btn_remover
			// 
			this->ger_emp_btn_remover->Location = System::Drawing::Point(651, 133);
			this->ger_emp_btn_remover->Name = L"ger_emp_btn_remover";
			this->ger_emp_btn_remover->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_remover->TabIndex = 5;
			this->ger_emp_btn_remover->Text = L"Remover";
			this->ger_emp_btn_remover->UseVisualStyleBackColor = true;
			this->ger_emp_btn_remover->Click += gcnew System::EventHandler(this, &gerenciarEmprestimosForm::ger_emp_btn_remover_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ger_emp_btn_devolver);
			this->groupBox1->Controls->Add(this->ger_emp_btn_remover);
			this->groupBox1->Controls->Add(this->data_grid_emprestimos);
			this->groupBox1->Controls->Add(this->ger_emp_btn_alterar);
			this->groupBox1->Controls->Add(this->ger_emp_btn_novo);
			this->groupBox1->Location = System::Drawing::Point(8, 44);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(732, 162);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de empréstimos";
			// 
			// ger_emp_btn_devolver
			// 
			this->ger_emp_btn_devolver->Location = System::Drawing::Point(652, 78);
			this->ger_emp_btn_devolver->Name = L"ger_emp_btn_devolver";
			this->ger_emp_btn_devolver->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_devolver->TabIndex = 6;
			this->ger_emp_btn_devolver->Text = L"Devolver";
			this->ger_emp_btn_devolver->UseVisualStyleBackColor = true;
			this->ger_emp_btn_devolver->Click += gcnew System::EventHandler(this, &gerenciarEmprestimosForm::ger_emp_btn_devolver_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox2->Controls->Add(this->lb_data_devolucao);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->lb_emp_status);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->lb_material_titulo);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->lb_amigo_nome);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(14, 213);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(726, 90);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Detalhes do empréstimo";
			// 
			// lb_data_devolucao
			// 
			this->lb_data_devolucao->AutoSize = true;
			this->lb_data_devolucao->Location = System::Drawing::Point(571, 27);
			this->lb_data_devolucao->Name = L"lb_data_devolucao";
			this->lb_data_devolucao->Size = System::Drawing::Size(35, 13);
			this->lb_data_devolucao->TabIndex = 7;
			this->lb_data_devolucao->Text = L"label9";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(507, 27);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Devolvido:";
			// 
			// lb_emp_status
			// 
			this->lb_emp_status->AutoSize = true;
			this->lb_emp_status->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lb_emp_status->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lb_emp_status->Location = System::Drawing::Point(571, 52);
			this->lb_emp_status->Name = L"lb_emp_status";
			this->lb_emp_status->Size = System::Drawing::Size(41, 13);
			this->lb_emp_status->TabIndex = 5;
			this->lb_emp_status->Text = L"label7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(522, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Estado:";
			// 
			// lb_material_titulo
			// 
			this->lb_material_titulo->AutoSize = true;
			this->lb_material_titulo->Location = System::Drawing::Point(71, 52);
			this->lb_material_titulo->Name = L"lb_material_titulo";
			this->lb_material_titulo->Size = System::Drawing::Size(35, 13);
			this->lb_material_titulo->TabIndex = 3;
			this->lb_material_titulo->Text = L"label5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Material:";
			// 
			// lb_amigo_nome
			// 
			this->lb_amigo_nome->AutoSize = true;
			this->lb_amigo_nome->Location = System::Drawing::Point(71, 27);
			this->lb_amigo_nome->Name = L"lb_amigo_nome";
			this->lb_amigo_nome->Size = System::Drawing::Size(35, 13);
			this->lb_amigo_nome->TabIndex = 1;
			this->lb_amigo_nome->Text = L"label3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Amigo:";
			// 
			// dt_grid_emp_col_amigo
			// 
			this->dt_grid_emp_col_amigo->HeaderText = L"Amigo";
			this->dt_grid_emp_col_amigo->Name = L"dt_grid_emp_col_amigo";
			this->dt_grid_emp_col_amigo->ReadOnly = true;
			this->dt_grid_emp_col_amigo->Width = 120;
			// 
			// dt_grid_emp_col_mat
			// 
			this->dt_grid_emp_col_mat->HeaderText = L"Material";
			this->dt_grid_emp_col_mat->Name = L"dt_grid_emp_col_mat";
			this->dt_grid_emp_col_mat->ReadOnly = true;
			this->dt_grid_emp_col_mat->Width = 265;
			// 
			// dt_grid_emp_col_data_emp
			// 
			this->dt_grid_emp_col_data_emp->HeaderText = L"Emprestado em";
			this->dt_grid_emp_col_data_emp->Name = L"dt_grid_emp_col_data_emp";
			this->dt_grid_emp_col_data_emp->ReadOnly = true;
			this->dt_grid_emp_col_data_emp->Width = 120;
			// 
			// dt_grid_emp_col_data_dev
			// 
			this->dt_grid_emp_col_data_dev->HeaderText = L"Prazo de devolução";
			this->dt_grid_emp_col_data_dev->Name = L"dt_grid_emp_col_data_dev";
			this->dt_grid_emp_col_data_dev->ReadOnly = true;
			this->dt_grid_emp_col_data_dev->Width = 130;
			// 
			// gerenciarEmprestimosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 313);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"gerenciarEmprestimosForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gerenciamento de empréstimos";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_emprestimos))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ger_emp_btn_novo_Click(System::Object^  sender, System::EventArgs^  e) {
				 EmprestimoForm ^form_emprestimo = gcnew EmprestimoForm();
				 this->Close();
				 form_emprestimo->Show();
			 }
	private: System::Void data_grid_emprestimos_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
					 
					 if(this->data_grid_emprestimos->SelectedRows->Count > 0){

						ativa_buttons(true);

						 String^ titulo_chave = data_grid_emprestimos->SelectedRows[0]->Cells[1]->Value->ToString();
						 if(!System::String::IsNullOrEmpty(titulo_chave))
						 { 
							 Emprestimo* emprestimo = controller_emprestimo->buscarPorMatTitulo(
											String_utils::SystemToStdString(titulo_chave));

							 this->lb_amigo_nome->Text = get_nomeCompleto(emprestimo->getAmigo());
							 this->lb_material_titulo->Text = get_materialTipoTitulo(emprestimo->getMaterial()->getTitulo())  +" "+ 
								 gcnew String (emprestimo->getMaterial()->getTitulo().c_str());
							 this->lb_data_devolucao->Text = get_devolvido(gcnew String(emprestimo->getDataDevolucao().c_str()));
			 
							 set_estadoDetalhe(emprestimo);

						 } else {
							 MessageBox::Show("Por favor, selecione um amigo!","Erro",
								 MessageBoxButtons::OK, MessageBoxIcon::Warning);
						 }
					 } 
					 else {
						
						 ativa_buttons(false);
					 }
				 }
	private: System::Void ger_emp_btn_remover_Click(System::Object^  sender, System::EventArgs^  e) {
					 
					  String^ titulo_material = data_grid_emprestimos->SelectedRows[0]->Cells[1]->Value->ToString();
					
					  int emprestimo_id;
					  String^ data_devolucao;

					  if(!System::String::IsNullOrEmpty(titulo_material))
					  { 

						  if(MessageBox::Show ("Tem certeza que deseja remover esse empréstimo ?", "Remover",
							  MessageBoxButtons::YesNo, MessageBoxIcon::Question)
							  == System::Windows::Forms::DialogResult::Yes)
							  {

								emprestimo_id = controller_emprestimo->buscarPorMatTitulo(String_utils::SystemToStdString(titulo_material))->getId();
								data_devolucao = gcnew String (
												controller_emprestimo
												->buscarPorMatTitulo(String_utils::SystemToStdString(titulo_material))
												->getDataDevolucao().c_str());
								
								if(!System::String::IsNullOrEmpty(data_devolucao))	
									{
										if(controller_emprestimo->deletar(emprestimo_id))
											{
												MessageBox::Show("Empréstimo removido com sucesso", "Sucesso",
												MessageBoxButtons::OK, MessageBoxIcon::Information);
												}
										}
										else
											{
												MessageBox::Show("Não é possível remover um empréstimo não devolvido", "Erro",
												MessageBoxButtons::OK, MessageBoxIcon::Warning);
												}
									}

						  this->data_grid_emprestimos->Rows->Clear();
						  carregar_dadosEmprestimos();
						  }
						else
							{
								MessageBox::Show("Por favor, selecione um empréstimo!","Erro",
								MessageBoxButtons::OK, MessageBoxIcon::Warning);
								}				  
					  }
	private: System::Void ger_emp_btn_devolver_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 String^ titulo_material = data_grid_emprestimos->SelectedRows[0]->Cells[1]->Value->ToString();
				
				 if(!System::String::IsNullOrEmpty(titulo_material))
				 { 
					 
					 DateTime^ data_hoje = gcnew DateTime();
					 data_hoje = DateTime::Now;
					 String^ data_string = 
								  Convert::ToString(data_hoje->Day) +"-"
								+ Convert::ToString(data_hoje->Month)+ "-"
								+ Convert::ToString(data_hoje->Year); 
					 
					 if(MessageBox::Show ("Devolver para a data de hoje: " + data_string + " ?", "Devolver",
						 MessageBoxButtons::YesNo, MessageBoxIcon::Question)
						 == System::Windows::Forms::DialogResult::Yes)
						{
							Emprestimo* emprestimo = controller_emprestimo->buscarPorMatTitulo(String_utils::SystemToStdString(titulo_material));
														
							emprestimo->setDataDevolucao(String_utils::SystemToStdString(data_string));
							// settar o bool atrasado

							if(controller_emprestimo->atualizar(emprestimo))
								{
									MessageBox::Show("Empréstimo devolvido com sucesso", "Sucesso",
									 MessageBoxButtons::OK, MessageBoxIcon::Information);
									} 
									else
										{
											MessageBox::Show("Ocorreu um erro durante a operação", "Erro",
											MessageBoxButtons::OK, MessageBoxIcon::Error);
											}
						}
						/* else
						 {
							 String^ _data_devolucao;

							 Emprestimo* emprestimo = controller_emprestimo->buscar(String_utils::SystemToStdString(nome_amigo));
							 

							 // abrir form formSetDataDevolucao(_data_devolucao, emprestimo->getDataEmprestimo());
							 
							 emprestimo->setDataDevolucao(String_utils::SystemToStdString(data_hoje->ToString()));
							 // settar o bool atrasado
							 if(controller_emprestimo->atualizar(emprestimo))
								 {
									 MessageBox::Show("Empréstimo devolvido com sucesso", "Sucesso",
									 MessageBoxButtons::OK, MessageBoxIcon::Information);
									 }
							 		 else
										 {
											 MessageBox::Show("Ocorreu um erro durante a operação", "Erro",
											 MessageBoxButtons::OK, MessageBoxIcon::Error);
											 }
							}*/
					 this->data_grid_emprestimos->Rows->Clear();
					 carregar_dadosEmprestimos();

					}
					 else
					 {
					 MessageBox::Show("Por favor, selecione um empréstimo!","Erro",
						 MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
			  }
	private: String^ get_stringTipoMidia(EnumTipoMidia::Tipo _tipo_midia)
					  {

						  String^ tipo_midia;

						  switch(_tipo_midia)
						  {
						  case EnumTipoMidia::CD: 
							  tipo_midia = gcnew String("CD");
							  break;
						  case EnumTipoMidia::DVD:
							  tipo_midia = gcnew String("DVD");
							  break;
						  case EnumTipoMidia::BLURAY: 
							  tipo_midia = gcnew String("Blu-ray");
							  break;
						  default: 
							  break;
						  }
						  return tipo_midia;
					  }
	private: String^ get_materialTipoTitulo(string titulo_material)
			 {
					 
				 String^ tipo_material;
				 Livro* livro = controller_livro->buscar(titulo_material);
				 MidiaAudio* midia_audio = controller_midiaAudio->buscar(titulo_material);
				 MidiaFilme* midia_filme = controller_midiaFilme->buscar(titulo_material);
				 MidiaDados* midia_dados = controller_midiaDados->buscar(titulo_material);
				 
				 
				 if( livro != NULL )
				 {
					 tipo_material = "Livro:";
					 _CODIGO_MATERIAL = COD_LIVRO;
				 }
				 else if (midia_filme != NULL)
				 {
					 tipo_material = get_stringTipoMidia(midia_filme->getTipoMidia()) + " de Filme: ";
					  _CODIGO_MATERIAL = COD_FILME;
				 }
				 else if ( midia_audio != NULL )
				 {
					 tipo_material = get_stringTipoMidia(midia_audio->getTipoMidia()) + " de Audio: ";
					  _CODIGO_MATERIAL = COD_AUDIO;
				 } 
				 else if ( midia_dados != NULL)
				 {
					 tipo_material = get_stringTipoMidia(midia_dados->getTipoMidia()) + " de Dados: ";
					  _CODIGO_MATERIAL = COD_DADOS;
				 }

				 return tipo_material;
			 }
	private: String^ get_devolvido(String^ data_devolucao)
			 {
				 String^ devolvido_status;
				 if(String::IsNullOrEmpty(data_devolucao))
					 devolvido_status = "Não";
				 else
					 devolvido_status = "Sim, em " + data_devolucao;

				 return devolvido_status;	
			 }
	private: String^ get_nomeCompleto(Amigo* amigo)
			 {				
				 String^ nome_completo =  
					 gcnew String(amigo->getNome().c_str()) + " " + gcnew String(amigo->getSobrenome().c_str());
				 return nome_completo;
			 }
	private: int get_diaDoAno(String^ data_string)
			 {
				 DateTime^ date = gcnew DateTime();
				 IFormatProvider^ culture = gcnew  System::Globalization::CultureInfo("pt-BR", true);
				 date = DateTime::Parse(data_string,culture,System::Globalization::DateTimeStyles::AssumeLocal);

				 return date->DayOfYear;
			 }	
	
	private: void set_estadoDetalhe(Emprestimo* emprestimo)
			 {

				 if (System::String::IsNullOrEmpty(gcnew String(emprestimo->getDataDevolucao().c_str())))
				 {
					 this->ger_emp_btn_devolver->Enabled = true;
					 DateTime^ data_hoje = gcnew DateTime();
					 data_hoje = DateTime::Now; 

					 int dia_doAnoHj = data_hoje->DayOfYear;
					 if( 
						 ( get_diaDoAno(gcnew String(emprestimo->getDataEmprestimo().c_str())) 
						 + emprestimo->getPrazoDias())
						 <= dia_doAnoHj)
					 {

						 int dias_atraso = dia_doAnoHj - (get_diaDoAno(gcnew String(emprestimo->getDataEmprestimo().c_str())) 
							 + emprestimo->getPrazoDias());

						 this->lb_emp_status->Text = "Vencido há " + Convert::ToString(dias_atraso)+" dias";
						 this->lb_emp_status->Font->Bold;
						 this->lb_emp_status->ForeColor = System::Drawing::Color::Red;
					 }
					 else 
					 {
						 this->lb_emp_status->Text = "Normal";
						 this->lb_emp_status->Font->Bold;
						 this->lb_emp_status->ForeColor = System::Drawing::Color::Green;								
					 }

				 } else 
					 if(  get_diaDoAno(gcnew String(emprestimo->getDataDevolucao().c_str()))
						 <= get_diaDoAno(gcnew String(emprestimo->getDataEmprestimo().c_str()))
						 + emprestimo->getPrazoDias()
						 )
					 {			
						 
						 this->ger_emp_btn_devolver->Enabled = false;
						 this->lb_emp_status->Text = "Normal" ;
						 this->lb_emp_status->Font->Bold;
						 this->lb_emp_status->ForeColor = System::Drawing::Color::Green;
					 }
					 else
					 {
						 int dias_atraso = get_diaDoAno(gcnew String(emprestimo->getDataDevolucao().c_str())) - 
							 (get_diaDoAno(gcnew String(emprestimo->getDataEmprestimo().c_str())) 
							 + emprestimo->getPrazoDias());

						 this->lb_emp_status->Text = "Com atraso de " +Convert::ToString(dias_atraso)+ " dias";
						 this->lb_emp_status->Font->Bold;
						 this->lb_emp_status->ForeColor = System::Drawing::Color::Red;
					 }
			 }	
	private: void ativa_buttons(bool ativando)
		{
			if(ativando)
			{
				this->ger_emp_btn_alterar->Enabled = true;
				this->ger_emp_btn_devolver->Enabled = true;
				this->ger_emp_btn_remover->Enabled = true;
			} 
			else {

				this->lb_amigo_nome->Text = "";
				this->lb_material_titulo->Text = ""; 
				this->lb_data_devolucao->Text = "";
				this->lb_emp_status->Text ="";
				this->ger_emp_btn_alterar->Enabled = false;
				this->ger_emp_btn_devolver->Enabled = false;
				this->ger_emp_btn_remover->Enabled = false;

			}
	}
	private: void carregar_dadosEmprestimos()
		{

			list<Emprestimo*> *emprestimos = this->controller_emprestimo->buscarTodos();

			for each (Emprestimo *it in *emprestimos)
			{
				array<String^>^row1 = 
					gcnew array<String^>{
						gcnew String(it->getAmigo()->getNome().c_str()),
							gcnew String(it->getMaterial()->getTitulo().c_str()),
							gcnew String(it->getDataEmprestimo().c_str()),
							gcnew String(Convert::ToString(it->getPrazoDias())+ " dias"),
				};
				this->data_grid_emprestimos->Rows->Add(row1);
			}	

			if(this->data_grid_emprestimos->Rows->Count == 0)
			{
				ativa_buttons(false);
			}

		}
	
	private: System::Void ger_emp_btn_alterar_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 if(this->data_grid_emprestimos->SelectedRows->Count > 0){

					 ativa_buttons(true);

					 String^ titulo_chave = data_grid_emprestimos->SelectedRows[0]->Cells[1]->Value->ToString();
					 if(!System::String::IsNullOrEmpty(titulo_chave))
					 { 
						 Emprestimo* emprestimo = controller_emprestimo->buscarPorMatTitulo(
							 String_utils::SystemToStdString(titulo_chave));
					EmprestimoForm ^form_emprestimo = gcnew EmprestimoForm(emprestimo, _CODIGO_MATERIAL);
					this->Close();
					form_emprestimo->Show();
					 }
				 }
			 }
		};
	}
