#pragma once

namespace PersonalInventoryControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gerenciarMateriaisForm
	/// </summary>
	public ref class gerenciarMateriaisForm : public System::Windows::Forms::Form
	{
	public:
		gerenciarMateriaisForm(void)
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
		~gerenciarMateriaisForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ger_materiais_btn_detalhes;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::DataGridView^  data_grid_materiais;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_mat_col_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_ano;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_status;




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
			this->ger_materiais_btn_detalhes = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->data_grid_materiais = (gcnew System::Windows::Forms::DataGridView());
			this->dt_grid_mat_col_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_materiais))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(109, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Materiais";
			// 
			// ger_materiais_btn_detalhes
			// 
			this->ger_materiais_btn_detalhes->Location = System::Drawing::Point(8, 51);
			this->ger_materiais_btn_detalhes->Name = L"ger_materiais_btn_detalhes";
			this->ger_materiais_btn_detalhes->Size = System::Drawing::Size(75, 23);
			this->ger_materiais_btn_detalhes->TabIndex = 1;
			this->ger_materiais_btn_detalhes->Text = L"Detalhes";
			this->ger_materiais_btn_detalhes->UseVisualStyleBackColor = true;
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(190, 51);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Cadastrar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// data_grid_materiais
			// 
			this->data_grid_materiais->AllowUserToAddRows = false;
			this->data_grid_materiais->AllowUserToDeleteRows = false;
			this->data_grid_materiais->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_materiais->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->dt_grid_mat_col_id, 
				this->dt_grid_emp_col_tipo, this->dt_grid_emp_col_titulo, this->dt_grid_emp_col_ano, this->dt_grid_emp_col_status});
			this->data_grid_materiais->Location = System::Drawing::Point(8, 85);
			this->data_grid_materiais->Name = L"data_grid_materiais";
			this->data_grid_materiais->ReadOnly = true;
			this->data_grid_materiais->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_materiais->Size = System::Drawing::Size(625, 138);
			this->data_grid_materiais->TabIndex = 4;
			// 
			// dt_grid_mat_col_id
			// 
			this->dt_grid_mat_col_id->HeaderText = L"id";
			this->dt_grid_mat_col_id->Name = L"dt_grid_mat_col_id";
			this->dt_grid_mat_col_id->ReadOnly = true;
			this->dt_grid_mat_col_id->Width = 50;
			// 
			// dt_grid_emp_col_tipo
			// 
			this->dt_grid_emp_col_tipo->HeaderText = L"Tipo";
			this->dt_grid_emp_col_tipo->Name = L"dt_grid_emp_col_tipo";
			this->dt_grid_emp_col_tipo->ReadOnly = true;
			this->dt_grid_emp_col_tipo->Width = 120;
			// 
			// dt_grid_emp_col_titulo
			// 
			this->dt_grid_emp_col_titulo->HeaderText = L"Título";
			this->dt_grid_emp_col_titulo->Name = L"dt_grid_emp_col_titulo";
			this->dt_grid_emp_col_titulo->ReadOnly = true;
			this->dt_grid_emp_col_titulo->Width = 230;
			// 
			// dt_grid_emp_col_ano
			// 
			this->dt_grid_emp_col_ano->HeaderText = L"Ano";
			this->dt_grid_emp_col_ano->Name = L"dt_grid_emp_col_ano";
			this->dt_grid_emp_col_ano->ReadOnly = true;
			this->dt_grid_emp_col_ano->Width = 60;
			// 
			// dt_grid_emp_col_status
			// 
			this->dt_grid_emp_col_status->HeaderText = L"Disponibilidade";
			this->dt_grid_emp_col_status->Name = L"dt_grid_emp_col_status";
			this->dt_grid_emp_col_status->ReadOnly = true;
			this->dt_grid_emp_col_status->Width = 120;
			// 
			// gerenciarMateriaisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 243);
			this->Controls->Add(this->data_grid_materiais);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->ger_materiais_btn_detalhes);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"gerenciarMateriaisForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gerenciamento de materiais";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_materiais))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
