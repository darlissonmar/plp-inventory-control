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
		ControllerEmprestimo* cont_emprestimo;

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
			cont_emprestimo = new ControllerEmprestimo();
			controller_amigo = new ControllerAmigo();
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
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox_amigo;
	private: System::Windows::Forms::Button^  btn_busca_amigo;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridEmprestimo;
	private: System::Windows::Forms::TextBox^  textBox_material;
	private: System::Windows::Forms::Button^  btn_busca_material;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_titulo;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_ano;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btn_emprestar;
	private: System::Windows::Forms::Panel^  panel_status;
	private: System::Windows::Forms::Label^  label5;

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
			this->dataGridEmprestimo = (gcnew System::Windows::Forms::DataGridView());
			this->col_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->col_ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox_material = (gcnew System::Windows::Forms::TextBox());
			this->btn_busca_material = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_emprestar = (gcnew System::Windows::Forms::Button());
			this->panel_status = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridEmprestimo))->BeginInit();
			this->panel_status->SuspendLayout();
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
			this->label2->Location = System::Drawing::Point(20, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Amigo";
			// 
			// textBox_amigo
			// 
			this->textBox_amigo->Location = System::Drawing::Point(118, 69);
			this->textBox_amigo->Name = L"textBox_amigo";
			this->textBox_amigo->ReadOnly = true;
			this->textBox_amigo->Size = System::Drawing::Size(264, 20);
			this->textBox_amigo->TabIndex = 2;
			// 
			// btn_busca_amigo
			// 
			this->btn_busca_amigo->Location = System::Drawing::Point(62, 67);
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
			this->label3->Location = System::Drawing::Point(12, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Material";
			// 
			// dataGridEmprestimo
			// 
			this->dataGridEmprestimo->AllowUserToDeleteRows = false;
			this->dataGridEmprestimo->AllowUserToOrderColumns = true;
			this->dataGridEmprestimo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEmprestimo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->col_id, 
				this->col_titulo, this->tipo, this->col_ano});
			this->dataGridEmprestimo->Location = System::Drawing::Point(15, 146);
			this->dataGridEmprestimo->Name = L"dataGridEmprestimo";
			this->dataGridEmprestimo->ReadOnly = true;
			this->dataGridEmprestimo->Size = System::Drawing::Size(612, 107);
			this->dataGridEmprestimo->TabIndex = 6;
			// 
			// col_id
			// 
			this->col_id->HeaderText = L"id";
			this->col_id->Name = L"col_id";
			this->col_id->ReadOnly = true;
			// 
			// col_titulo
			// 
			this->col_titulo->HeaderText = L"Título";
			this->col_titulo->Name = L"col_titulo";
			this->col_titulo->ReadOnly = true;
			this->col_titulo->Width = 250;
			// 
			// tipo
			// 
			this->tipo->HeaderText = L"Tipo de Material";
			this->tipo->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"Livro", L"CD Audio ", L"DVD Audio", L"Blu-Ray Audio", 
				L"CD Dados", L"DVD Dados", L"Blu-Ray Dados", L"CD Filme", L"DVD Filme", L"Blu-Ray Filme"});
			this->tipo->Name = L"tipo";
			this->tipo->ReadOnly = true;
			this->tipo->Width = 120;
			// 
			// col_ano
			// 
			this->col_ano->HeaderText = L"Ano";
			this->col_ano->Name = L"col_ano";
			this->col_ano->ReadOnly = true;
			// 
			// textBox_material
			// 
			this->textBox_material->Location = System::Drawing::Point(118, 103);
			this->textBox_material->Name = L"textBox_material";
			this->textBox_material->ReadOnly = true;
			this->textBox_material->Size = System::Drawing::Size(264, 20);
			this->textBox_material->TabIndex = 7;
			// 
			// btn_busca_material
			// 
			this->btn_busca_material->Location = System::Drawing::Point(62, 101);
			this->btn_busca_material->Name = L"btn_busca_material";
			this->btn_busca_material->Size = System::Drawing::Size(49, 23);
			this->btn_busca_material->TabIndex = 8;
			this->btn_busca_material->Text = L"Buscar";
			this->btn_busca_material->UseVisualStyleBackColor = true;
			this->btn_busca_material->Click += gcnew System::EventHandler(this, &EmprestimoForm::btn_busca_material_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd/mm/yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(516, 100);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(108, 20);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->Value = System::DateTime(2013, 4, 14, 15, 2, 35, 0);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(412, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Data de devoluçâo";
			// 
			// btn_emprestar
			// 
			this->btn_emprestar->Location = System::Drawing::Point(516, 262);
			this->btn_emprestar->Name = L"btn_emprestar";
			this->btn_emprestar->Size = System::Drawing::Size(111, 23);
			this->btn_emprestar->TabIndex = 11;
			this->btn_emprestar->Text = L"Efetuar operação";
			this->btn_emprestar->UseVisualStyleBackColor = true;
			this->btn_emprestar->Click += gcnew System::EventHandler(this, &EmprestimoForm::btn_emprestar_Click);
			// 
			// panel_status
			// 
			this->panel_status->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_status->Controls->Add(this->label5);
			this->panel_status->Location = System::Drawing::Point(15, 295);
			this->panel_status->Name = L"panel_status";
			this->panel_status->Size = System::Drawing::Size(612, 19);
			this->panel_status->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Emprestados";
			// 
			// EmprestimoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 323);
			this->Controls->Add(this->panel_status);
			this->Controls->Add(this->btn_emprestar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->btn_busca_material);
			this->Controls->Add(this->textBox_material);
			this->Controls->Add(this->dataGridEmprestimo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_busca_amigo);
			this->Controls->Add(this->textBox_amigo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"EmprestimoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Empréstimo de Material";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridEmprestimo))->EndInit();
			this->panel_status->ResumeLayout(false);
			this->panel_status->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btn_busca_amigo_Click(System::Object^  sender, System::EventArgs^  e) {

				 Busca_amigo_form^ busca_amigo = gcnew Busca_amigo_form(this->textBox_amigo);
				 busca_amigo->Show();
			 }

	private: System::Void btn_busca_material_Click(System::Object^  sender, System::EventArgs^  e) {
				buscar_material_form^ busca_material = gcnew buscar_material_form(this->textBox_material,this->dataGridEmprestimo);
				busca_material->Show();
		 }
	private: System::Void btn_emprestar_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 Amigo* amigo = controller_amigo->buscar(String_utils::SystemToStdString(this->textBox_amigo->Text));

				 Livro* livro = controller_livro->buscar(String_utils::SystemToStdString(this->textBox_material->Text));//pegar amigo da coluna
				 MidiaAudio* midia_audio = controller_midiaAudio->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
				 MidiaFilme* midia_filme = controller_midiaFilme->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
				 MidiaDados* midia_dados = controller_midiaDados->buscar(String_utils::SystemToStdString(this->textBox_material->Text));
				 Emprestimo* emprestimo;

				 if(livro != NULL)
				 {
					emprestimo = new Emprestimo(1, "","",4,false,amigo,(Material*) livro);
				 }
				 else if (midia_audio != NULL)
				 {
					emprestimo = new Emprestimo(1, "","",4,false,amigo,(Material*)midia_dados);
				 }
				 else if (midia_dados != NULL)
				 {
					emprestimo = new Emprestimo(1, "","",4,false,amigo,(Material*) midia_dados);
				 }
				 else if (midia_filme != NULL)
				 {
					 emprestimo = new Emprestimo(1, "","",4,false,amigo,(Material*) midia_filme);
				 }
				
				 cont_emprestimo->adicionar(emprestimo);
				 this->Close();

			 }
};
}
