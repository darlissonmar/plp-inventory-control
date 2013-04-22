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
	/// Summary for form_relatorios
	/// </summary>
	public ref class form_relatorios : public System::Windows::Forms::Form
	{
	public:
		ControllerAmigo* controller_amigo;
		ControllerEmprestimo* controller_emprestimo;
		ControllerMidiaAudio* controller_midia_audio;
		ControllerMidiaDados* controller_midia_dados;
		ControllerMidiaFilme* controller_midia_filme;
		ControllerLivro* controller_livro;
		
		form_relatorios(int codigo_relatorio)
		{
			InitializeComponent();
			controller_amigo = new ControllerAmigo();
			controller_midia_filme = new ControllerMidiaFilme();
			controller_midia_dados = new ControllerMidiaDados();
			controller_midia_audio = new ControllerMidiaAudio();
			controller_livro = new ControllerLivro();
			controller_emprestimo = new ControllerEmprestimo();

			switch( codigo_relatorio )
			{
			case COD_RELATORIO_AMIGO:
				seleciona_tabAmigo();
				break;
			case COD_RELATORIO_MATERIAL:
				seleciona_tabMaterial();

				break;
			case COD_RELATORIO_EMPRESTIMO:
				seleciona_tabEmprestimo();
				break;
			default:
				break;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form_relatorios()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  TAB_relatorios;
	private: System::Windows::Forms::TabPage^  tab_amigos;
	private: System::Windows::Forms::TabPage^  tab_materiais;
	private: System::Windows::Forms::TabPage^  tab_emprestimos;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btn_gerar_amigo;
	private: System::Windows::Forms::DataGridView^  data_grid_amigos;
	private: System::Windows::Forms::DataGridView^  data_grid_materiais;
	private: System::Windows::Forms::DataGridView^  data_grid_emprestimos;
	private: System::Windows::Forms::RadioButton^  rb_btn_amigos_menos;
	private: System::Windows::Forms::RadioButton^  rd_btn_amigo_mais;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  btn_gerar_material;
	private: System::Windows::Forms::RadioButton^  rb_btn_mat_ind;
	private: System::Windows::Forms::RadioButton^  rb_btn_mat_dispo;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btn_gerar_emprestimos;
	private: System::Windows::Forms::RadioButton^  rb_btn_emp_fechados;
	private: System::Windows::Forms::RadioButton^  rb_btn_emp_abertos;
	private: System::Windows::Forms::RadioButton^  rb_btn_emp_venc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_amigo_pos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_amigo_nome;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_materiais_tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_material_titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_material_ano;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_emprestimo_amigo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_emprestimo_mat_titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_emprestimo_generica;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TAB_relatorios = (gcnew System::Windows::Forms::TabControl());
			this->tab_amigos = (gcnew System::Windows::Forms::TabPage());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_btn_amigos_menos = (gcnew System::Windows::Forms::RadioButton());
			this->rd_btn_amigo_mais = (gcnew System::Windows::Forms::RadioButton());
			this->btn_gerar_amigo = (gcnew System::Windows::Forms::Button());
			this->data_grid_amigos = (gcnew System::Windows::Forms::DataGridView());
			this->col_amigo_pos = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_amigo_nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tab_materiais = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_gerar_material = (gcnew System::Windows::Forms::Button());
			this->rb_btn_mat_ind = (gcnew System::Windows::Forms::RadioButton());
			this->rb_btn_mat_dispo = (gcnew System::Windows::Forms::RadioButton());
			this->data_grid_materiais = (gcnew System::Windows::Forms::DataGridView());
			this->col_materiais_tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_material_titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_material_ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tab_emprestimos = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->rb_btn_emp_venc = (gcnew System::Windows::Forms::RadioButton());
			this->btn_gerar_emprestimos = (gcnew System::Windows::Forms::Button());
			this->rb_btn_emp_fechados = (gcnew System::Windows::Forms::RadioButton());
			this->rb_btn_emp_abertos = (gcnew System::Windows::Forms::RadioButton());
			this->data_grid_emprestimos = (gcnew System::Windows::Forms::DataGridView());
			this->col_emprestimo_amigo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_emprestimo_mat_titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_emprestimo_generica = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TAB_relatorios->SuspendLayout();
			this->tab_amigos->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_amigos))->BeginInit();
			this->tab_materiais->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_materiais))->BeginInit();
			this->tab_emprestimos->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_emprestimos))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(243, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Relatórios do Sistema";
			// 
			// TAB_relatorios
			// 
			this->TAB_relatorios->Controls->Add(this->tab_amigos);
			this->TAB_relatorios->Controls->Add(this->tab_materiais);
			this->TAB_relatorios->Controls->Add(this->tab_emprestimos);
			this->TAB_relatorios->Location = System::Drawing::Point(6, 50);
			this->TAB_relatorios->Name = L"TAB_relatorios";
			this->TAB_relatorios->SelectedIndex = 0;
			this->TAB_relatorios->Size = System::Drawing::Size(533, 330);
			this->TAB_relatorios->TabIndex = 1;
			// 
			// tab_amigos
			// 
			this->tab_amigos->BackColor = System::Drawing::SystemColors::Control;
			this->tab_amigos->Controls->Add(this->groupBox1);
			this->tab_amigos->Controls->Add(this->data_grid_amigos);
			this->tab_amigos->Location = System::Drawing::Point(4, 22);
			this->tab_amigos->Name = L"tab_amigos";
			this->tab_amigos->Padding = System::Windows::Forms::Padding(3);
			this->tab_amigos->Size = System::Drawing::Size(525, 304);
			this->tab_amigos->TabIndex = 0;
			this->tab_amigos->Text = L"Relatório de Amigos";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rb_btn_amigos_menos);
			this->groupBox1->Controls->Add(this->rd_btn_amigo_mais);
			this->groupBox1->Controls->Add(this->btn_gerar_amigo);
			this->groupBox1->Location = System::Drawing::Point(7, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(503, 52);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Filtros";
			// 
			// rb_btn_amigos_menos
			// 
			this->rb_btn_amigos_menos->AutoSize = true;
			this->rb_btn_amigos_menos->Location = System::Drawing::Point(116, 22);
			this->rb_btn_amigos_menos->Name = L"rb_btn_amigos_menos";
			this->rb_btn_amigos_menos->Size = System::Drawing::Size(100, 17);
			this->rb_btn_amigos_menos->TabIndex = 4;
			this->rb_btn_amigos_menos->Text = L"Mais impontuais";
			this->rb_btn_amigos_menos->UseVisualStyleBackColor = true;
			// 
			// rd_btn_amigo_mais
			// 
			this->rd_btn_amigo_mais->AutoSize = true;
			this->rd_btn_amigo_mais->Checked = true;
			this->rd_btn_amigo_mais->Location = System::Drawing::Point(6, 22);
			this->rd_btn_amigo_mais->Name = L"rd_btn_amigo_mais";
			this->rd_btn_amigo_mais->Size = System::Drawing::Size(90, 17);
			this->rd_btn_amigo_mais->TabIndex = 3;
			this->rd_btn_amigo_mais->TabStop = true;
			this->rd_btn_amigo_mais->Text = L"Mais pontuais";
			this->rd_btn_amigo_mais->UseVisualStyleBackColor = true;
			// 
			// btn_gerar_amigo
			// 
			this->btn_gerar_amigo->Location = System::Drawing::Point(422, 19);
			this->btn_gerar_amigo->Name = L"btn_gerar_amigo";
			this->btn_gerar_amigo->Size = System::Drawing::Size(75, 23);
			this->btn_gerar_amigo->TabIndex = 2;
			this->btn_gerar_amigo->Text = L"Gerar";
			this->btn_gerar_amigo->UseVisualStyleBackColor = true;
			this->btn_gerar_amigo->Click += gcnew System::EventHandler(this, &form_relatorios::btn_gerar_amigo_Click);
			// 
			// data_grid_amigos
			// 
			this->data_grid_amigos->AllowUserToAddRows = false;
			this->data_grid_amigos->AllowUserToDeleteRows = false;
			this->data_grid_amigos->AllowUserToOrderColumns = true;
			this->data_grid_amigos->AllowUserToResizeRows = false;
			this->data_grid_amigos->BackgroundColor = System::Drawing::SystemColors::Window;
			this->data_grid_amigos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->data_grid_amigos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_amigos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->col_amigo_pos, 
				this->col_amigo_nome});
			this->data_grid_amigos->Location = System::Drawing::Point(6, 72);
			this->data_grid_amigos->Name = L"data_grid_amigos";
			this->data_grid_amigos->ReadOnly = true;
			this->data_grid_amigos->RowHeadersVisible = false;
			this->data_grid_amigos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_amigos->Size = System::Drawing::Size(504, 217);
			this->data_grid_amigos->TabIndex = 0;
			// 
			// col_amigo_pos
			// 
			this->col_amigo_pos->HeaderText = L"Posição";
			this->col_amigo_pos->Name = L"col_amigo_pos";
			this->col_amigo_pos->ReadOnly = true;
			// 
			// col_amigo_nome
			// 
			this->col_amigo_nome->HeaderText = L"Nome";
			this->col_amigo_nome->Name = L"col_amigo_nome";
			this->col_amigo_nome->ReadOnly = true;
			this->col_amigo_nome->Width = 400;
			// 
			// tab_materiais
			// 
			this->tab_materiais->BackColor = System::Drawing::SystemColors::Control;
			this->tab_materiais->Controls->Add(this->groupBox2);
			this->tab_materiais->Controls->Add(this->data_grid_materiais);
			this->tab_materiais->Location = System::Drawing::Point(4, 22);
			this->tab_materiais->Name = L"tab_materiais";
			this->tab_materiais->Padding = System::Windows::Forms::Padding(3);
			this->tab_materiais->Size = System::Drawing::Size(525, 304);
			this->tab_materiais->TabIndex = 1;
			this->tab_materiais->Text = L"Relatório de Materiais";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_gerar_material);
			this->groupBox2->Controls->Add(this->rb_btn_mat_ind);
			this->groupBox2->Controls->Add(this->rb_btn_mat_dispo);
			this->groupBox2->Location = System::Drawing::Point(7, 11);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(503, 52);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Filtros";
			// 
			// btn_gerar_material
			// 
			this->btn_gerar_material->Location = System::Drawing::Point(422, 19);
			this->btn_gerar_material->Name = L"btn_gerar_material";
			this->btn_gerar_material->Size = System::Drawing::Size(75, 23);
			this->btn_gerar_material->TabIndex = 2;
			this->btn_gerar_material->Text = L"Gerar";
			this->btn_gerar_material->UseVisualStyleBackColor = true;
			this->btn_gerar_material->Click += gcnew System::EventHandler(this, &form_relatorios::btn_gerar_material_Click);
			// 
			// rb_btn_mat_ind
			// 
			this->rb_btn_mat_ind->AutoSize = true;
			this->rb_btn_mat_ind->Location = System::Drawing::Point(116, 22);
			this->rb_btn_mat_ind->Name = L"rb_btn_mat_ind";
			this->rb_btn_mat_ind->Size = System::Drawing::Size(88, 17);
			this->rb_btn_mat_ind->TabIndex = 1;
			this->rb_btn_mat_ind->Text = L"Indisponíveis";
			this->rb_btn_mat_ind->UseVisualStyleBackColor = true;
			// 
			// rb_btn_mat_dispo
			// 
			this->rb_btn_mat_dispo->AutoSize = true;
			this->rb_btn_mat_dispo->Checked = true;
			this->rb_btn_mat_dispo->Location = System::Drawing::Point(6, 22);
			this->rb_btn_mat_dispo->Name = L"rb_btn_mat_dispo";
			this->rb_btn_mat_dispo->Size = System::Drawing::Size(81, 17);
			this->rb_btn_mat_dispo->TabIndex = 0;
			this->rb_btn_mat_dispo->TabStop = true;
			this->rb_btn_mat_dispo->Text = L"Disponíveis";
			this->rb_btn_mat_dispo->UseVisualStyleBackColor = true;
			// 
			// data_grid_materiais
			// 
			this->data_grid_materiais->AllowUserToAddRows = false;
			this->data_grid_materiais->AllowUserToDeleteRows = false;
			this->data_grid_materiais->AllowUserToOrderColumns = true;
			this->data_grid_materiais->AllowUserToResizeRows = false;
			this->data_grid_materiais->BackgroundColor = System::Drawing::SystemColors::Window;
			this->data_grid_materiais->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->data_grid_materiais->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_materiais->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->col_materiais_tipo, 
				this->col_material_titulo, this->col_material_ano});
			this->data_grid_materiais->Location = System::Drawing::Point(6, 72);
			this->data_grid_materiais->Name = L"data_grid_materiais";
			this->data_grid_materiais->ReadOnly = true;
			this->data_grid_materiais->RowHeadersVisible = false;
			this->data_grid_materiais->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_materiais->Size = System::Drawing::Size(504, 217);
			this->data_grid_materiais->TabIndex = 0;
			// 
			// col_materiais_tipo
			// 
			this->col_materiais_tipo->HeaderText = L"Tipo de Material";
			this->col_materiais_tipo->Name = L"col_materiais_tipo";
			this->col_materiais_tipo->ReadOnly = true;
			this->col_materiais_tipo->Width = 120;
			// 
			// col_material_titulo
			// 
			this->col_material_titulo->HeaderText = L"Titulo";
			this->col_material_titulo->Name = L"col_material_titulo";
			this->col_material_titulo->ReadOnly = true;
			this->col_material_titulo->Width = 320;
			// 
			// col_material_ano
			// 
			this->col_material_ano->HeaderText = L"Ano";
			this->col_material_ano->Name = L"col_material_ano";
			this->col_material_ano->ReadOnly = true;
			this->col_material_ano->Width = 60;
			// 
			// tab_emprestimos
			// 
			this->tab_emprestimos->BackColor = System::Drawing::SystemColors::Control;
			this->tab_emprestimos->Controls->Add(this->groupBox3);
			this->tab_emprestimos->Controls->Add(this->data_grid_emprestimos);
			this->tab_emprestimos->Location = System::Drawing::Point(4, 22);
			this->tab_emprestimos->Name = L"tab_emprestimos";
			this->tab_emprestimos->Padding = System::Windows::Forms::Padding(3);
			this->tab_emprestimos->Size = System::Drawing::Size(525, 304);
			this->tab_emprestimos->TabIndex = 2;
			this->tab_emprestimos->Text = L"Relatório de Empréstimos";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->rb_btn_emp_venc);
			this->groupBox3->Controls->Add(this->btn_gerar_emprestimos);
			this->groupBox3->Controls->Add(this->rb_btn_emp_fechados);
			this->groupBox3->Controls->Add(this->rb_btn_emp_abertos);
			this->groupBox3->Location = System::Drawing::Point(7, 11);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(503, 52);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Filtros";
			// 
			// rb_btn_emp_venc
			// 
			this->rb_btn_emp_venc->AutoSize = true;
			this->rb_btn_emp_venc->Location = System::Drawing::Point(240, 22);
			this->rb_btn_emp_venc->Name = L"rb_btn_emp_venc";
			this->rb_btn_emp_venc->Size = System::Drawing::Size(69, 17);
			this->rb_btn_emp_venc->TabIndex = 3;
			this->rb_btn_emp_venc->Text = L"Vencidos";
			this->rb_btn_emp_venc->UseVisualStyleBackColor = true;
			// 
			// btn_gerar_emprestimos
			// 
			this->btn_gerar_emprestimos->Location = System::Drawing::Point(422, 19);
			this->btn_gerar_emprestimos->Name = L"btn_gerar_emprestimos";
			this->btn_gerar_emprestimos->Size = System::Drawing::Size(75, 23);
			this->btn_gerar_emprestimos->TabIndex = 2;
			this->btn_gerar_emprestimos->Text = L"Gerar";
			this->btn_gerar_emprestimos->UseVisualStyleBackColor = true;
			this->btn_gerar_emprestimos->Click += gcnew System::EventHandler(this, &form_relatorios::btn_gerar_emprestimos_Click);
			// 
			// rb_btn_emp_fechados
			// 
			this->rb_btn_emp_fechados->AutoSize = true;
			this->rb_btn_emp_fechados->Location = System::Drawing::Point(116, 22);
			this->rb_btn_emp_fechados->Name = L"rb_btn_emp_fechados";
			this->rb_btn_emp_fechados->Size = System::Drawing::Size(72, 17);
			this->rb_btn_emp_fechados->TabIndex = 1;
			this->rb_btn_emp_fechados->Text = L"Fechados";
			this->rb_btn_emp_fechados->UseVisualStyleBackColor = true;
			// 
			// rb_btn_emp_abertos
			// 
			this->rb_btn_emp_abertos->AutoSize = true;
			this->rb_btn_emp_abertos->Checked = true;
			this->rb_btn_emp_abertos->Location = System::Drawing::Point(6, 22);
			this->rb_btn_emp_abertos->Name = L"rb_btn_emp_abertos";
			this->rb_btn_emp_abertos->Size = System::Drawing::Size(61, 17);
			this->rb_btn_emp_abertos->TabIndex = 0;
			this->rb_btn_emp_abertos->TabStop = true;
			this->rb_btn_emp_abertos->Text = L"Abertos";
			this->rb_btn_emp_abertos->UseVisualStyleBackColor = true;
			// 
			// data_grid_emprestimos
			// 
			this->data_grid_emprestimos->AllowUserToAddRows = false;
			this->data_grid_emprestimos->AllowUserToDeleteRows = false;
			this->data_grid_emprestimos->AllowUserToOrderColumns = true;
			this->data_grid_emprestimos->AllowUserToResizeRows = false;
			this->data_grid_emprestimos->BackgroundColor = System::Drawing::SystemColors::Window;
			this->data_grid_emprestimos->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::SingleHorizontal;
			this->data_grid_emprestimos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_emprestimos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->col_emprestimo_amigo, 
				this->col_emprestimo_mat_titulo, this->col_emprestimo_generica});
			this->data_grid_emprestimos->Location = System::Drawing::Point(6, 72);
			this->data_grid_emprestimos->Name = L"data_grid_emprestimos";
			this->data_grid_emprestimos->ReadOnly = true;
			this->data_grid_emprestimos->RowHeadersVisible = false;
			this->data_grid_emprestimos->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_emprestimos->Size = System::Drawing::Size(504, 217);
			this->data_grid_emprestimos->TabIndex = 0;
			// 
			// col_emprestimo_amigo
			// 
			this->col_emprestimo_amigo->HeaderText = L"Amigo";
			this->col_emprestimo_amigo->Name = L"col_emprestimo_amigo";
			this->col_emprestimo_amigo->ReadOnly = true;
			this->col_emprestimo_amigo->Width = 150;
			// 
			// col_emprestimo_mat_titulo
			// 
			this->col_emprestimo_mat_titulo->HeaderText = L"Titulo do Material";
			this->col_emprestimo_mat_titulo->Name = L"col_emprestimo_mat_titulo";
			this->col_emprestimo_mat_titulo->ReadOnly = true;
			this->col_emprestimo_mat_titulo->Width = 200;
			// 
			// col_emprestimo_generica
			// 
			this->col_emprestimo_generica->HeaderText = L"Data de Empréstimo";
			this->col_emprestimo_generica->Name = L"col_emprestimo_generica";
			this->col_emprestimo_generica->ReadOnly = true;
			this->col_emprestimo_generica->Width = 150;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(88)), 
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(544, 44);
			this->panel1->TabIndex = 2;
			// 
			// form_relatorios
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 392);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->TAB_relatorios);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"form_relatorios";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Relatórios";
			this->TAB_relatorios->ResumeLayout(false);
			this->tab_amigos->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_amigos))->EndInit();
			this->tab_materiais->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_materiais))->EndInit();
			this->tab_emprestimos->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_emprestimos))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btn_gerar_amigo_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 this->data_grid_amigos->Rows->Clear();
				 int posicao_index = 1;
				 if (rb_btn_amigos_menos->Checked) 
					{
					 list<Amigo*> *amigos = this->controller_amigo->buscarImpontuais();

					 for each (Amigo *it in *amigos)
					 {
						 array<String^>^row1 = 
							 gcnew array<String^>{
								 Convert::ToString(++posicao_index),
								 gcnew String(it->getNome().c_str()) + " " + gcnew String(it->getSobrenome().c_str())
									 
						 };
						 this->data_grid_amigos->Rows->Add(row1);
					 }

					 if( this->data_grid_amigos->Rows->Count == 0){
						 MessageBox::Show("Nenhum amigo impontual foi encontrado", "Resultado",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
					 }

					}
					else 
						{
							list<Amigo*> *amigos = this->controller_amigo->buscarPontuais();

							for each (Amigo *it in *amigos)
							{
								array<String^>^row1 = 
									gcnew array<String^>{
										Convert::ToString(posicao_index++),
											gcnew String(it->getNome().c_str()) + " " + gcnew String(it->getSobrenome().c_str())

								};
								this->data_grid_amigos->Rows->Add(row1);
							}
							
							if( this->data_grid_amigos->Rows->Count == 0){
								MessageBox::Show("Nenhum amigo pontual foi encontrado", "Resultado",
									MessageBoxButtons::OK, MessageBoxIcon::Information);
							}

					 }
			 }

	private: System::Void btn_gerar_material_Click(System::Object^  sender, System::EventArgs^  e) {
				  
				  this->data_grid_materiais->Rows->Clear();

				  if (rb_btn_mat_ind->Checked)
					{
						list<Livro*> *livros = controller_livro->buscarIndisponiveis();
						list<MidiaAudio*> *midias_audio = controller_midia_audio->buscarIndisponiveis();
						list<MidiaDados*> *midias_dados = controller_midia_dados->buscarIndisponiveis();
						list<MidiaFilme*> *midias_filme = controller_midia_filme->buscarIndisponiveis();

						for each (Livro *it in *livros)
						{
							array<String^>^row1 = 
								gcnew array<String^>{
									gcnew String("Livro"),
										gcnew String(it->getTitulo().c_str()),
										gcnew String(Convert::ToString(it->getAno()))
							};
							this->data_grid_materiais->Rows->Add(row1);
						}

						// Adicionando Midia de audio para o datagrid
						for each (MidiaAudio *it in *midias_audio)
						{
							array<String^>^row1 = 
								gcnew array<String^>{
									gcnew String(getTipoMidia(it->getTipoMidia())+" de Audio"),
										gcnew String(it->getTitulo().c_str()),
										gcnew String(Convert::ToString(it->getAno()))
							};
							this->data_grid_materiais->Rows->Add(row1);
						}	
						// Adicionando midias de dados para o datagrid
						for each (MidiaDados *it in *midias_dados)
						{
							array<String^>^row1 = 
								gcnew array<String^>{
									gcnew String(getTipoMidia(it->getTipoMidia())+" de Dados"),
										gcnew String(it->getTitulo().c_str()),
										gcnew String(Convert::ToString(it->getAno()))
							};
							this->data_grid_materiais->Rows->Add(row1);
						}	

						// Adicionando midias de Filme para o datagrid
						for each (MidiaFilme *it in *midias_filme)
						{
							array<String^>^row1 = 
								gcnew array<String^>{
									gcnew String(getTipoMidia(it->getTipoMidia())+" de Filme"),
										gcnew String(it->getTitulo().c_str()),
										gcnew String(Convert::ToString(it->getAno()))
							};
							this->data_grid_materiais->Rows->Add(row1);
						}

						if(this->data_grid_materiais->Rows->Count == 0)
						{
							MessageBox::Show("Nenhum material indisponível foi encontrado.", "Resultado",
							MessageBoxButtons::OK, MessageBoxIcon::Information);
						}

					} 
					else
						{
							list<Livro*> *livros = controller_livro->buscarDisponiveis();
							list<MidiaAudio*> *midias_audio = controller_midia_audio->buscarDisponiveis();
							list<MidiaDados*> *midias_dados = controller_midia_dados->buscarDisponiveis();
							list<MidiaFilme*> *midias_filme = controller_midia_filme->buscarDisponiveis();

							for each (Livro *it in *livros)
							{
								array<String^>^row1 = 
									gcnew array<String^>{
										gcnew String("Livro"),
											gcnew String(it->getTitulo().c_str()),
											gcnew String(Convert::ToString(it->getAno()))
								};
								this->data_grid_materiais->Rows->Add(row1);
							}

							// Adicionando Midia de audio para o datagrid
							for each (MidiaAudio *it in *midias_audio)
							{
								array<String^>^row1 = 
									gcnew array<String^>{
										gcnew String(getTipoMidia(it->getTipoMidia())+" de Audio"),
											gcnew String(it->getTitulo().c_str()),
											gcnew String(Convert::ToString(it->getAno()))
								};
								this->data_grid_materiais->Rows->Add(row1);
							}	
							// Adicionando midias de dados para o datagrid
							for each (MidiaDados *it in *midias_dados)
							{
								array<String^>^row1 = 
									gcnew array<String^>{
										gcnew String(getTipoMidia(it->getTipoMidia())+" de Dados"),
											gcnew String(it->getTitulo().c_str()),
											gcnew String(Convert::ToString(it->getAno()))
								};
								this->data_grid_materiais->Rows->Add(row1);
							}	

							// Adicionando midias de Filme para o datagrid
							for each (MidiaFilme *it in *midias_filme)
							{
								array<String^>^row1 = 
									gcnew array<String^>{
										gcnew String(getTipoMidia(it->getTipoMidia())+" de Filme"),
											gcnew String(it->getTitulo().c_str()),
											gcnew String(Convert::ToString(it->getAno()))
								};
								this->data_grid_materiais->Rows->Add(row1);
							}

							if(this->data_grid_materiais->Rows->Count == 0)
							{
								MessageBox::Show("Nenhum material disponível foi encontrado.", "Resultado",
								MessageBoxButtons::OK, MessageBoxIcon::Information);
								}
						
						}		
		 }
	private: System::Void btn_gerar_emprestimos_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 this->data_grid_emprestimos->Rows->Clear();
				 if ( rb_btn_emp_fechados->Checked )
					{
						configura_dataGridFechados();

						list<Emprestimo*> *emprestimos = this->controller_emprestimo->buscarEmpFechados();

						for each (Emprestimo *it in *emprestimos)
						{
							array<String^>^row1 = 
								gcnew array<String^>{
									gcnew String(it->getAmigo()->getNome().c_str()) +" "+
										gcnew String(it->getAmigo()->getSobrenome().c_str()) ,
										gcnew String(it->getMaterial()->getTitulo().c_str()),
										gcnew String(it->getDataDevolucao().c_str())
							};
							this->data_grid_emprestimos->Rows->Add(row1);
						}	

						if(this->data_grid_emprestimos->Rows->Count == 0)
						{
							MessageBox::Show("Nenhum empréstimo Fechado foi encontrado.", "Resultado",
								MessageBoxButtons::OK, MessageBoxIcon::Information);
						}

						} 
				 else
					 if ( rb_btn_emp_venc->Checked)
						 {
							 configura_dataGridVencidos();
							 list<Emprestimo*> *emprestimos = this->controller_emprestimo->buscarEmpVencidos();
							 int dias_atraso = 0;
							 for each (Emprestimo *it in *emprestimos)
							 {
								 dias_atraso = get_diasAtrasado(it);
								 
									if ( dias_atraso > 0)
										{
											array<String^>^row1 = 
												 gcnew array<String^>{
												 gcnew String(it->getAmigo()->getNome().c_str()) +" "+
												 gcnew String(it->getAmigo()->getSobrenome().c_str()) ,
												 gcnew String(it->getMaterial()->getTitulo().c_str()),
												 Convert::ToString(dias_atraso) + " dias"
												};
											this->data_grid_emprestimos->Rows->Add(row1);
											}					 
								 }	

							 if(this->data_grid_emprestimos->Rows->Count == 0)
							 {
								 MessageBox::Show("Nenhum empréstimo vencido foi encontrado.", "Resultado",
								 MessageBoxButtons::OK, MessageBoxIcon::Information);
							 }

							} 
							else 
							  {
								  configura_dataGridAbertos();

								  list<Emprestimo*> *emprestimos = this->controller_emprestimo->buscarEmpAbertos();

								  for each (Emprestimo *it in *emprestimos)
								  {
									  array<String^>^row1 = 
										  gcnew array<String^>{
												gcnew String(it->getAmigo()->getNome().c_str()) +" "+
												gcnew String(it->getAmigo()->getSobrenome().c_str()) ,
												gcnew String(it->getMaterial()->getTitulo().c_str()),
												gcnew String(it->getDataEmprestimo().c_str())
									  };
									  this->data_grid_emprestimos->Rows->Add(row1);
								  }	

								  if(this->data_grid_emprestimos->Rows->Count == 0)
								  {
									  MessageBox::Show("Nenhum empréstimo aberto foi encontrado.", "Resultado",
									  MessageBoxButtons::OK, MessageBoxIcon::Information);
								  }

							}
					 }

	private:
		String^ getTipoMidia(int codigoTipo)
				 {

					 String^ tipo_midia;

					 switch(codigoTipo)
					 {
					 case 1: 
						 tipo_midia = gcnew String("CD");
						 break;
					 case 2:
						 tipo_midia = gcnew String("DVD");
						 break;
					 case 3: 
						 tipo_midia = gcnew String("Blu-ray");
						 break;
					 default: 
						 break;
					 }
					 return tipo_midia;
				 }
		void seleciona_tabAmigo(){
				
			this->TAB_relatorios->TabPages->Remove(this->tab_materiais);
			this->TAB_relatorios->TabPages->Remove(this->tab_emprestimos);
		}
		void seleciona_tabMaterial(){
			
			this->TAB_relatorios->TabPages->Remove(this->tab_amigos);
			this->TAB_relatorios->TabPages->Remove(this->tab_emprestimos);
		
		}
		void seleciona_tabEmprestimo(){
			
			this->TAB_relatorios->TabPages->Remove(this->tab_materiais);
			this->TAB_relatorios->TabPages->Remove(this->tab_amigos);
		}
		
		void configura_dataGridFechados(){
			this->col_emprestimo_generica->HeaderText = L"Data da Devolução";
		}
		void configura_dataGridVencidos(){
			this->col_emprestimo_generica->HeaderText = L"Dias Vencidos";
		}
		void configura_dataGridAbertos(){
			this->col_emprestimo_generica->HeaderText = L"Data do Empréstimo";
		}

		private: int get_diaDoAno(String^ data_string)
				 {
					 DateTime^ date = gcnew DateTime();
					 IFormatProvider^ culture = gcnew  System::Globalization::CultureInfo("pt-BR", true);
					 date = DateTime::Parse(data_string,culture,System::Globalization::DateTimeStyles::AssumeLocal);

					 return date->DayOfYear;
				 }	

		private: int get_diasAtrasado(Emprestimo* emprestimo){

					 int dias_atraso = 0;
					 DateTime^ data_hoje = gcnew DateTime();
					 data_hoje = DateTime::Now; 

					 int dia_ano_hoje = data_hoje->DayOfYear;
					 int dia_ano_emprestimo = get_diaDoAno(gcnew String(emprestimo->getDataEmprestimo().c_str()));
					 int dia_prazo_devolucao = emprestimo->getPrazoDias();


					 if( (dia_ano_emprestimo + dia_prazo_devolucao) < dia_ano_hoje)
						  dias_atraso = dia_ano_hoje - (dia_ano_emprestimo + dia_prazo_devolucao);
				
					 return dias_atraso;
					 
			 }	

};
}
