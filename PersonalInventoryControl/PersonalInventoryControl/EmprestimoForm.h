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
	/// Summary for EmprestimoForm
	/// </summary>
	public ref class EmprestimoForm : public System::Windows::Forms::Form
	{
	public:
		ControllerAmigo* controller_amigo;
		ControllerLivro* controller_livro;
		ControllerMidiaAudio* controller_midiaAudio;
		ControllerMidiaDados* controller_midiaDados;
		ControllerMidiaFilme* controller_midiaFilme;
		ControllerEmprestimo* controller_emprestimo;
		int _CODIGO_MATERIAL;
		int _CODIGO_OPERACAO;
		
		EmprestimoForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();
			controller_emprestimo = new ControllerEmprestimo();
			controller_amigo = new ControllerAmigo();
			this->btn_emprestar->Enabled = false;
			this->label5->Visible = false;
			this->dateTimePicker1->Visible = false;

		}

		EmprestimoForm(Emprestimo* emprestimo, int codigo_material)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();
			controller_emprestimo = new ControllerEmprestimo();
			controller_amigo = new ControllerAmigo();
			this->btn_emprestar->Enabled = false;
			_CODIGO_MATERIAL = codigo_material;
			_CODIGO_OPERACAO = COD_EDITAR;
			set_materialIsDisponivel(_CODIGO_MATERIAL,emprestimo,true);
			set_dateMaxToday();
			prepare_editarEmprestimo(emprestimo);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EmprestimoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  lb_cod_material;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_amigo;
	private: System::Windows::Forms::Button^  btn_busca_amigo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox_material;
	private: System::Windows::Forms::Button^  btn_busca_material;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btn_emprestar;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_amigo = (gcnew System::Windows::Forms::TextBox());
			this->btn_busca_amigo = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_material = (gcnew System::Windows::Forms::TextBox());
			this->btn_busca_material = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_emprestar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->lb_cod_material = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(88)), 
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(642, 51);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(14, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Empréstimo de material";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Amigo";
			// 
			// textBox_amigo
			// 
			this->textBox_amigo->Location = System::Drawing::Point(118, 82);
			this->textBox_amigo->Name = L"textBox_amigo";
			this->textBox_amigo->ReadOnly = true;
			this->textBox_amigo->Size = System::Drawing::Size(264, 20);
			this->textBox_amigo->TabIndex = 2;
			this->textBox_amigo->TextChanged += gcnew System::EventHandler(this, &EmprestimoForm::textBox_amigo_TextChanged);
			// 
			// btn_busca_amigo
			// 
			this->btn_busca_amigo->Location = System::Drawing::Point(62, 80);
			this->btn_busca_amigo->Name = L"btn_busca_amigo";
			this->btn_busca_amigo->Size = System::Drawing::Size(49, 23);
			this->btn_busca_amigo->TabIndex = 3;
			this->btn_busca_amigo->Text = L"Buscar";
			this->btn_busca_amigo->UseVisualStyleBackColor = true;
			this->btn_busca_amigo->Click += gcnew System::EventHandler(this, &EmprestimoForm::btn_busca_amigo_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Material";
			// 
			// textBox_material
			// 
			this->textBox_material->Location = System::Drawing::Point(118, 116);
			this->textBox_material->Name = L"textBox_material";
			this->textBox_material->ReadOnly = true;
			this->textBox_material->Size = System::Drawing::Size(264, 20);
			this->textBox_material->TabIndex = 7;
			this->textBox_material->TextChanged += gcnew System::EventHandler(this, &EmprestimoForm::textBox_material_TextChanged);
			// 
			// btn_busca_material
			// 
			this->btn_busca_material->Location = System::Drawing::Point(62, 114);
			this->btn_busca_material->Name = L"btn_busca_material";
			this->btn_busca_material->Size = System::Drawing::Size(49, 23);
			this->btn_busca_material->TabIndex = 8;
			this->btn_busca_material->Text = L"Buscar";
			this->btn_busca_material->UseVisualStyleBackColor = true;
			this->btn_busca_material->Click += gcnew System::EventHandler(this, &EmprestimoForm::btn_busca_material_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(394, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Prazo pra devolver ( dias ) :";
			// 
			// btn_emprestar
			// 
			this->btn_emprestar->Location = System::Drawing::Point(519, 157);
			this->btn_emprestar->Name = L"btn_emprestar";
			this->btn_emprestar->Size = System::Drawing::Size(111, 23);
			this->btn_emprestar->TabIndex = 11;
			this->btn_emprestar->Text = L"Efetuar operação";
			this->btn_emprestar->UseVisualStyleBackColor = true;
			this->btn_emprestar->Click += gcnew System::EventHandler(this, &EmprestimoForm::btn_emprestar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(7, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(623, 93);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados do empréstimos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(440, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Data Empréstimo:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(536, 21);
			this->dateTimePicker1->MaxDate = System::DateTime(2013, 4, 21, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(81, 20);
			this->dateTimePicker1->TabIndex = 11;
			this->dateTimePicker1->Value = System::DateTime(2013, 4, 21, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &EmprestimoForm::dateTimePicker1_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(536, 56);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(51, 20);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Click += gcnew System::EventHandler(this, &EmprestimoForm::numericUpDown1_Click);
			// 
			// lb_cod_material
			// 
			this->lb_cod_material->AutoSize = true;
			this->lb_cod_material->Enabled = false;
			this->lb_cod_material->Location = System::Drawing::Point(4, 162);
			this->lb_cod_material->Name = L"lb_cod_material";
			this->lb_cod_material->Size = System::Drawing::Size(0, 13);
			this->lb_cod_material->TabIndex = 13;
			// 
			// EmprestimoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 186);
			this->Controls->Add(this->lb_cod_material);
			this->Controls->Add(this->btn_emprestar);
			this->Controls->Add(this->btn_busca_material);
			this->Controls->Add(this->textBox_material);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_busca_amigo);
			this->Controls->Add(this->textBox_amigo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"EmprestimoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Empréstimo de Material";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_busca_amigo_Click(System::Object^  sender, System::EventArgs^  e) {

				 Busca_amigo_form^ busca_amigo = gcnew Busca_amigo_form(this->textBox_amigo);
				 busca_amigo->Show();
			 }
	private: System::Void btn_busca_material_Click(System::Object^  sender, System::EventArgs^  e) {
				buscar_material_form^ busca_material = gcnew buscar_material_form(this->textBox_material,this->lb_cod_material);
				busca_material->Show();
		 }
	private: System::Void btn_emprestar_Click(System::Object^  sender, System::EventArgs^  e) {

				 
				String^ nome_chave = this->textBox_amigo->Text;
				String^ pattern = "^(\\S*)";
				System::Text::RegularExpressions::Regex ^ regex = gcnew System::Text::RegularExpressions::Regex( pattern);
				System::Text::RegularExpressions::Match^ match = regex->Match(nome_chave);
				String^ nome_chave_split = match->Value;
				Amigo* amigo = controller_amigo->buscar(String_utils::SystemToStdString(nome_chave_split));

				 Livro* livro;
				 MidiaAudio* midia_audio;
				 MidiaFilme* midia_filme;
				 MidiaDados* midia_dados;
				 Emprestimo* emprestimo;
				 String^ data_string;

				 if (_CODIGO_OPERACAO == COD_EDITAR)
				 {
					 DateTime^ data_hoje = dateTimePicker1->Value;
					 data_string = 
						 Convert::ToString(data_hoje->Day) +"-"
						 + Convert::ToString(data_hoje->Month)+ "-"
						 + Convert::ToString(data_hoje->Year);
					 this->lb_cod_material->Text = Convert::ToString(_CODIGO_MATERIAL);

					} 
					else 
						{
							DateTime^ data_hoje = gcnew DateTime();
							data_hoje = DateTime::Now;
							data_string = 
								Convert::ToString(data_hoje->Day) +"-"
								+ Convert::ToString(data_hoje->Month)+ "-"
								+ Convert::ToString(data_hoje->Year); 
					
							 }
				 
				 int prazo_dias = Convert::ToUInt32(this->numericUpDown1->Text);
				 
				 int codigo = Convert::ToUInt32(this->lb_cod_material->Text);

				 delete(this->lb_cod_material);

				 switch( codigo )
				 {
				 case COD_AUDIO:

						midia_audio = controller_midiaAudio
							->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
						midia_audio->setDisponivel(false);
						emprestimo = 
							new Emprestimo(1, String_utils::SystemToStdString(data_string),"",prazo_dias,false,amigo,(Material*) midia_audio);
						
						if(_CODIGO_OPERACAO == COD_EDITAR)
						{
							if (controller_emprestimo->atualizar(emprestimo))
							{

								controller_midiaAudio->atualizar(midia_audio);
								MessageBox::Show("Empréstimo atualizado com sucesso.","Sucesso",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
							} 
							else 
							{
								MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
									MessageBoxButtons::OK, MessageBoxIcon::Warning);
							}		
						} 
						else {
							if (controller_emprestimo->adicionar(emprestimo))
							{

								controller_midiaAudio->atualizar(midia_audio);
								MessageBox::Show("Empréstimo efetuado com sucesso.","Sucesso",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
							} 
							else 
							{
								MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
									MessageBoxButtons::OK, MessageBoxIcon::Warning);
							}		

						}

						break;

				 case COD_DADOS:
					 
						midia_dados = controller_midiaDados
							->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
						midia_dados->setDisponivel(false);
						emprestimo = 
							new Emprestimo(1, String_utils::SystemToStdString(data_string),"",prazo_dias,false,amigo,(Material*) midia_dados);

						if ( _CODIGO_OPERACAO == COD_EDITAR)
						{
							if (controller_emprestimo->atualizar(emprestimo))
							{
								controller_midiaDados->atualizar(midia_dados);
								MessageBox::Show("Empréstimo atualizado com sucesso.","Sucesso",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
							} 
							else 
							{
								MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
									MessageBoxButtons::OK, MessageBoxIcon::Warning);
							}		

							}
							else {
								if (controller_emprestimo->adicionar(emprestimo))
								{
									controller_midiaDados->atualizar(midia_dados);
									MessageBox::Show("Empréstimo efetuado com sucesso.","Sucesso",
										MessageBoxButtons::OK, MessageBoxIcon::Information);
								} 
								else 
								{
									MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
										MessageBoxButtons::OK, MessageBoxIcon::Warning);
								}		
						}
						
						break;

				 case COD_FILME:

						midia_filme = controller_midiaFilme
							->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
						
						midia_filme->setDisponivel(false);

						emprestimo = 
							new Emprestimo(1, String_utils::SystemToStdString(data_string),"",prazo_dias,false,amigo,(Material*) midia_filme);

						if ( _CODIGO_OPERACAO == COD_EDITAR)
						{
							if (controller_emprestimo->atualizar(emprestimo))
							{
								controller_midiaFilme->atualizar(midia_filme);
								MessageBox::Show("Empréstimo atualizado com sucesso.","Sucesso",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
								} 
								else 
								{
									MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
									MessageBoxButtons::OK, MessageBoxIcon::Warning);
									}
							}
							else 
								{
									if (controller_emprestimo->adicionar(emprestimo))
									{
										controller_midiaFilme->atualizar(midia_filme);
										MessageBox::Show("Empréstimo efetuado com sucesso.","Sucesso",
											MessageBoxButtons::OK, MessageBoxIcon::Information);
									} 
									else 
									{
										MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
										MessageBoxButtons::OK, MessageBoxIcon::Warning);
										}
								}		

						break;

				 case COD_LIVRO:
						
						 livro = controller_livro
							 ->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
						
						 livro->setDisponivel(false);

						 emprestimo = 
							 new Emprestimo(1, String_utils::SystemToStdString(data_string),"",prazo_dias,false,amigo,(Material*) livro);

						 if ( _CODIGO_OPERACAO == COD_EDITAR)
						 {
							 if (controller_emprestimo->atualizar(emprestimo))
							 {
								 controller_livro->atualizar(livro);
								 MessageBox::Show("Empréstimo atualizado com sucesso.","Sucesso",
									 MessageBoxButtons::OK, MessageBoxIcon::Information);
							 } 
							 else 
							 {
								 MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
									 MessageBoxButtons::OK, MessageBoxIcon::Warning);
							 }		

							}
							 else
							 {
								 if (controller_emprestimo->adicionar(emprestimo))
								 {
									 controller_livro->atualizar(livro);
									 MessageBox::Show("Empréstimo efetuado com sucesso.","Sucesso",
										 MessageBoxButtons::OK, MessageBoxIcon::Information);
									 } 
									 else 
									 {
										 MessageBox::Show("Ocorreu um erro durante a operação.","Erro",
										 MessageBoxButtons::OK, MessageBoxIcon::Warning);
										}		
								 }
						break;

				 default: 
						break;
				 }	 			 
				 this->Close();
			}
	
	private: System::Void textBox_amigo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 if( !System::String::IsNullOrEmpty(this->textBox_material->Text) &&
					 Convert::ToInt32(this->numericUpDown1->Text) != 0)
				 {
					 this->btn_emprestar->Enabled = true;
				 } else
				 {
					 this->btn_emprestar->Enabled = false;
				 }
			 }
	private: System::Void textBox_material_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if( !System::String::IsNullOrEmpty(this->textBox_amigo->Text) &&
					 Convert::ToInt32(this->numericUpDown1->Text) != 0)
				 {
					 this->btn_emprestar->Enabled = true;
				 } else
				 {
					 this->btn_emprestar->Enabled = false;
				 }
		 }			
	private: System::Void numericUpDown1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( !System::String::IsNullOrEmpty(this->textBox_material->Text) &&
				 !System::String::IsNullOrEmpty(this->textBox_amigo->Text) &&
				 Convert::ToInt32(this->numericUpDown1->Text) > 0)
			 {
				 this->btn_emprestar->Enabled = true;
			 } else
			 {
				 this->btn_emprestar->Enabled = false;
			 }

		 }
	private: void set_materialIsDisponivel(int codigo_material, Emprestimo* emprestimo, bool isDisponivel)
		 {
			 MidiaAudio* midia_audio;
			 MidiaFilme* midia_filme;
			 MidiaDados* midia_dados;
			 Livro* livro;

			 string titulo_material = emprestimo->getMaterial()->getTitulo();
			 switch (codigo_material)
			 {
			 case COD_AUDIO:

				 midia_audio = controller_midiaAudio->buscar(titulo_material);
				 midia_audio->setDisponivel(isDisponivel);
				 controller_midiaAudio->atualizar(midia_audio);
				 break;

			 case COD_DADOS:

				 midia_dados = controller_midiaDados->buscar(titulo_material);
				 midia_dados->setDisponivel(isDisponivel);
				 controller_midiaDados->atualizar(midia_dados);
				 break;

			 case COD_FILME:

				 midia_filme = controller_midiaFilme->buscar(titulo_material);
				 midia_filme->setDisponivel(isDisponivel);
				 controller_midiaFilme->atualizar(midia_filme);
				 break;

			 case COD_LIVRO:

				 livro = controller_livro->buscar(titulo_material);
				 livro->setDisponivel(isDisponivel);
				 controller_livro->atualizar(livro);
				 break;

			 default: 
				 break;
				 }
			 }
	private: void set_dateMaxToday()
		 {
			 
			 DateTime^ data_hoje = gcnew DateTime();
			 data_hoje = DateTime::Now;
			 this->dateTimePicker1->MaxDate = System::DateTime(data_hoje->Year, data_hoje->Month, data_hoje->Day, 0, 0, 0, 0);	
		 }
	private: void prepare_editarEmprestimo(Emprestimo* emprestimo){

				 string nome_completo = emprestimo->getAmigo()->getNome()+ " " + 
										emprestimo->getAmigo()->getSobrenome();
				 
				 this->textBox_amigo->Text = 
											gcnew String(nome_completo.c_str());
												

				 this->textBox_material->Text = 
											gcnew String(
												emprestimo->getMaterial()->getTitulo().c_str());
				
				 
				 String^ string_data = gcnew String(emprestimo->getDataEmprestimo().c_str());
				 DateTime^ data_emprestimo = gcnew DateTime();
				 IFormatProvider^ culture = gcnew  System::Globalization::CultureInfo("pt-BR", true);
				 data_emprestimo = DateTime::Parse(string_data,culture,System::Globalization::DateTimeStyles::AssumeLocal);
				 
				 this->dateTimePicker1->Value = *data_emprestimo;
				 this->numericUpDown1->Text = Convert::ToString(emprestimo->getPrazoDias());
			 }
	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 if( !System::String::IsNullOrEmpty(this->textBox_material->Text) &&
					 !System::String::IsNullOrEmpty(this->textBox_amigo->Text) &&
					 Convert::ToInt32(this->numericUpDown1->Text) > 0)
				 {
					 this->btn_emprestar->Enabled = true;
				 }
		 }
};
}
