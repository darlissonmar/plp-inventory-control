#pragma once

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
		EmprestimoForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;




	private: System::Windows::Forms::DataGridView^  dataGridEmprestimo;




	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_titulo;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^  tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_ano;
	private: System::Windows::Forms::Label^  label4;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridEmprestimo = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->col_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tipo = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->col_ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridEmprestimo))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(875, 51);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(39, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(259, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Empréstimo de material";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Amigo";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(139, 69);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 66);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"A";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 106);
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
			this->dataGridEmprestimo->Location = System::Drawing::Point(36, 146);
			this->dataGridEmprestimo->Name = L"dataGridEmprestimo";
			this->dataGridEmprestimo->ReadOnly = true;
			this->dataGridEmprestimo->Size = System::Drawing::Size(612, 143);
			this->dataGridEmprestimo->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 20);
			this->textBox2->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(84, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd - mm -yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(540, 106);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(108, 20);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->Value = System::DateTime(2013, 4, 14, 15, 2, 35, 0);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(436, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Data de devoluçâo";
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
			// EmprestimoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(875, 348);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridEmprestimo);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Name = L"EmprestimoForm";
			this->Text = L"Emprestimo";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridEmprestimo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
