#pragma once

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
		gerenciarEmprestimosForm(void)
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
		~gerenciarEmprestimosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ger_emp_btn_detalhes;
	private: System::Windows::Forms::Button^  ger_emp_btn_alterar;
	private: System::Windows::Forms::Button^  ger_emp_btn_novo;



	private: System::Windows::Forms::DataGridView^  data_grid_emprestimos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_amigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_mat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_data_emp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_data_dev;











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
			this->ger_emp_btn_detalhes = (gcnew System::Windows::Forms::Button());
			this->ger_emp_btn_alterar = (gcnew System::Windows::Forms::Button());
			this->ger_emp_btn_novo = (gcnew System::Windows::Forms::Button());
			this->data_grid_emprestimos = (gcnew System::Windows::Forms::DataGridView());
			this->dt_grid_emp_col_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_amigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_mat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_data_emp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_data_dev = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_emprestimos))->BeginInit();
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
			this->label1->Size = System::Drawing::Size(147, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Empréstimos";
			// 
			// ger_emp_btn_detalhes
			// 
			this->ger_emp_btn_detalhes->Location = System::Drawing::Point(8, 51);
			this->ger_emp_btn_detalhes->Name = L"ger_emp_btn_detalhes";
			this->ger_emp_btn_detalhes->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_detalhes->TabIndex = 1;
			this->ger_emp_btn_detalhes->Text = L"Detalhes";
			this->ger_emp_btn_detalhes->UseVisualStyleBackColor = true;
			// 
			// ger_emp_btn_alterar
			// 
			this->ger_emp_btn_alterar->Location = System::Drawing::Point(97, 51);
			this->ger_emp_btn_alterar->Name = L"ger_emp_btn_alterar";
			this->ger_emp_btn_alterar->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_alterar->TabIndex = 2;
			this->ger_emp_btn_alterar->Text = L"Alterar";
			this->ger_emp_btn_alterar->UseVisualStyleBackColor = true;
			// 
			// ger_emp_btn_novo
			// 
			this->ger_emp_btn_novo->Location = System::Drawing::Point(190, 51);
			this->ger_emp_btn_novo->Name = L"ger_emp_btn_novo";
			this->ger_emp_btn_novo->Size = System::Drawing::Size(75, 23);
			this->ger_emp_btn_novo->TabIndex = 3;
			this->ger_emp_btn_novo->Text = L"Novo";
			this->ger_emp_btn_novo->UseVisualStyleBackColor = true;
			// 
			// data_grid_emprestimos
			// 
			this->data_grid_emprestimos->AllowUserToAddRows = false;
			this->data_grid_emprestimos->AllowUserToDeleteRows = false;
			this->data_grid_emprestimos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_emprestimos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->dt_grid_emp_col_id, 
				this->dt_grid_emp_col_amigo, this->dt_grid_emp_col_mat, this->dt_grid_emp_col_data_emp, this->dt_grid_emp_col_data_dev});
			this->data_grid_emprestimos->Location = System::Drawing::Point(8, 85);
			this->data_grid_emprestimos->Name = L"data_grid_emprestimos";
			this->data_grid_emprestimos->ReadOnly = true;
			this->data_grid_emprestimos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_emprestimos->Size = System::Drawing::Size(625, 138);
			this->data_grid_emprestimos->TabIndex = 4;
			// 
			// dt_grid_emp_col_id
			// 
			this->dt_grid_emp_col_id->HeaderText = L"id";
			this->dt_grid_emp_col_id->Name = L"dt_grid_emp_col_id";
			this->dt_grid_emp_col_id->ReadOnly = true;
			this->dt_grid_emp_col_id->Width = 30;
			// 
			// dt_grid_emp_col_amigo
			// 
			this->dt_grid_emp_col_amigo->HeaderText = L"Amigo";
			this->dt_grid_emp_col_amigo->Name = L"dt_grid_emp_col_amigo";
			this->dt_grid_emp_col_amigo->ReadOnly = true;
			this->dt_grid_emp_col_amigo->Width = 155;
			// 
			// dt_grid_emp_col_mat
			// 
			this->dt_grid_emp_col_mat->HeaderText = L"Material";
			this->dt_grid_emp_col_mat->Name = L"dt_grid_emp_col_mat";
			this->dt_grid_emp_col_mat->ReadOnly = true;
			this->dt_grid_emp_col_mat->Width = 155;
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
			this->dt_grid_emp_col_data_dev->HeaderText = L"Devolução em";
			this->dt_grid_emp_col_data_dev->Name = L"dt_grid_emp_col_data_dev";
			this->dt_grid_emp_col_data_dev->ReadOnly = true;
			this->dt_grid_emp_col_data_dev->Width = 120;
			// 
			// gerenciarEmprestimosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 243);
			this->Controls->Add(this->data_grid_emprestimos);
			this->Controls->Add(this->ger_emp_btn_novo);
			this->Controls->Add(this->ger_emp_btn_alterar);
			this->Controls->Add(this->ger_emp_btn_detalhes);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"gerenciarEmprestimosForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gerenciamento de empréstimos";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_emprestimos))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
