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
	/// Summary for gerenciarMateriaisForm
	/// </summary>

	public ref class gerenciarMateriaisForm : public System::Windows::Forms::Form
	{
	public:
		ControllerMidiaAudio* controller_midiaAudio;
		ControllerMidiaDados* controller_midiaDados;
		ControllerMidiaFilme* controller_midiaFilme;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	public: 
	private: System::Windows::Forms::ToolStripMenuItem^  livroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mídiaDeAudioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mídiaDeFilmeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mídiaDeDadosToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	public: 





	public: 






			 ControllerLivro* controller_livro;
		

		gerenciarMateriaisForm(void)
		{
			InitializeComponent();
			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();
			carregar_dadosMateriais();
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


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_titulo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_ano;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dt_grid_emp_col_status;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ger_materiais_btn_detalhes;
	private: System::Windows::Forms::Button^  ger_materiais_btn_alterar;
	private: System::Windows::Forms::Button^  ger_materiais_btn_cadastrar;
	private: System::Windows::Forms::DataGridView^  data_grid_materiais;
	private: System::Windows::Forms::Button^  ger_materiais_btn_remover;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ger_materiais_btn_detalhes = (gcnew System::Windows::Forms::Button());
			this->ger_materiais_btn_alterar = (gcnew System::Windows::Forms::Button());
			this->ger_materiais_btn_cadastrar = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->livroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mídiaDeAudioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mídiaDeFilmeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mídiaDeDadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->data_grid_materiais = (gcnew System::Windows::Forms::DataGridView());
			this->dt_grid_emp_col_tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_titulo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dt_grid_emp_col_status = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ger_materiais_btn_remover = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_materiais))->BeginInit();
			this->groupBox1->SuspendLayout();
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
			this->label1->Size = System::Drawing::Size(109, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Materiais";
			// 
			// ger_materiais_btn_detalhes
			// 
			this->ger_materiais_btn_detalhes->Location = System::Drawing::Point(640, 88);
			this->ger_materiais_btn_detalhes->Name = L"ger_materiais_btn_detalhes";
			this->ger_materiais_btn_detalhes->Size = System::Drawing::Size(75, 23);
			this->ger_materiais_btn_detalhes->TabIndex = 1;
			this->ger_materiais_btn_detalhes->Text = L"Detalhes";
			this->ger_materiais_btn_detalhes->UseVisualStyleBackColor = true;
			this->ger_materiais_btn_detalhes->Click += gcnew System::EventHandler(this, &gerenciarMateriaisForm::ger_materiais_btn_detalhes_Click);
			// 
			// ger_materiais_btn_alterar
			// 
			this->ger_materiais_btn_alterar->Location = System::Drawing::Point(640, 59);
			this->ger_materiais_btn_alterar->Name = L"ger_materiais_btn_alterar";
			this->ger_materiais_btn_alterar->Size = System::Drawing::Size(75, 23);
			this->ger_materiais_btn_alterar->TabIndex = 2;
			this->ger_materiais_btn_alterar->Text = L"Alterar";
			this->ger_materiais_btn_alterar->UseVisualStyleBackColor = true;
			this->ger_materiais_btn_alterar->Click += gcnew System::EventHandler(this, &gerenciarMateriaisForm::ger_materiais_btn_alterar_Click);
			// 
			// ger_materiais_btn_cadastrar
			// 
			this->ger_materiais_btn_cadastrar->AllowDrop = true;
			this->ger_materiais_btn_cadastrar->ContextMenuStrip = this->contextMenuStrip1;
			this->ger_materiais_btn_cadastrar->Location = System::Drawing::Point(640, 30);
			this->ger_materiais_btn_cadastrar->Name = L"ger_materiais_btn_cadastrar";
			this->ger_materiais_btn_cadastrar->Size = System::Drawing::Size(75, 23);
			this->ger_materiais_btn_cadastrar->TabIndex = 3;
			this->ger_materiais_btn_cadastrar->Text = L"Cadastrar";
			this->ger_materiais_btn_cadastrar->UseVisualStyleBackColor = true;
			this->ger_materiais_btn_cadastrar->Click += gcnew System::EventHandler(this, &gerenciarMateriaisForm::ger_materiais_btn_cadastrar_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->livroToolStripMenuItem, 
				this->mídiaDeAudioToolStripMenuItem, this->mídiaDeFilmeToolStripMenuItem, this->mídiaDeDadosToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(157, 92);
			// 
			// livroToolStripMenuItem
			// 
			this->livroToolStripMenuItem->Name = L"livroToolStripMenuItem";
			this->livroToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->livroToolStripMenuItem->Text = L"Livro";
			// 
			// mídiaDeAudioToolStripMenuItem
			// 
			this->mídiaDeAudioToolStripMenuItem->Name = L"mídiaDeAudioToolStripMenuItem";
			this->mídiaDeAudioToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->mídiaDeAudioToolStripMenuItem->Text = L"Mídia de Audio";
			// 
			// mídiaDeFilmeToolStripMenuItem
			// 
			this->mídiaDeFilmeToolStripMenuItem->Name = L"mídiaDeFilmeToolStripMenuItem";
			this->mídiaDeFilmeToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->mídiaDeFilmeToolStripMenuItem->Text = L"Mídia de Filme";
			// 
			// mídiaDeDadosToolStripMenuItem
			// 
			this->mídiaDeDadosToolStripMenuItem->Name = L"mídiaDeDadosToolStripMenuItem";
			this->mídiaDeDadosToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->mídiaDeDadosToolStripMenuItem->Text = L"Mídia de Dados";
			// 
			// data_grid_materiais
			// 
			this->data_grid_materiais->AllowUserToAddRows = false;
			this->data_grid_materiais->AllowUserToDeleteRows = false;
			this->data_grid_materiais->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->data_grid_materiais->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->data_grid_materiais->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->data_grid_materiais->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid_materiais->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->dt_grid_emp_col_tipo, 
				this->dt_grid_emp_col_titulo, this->dt_grid_emp_col_ano, this->dt_grid_emp_col_status});
			this->data_grid_materiais->Location = System::Drawing::Point(17, 72);
			this->data_grid_materiais->Name = L"data_grid_materiais";
			this->data_grid_materiais->ReadOnly = true;
			this->data_grid_materiais->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid_materiais->Size = System::Drawing::Size(625, 214);
			this->data_grid_materiais->TabIndex = 4;
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
			this->dt_grid_emp_col_titulo->Width = 250;
			// 
			// dt_grid_emp_col_ano
			// 
			this->dt_grid_emp_col_ano->HeaderText = L"Ano";
			this->dt_grid_emp_col_ano->Name = L"dt_grid_emp_col_ano";
			this->dt_grid_emp_col_ano->ReadOnly = true;
			this->dt_grid_emp_col_ano->Width = 70;
			// 
			// dt_grid_emp_col_status
			// 
			this->dt_grid_emp_col_status->HeaderText = L"Disponibilidade";
			this->dt_grid_emp_col_status->Name = L"dt_grid_emp_col_status";
			this->dt_grid_emp_col_status->ReadOnly = true;
			this->dt_grid_emp_col_status->Width = 150;
			// 
			// ger_materiais_btn_remover
			// 
			this->ger_materiais_btn_remover->Location = System::Drawing::Point(640, 221);
			this->ger_materiais_btn_remover->Name = L"ger_materiais_btn_remover";
			this->ger_materiais_btn_remover->Size = System::Drawing::Size(75, 23);
			this->ger_materiais_btn_remover->TabIndex = 5;
			this->ger_materiais_btn_remover->Text = L"Remover";
			this->ger_materiais_btn_remover->UseVisualStyleBackColor = true;
			this->ger_materiais_btn_remover->Click += gcnew System::EventHandler(this, &gerenciarMateriaisForm::ger_materiais_btn_remover_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ger_materiais_btn_cadastrar);
			this->groupBox1->Controls->Add(this->ger_materiais_btn_remover);
			this->groupBox1->Controls->Add(this->ger_materiais_btn_alterar);
			this->groupBox1->Controls->Add(this->ger_materiais_btn_detalhes);
			this->groupBox1->Location = System::Drawing::Point(8, 42);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(732, 258);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de Materiais";
			// 
			// gerenciarMateriaisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 313);
			this->Controls->Add(this->data_grid_materiais);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"gerenciarMateriaisForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gerenciamento de materiais";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->data_grid_materiais))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: void carregar_dadosMateriais()
					{
						list<Livro*> *livros = controller_livro->buscarTodos();
						list<MidiaAudio*> *midias_audio = controller_midiaAudio->buscarTodos();
						list<MidiaDados*> *midias_dados = controller_midiaDados->buscarTodos();
						list<MidiaFilme*> *midias_filme = controller_midiaFilme->buscarTodos();
						
						//Solucao feia, mas funcional
						// Adicionando Livros para o datagrid
						for each (Livro *it in *livros)
						{
							array<String^>^row1 = 
								gcnew array<String^>{
										gcnew String("Livro"),
										gcnew String(it->getTitulo().c_str()),
										gcnew String(Convert::ToString(it->getAno())),
										gcnew String(it->isDisponivel() ? "Disponível" : "Emprestado")
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
										gcnew String(Convert::ToString(it->getAno())),
										gcnew String(it->isDisponivel() ? "Disponível" : "Emprestado")
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
										gcnew String(Convert::ToString(it->getAno())),
										gcnew String(it->isDisponivel() ? "Disponível" : "Emprestado")
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
										gcnew String(Convert::ToString(it->getAno())),
										gcnew String(it->isDisponivel() ? "Disponível" : "Emprestado")
							};
							this->data_grid_materiais->Rows->Add(row1);
						}

						if(this->data_grid_materiais->Rows->Count == 0)
						{
							this->ger_materiais_btn_alterar->Enabled = false;
							this->ger_materiais_btn_detalhes->Enabled = false;
							this->ger_materiais_btn_remover->Enabled = false;	
						}

					}

	
	private: System::Void ger_materiais_btn_detalhes_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 String^ titulo_material = data_grid_materiais->SelectedRows[0]->Cells[1]->Value->ToString();
				 String^ tipo_material = data_grid_materiais->SelectedRows[0]->Cells[0]->Value->ToString();
				 String^ pattern = "Audio|Livro|Filme|Dados";
				 System::Text::RegularExpressions::Regex ^ regex = gcnew System::Text::RegularExpressions::Regex( pattern);
				 System::Text::RegularExpressions::Match^ match = regex->Match(tipo_material);
				 String^ tipo_material_split = match->Value;
				 
				 MidiaAudio* midia_audio;
				 MidiaDados* midia_dados;
				 MidiaFilme* midia_filme;
				 Livro* livro;
				 cadMaterialForm ^material_form;

			    if(!System::String::IsNullOrEmpty(titulo_material))
				 { 
					 switch( get_codTipoMaterial(tipo_material_split))
					 {
					 case COD_AUDIO:

						 midia_audio = controller_midiaAudio->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_VISUALIZAR,COD_AUDIO, (Material*) midia_audio);
						 break;

					 case COD_DADOS:

						 midia_dados = controller_midiaDados->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_VISUALIZAR,COD_DADOS,(Material*) midia_dados);		
						 break;

					 case COD_FILME: 
						
						 midia_filme = controller_midiaFilme->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_VISUALIZAR,COD_FILME, (Material*) midia_filme);
						 break;

					 case COD_LIVRO:

						 livro = controller_livro->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_VISUALIZAR,COD_LIVRO, (Material*) livro);
						 break;

					 default: 
							break;
					 }

					 material_form->Show();

				 } else {
					 MessageBox::Show("Por favor, selecione um item!","Erro",
					 MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
			 }

	private: System::Void ger_materiais_btn_alterar_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 String^ titulo_material = data_grid_materiais->SelectedRows[0]->Cells[1]->Value->ToString();
				 String^ tipo_material = data_grid_materiais->SelectedRows[0]->Cells[0]->Value->ToString();
				 String^ pattern = "Audio|Livro|Filme|Dados";
				 System::Text::RegularExpressions::Regex ^ regex = gcnew System::Text::RegularExpressions::Regex( pattern);
				 System::Text::RegularExpressions::Match^ match = regex->Match(tipo_material);
				 String^ tipo_material_split = match->Value;

				 MidiaAudio* midia_audio;
				 MidiaDados* midia_dados;
				 MidiaFilme* midia_filme;
				 Livro* livro;
				 cadMaterialForm ^material_form;

				 if(!System::String::IsNullOrEmpty(titulo_material))
				 { 
					 switch( get_codTipoMaterial(tipo_material_split))
					 {
					 case COD_AUDIO:

						 midia_audio = controller_midiaAudio->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_EDITAR,COD_AUDIO, (Material*) midia_audio);
						 break;

					 case COD_DADOS:

						 midia_dados = controller_midiaDados->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_EDITAR,COD_DADOS,(Material*) midia_dados);		
						 break;

					 case COD_FILME: 

						 midia_filme = controller_midiaFilme->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_EDITAR,COD_FILME, (Material*) midia_filme);
						 break;

					 case COD_LIVRO:

						 livro = controller_livro->buscar(String_utils::SystemToStdString(titulo_material));
						 material_form = gcnew cadMaterialForm(COD_EDITAR,COD_LIVRO, (Material*) livro);
						 break;

					 default: 
						 break;
					 }

					 material_form->Show();

				 } else {
					 MessageBox::Show("Por favor, selecione um item!","Erro",
						 MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }

				 this->Close();
		 }


	private: System::Void ger_materiais_btn_cadastrar_Click(System::Object^  sender, System::EventArgs^  e) {
				 //cadMaterialForm ^material_form = gcnew cadMaterialForm();
			//	 material_form->Show();
				 this->contextMenuStrip1->Show(this->ger_materiais_btn_cadastrar,this->ger_materiais_btn_cadastrar->Width,0);

		 }
	private: System::Void ger_materiais_btn_remover_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
	
	private: String^ getTipoMidia(int codigoTipo)
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

	private: int get_codTipoMaterial(String^ material_nome)
			 {
				 int cod_material;
				 if( material_nome->Equals("Audio") )
				 {
					 cod_material = COD_AUDIO;

				 } else if ( material_nome->Equals("Dados") )
				 {
					cod_material = COD_DADOS;

				 } else if ( material_nome->Equals("Filme") )
				 {
					cod_material = COD_FILME;

				 } else if ( material_nome->Equals("Livro") )
				 {
					cod_material = COD_LIVRO;
				 }

				 return cod_material;
			 }
};
}
