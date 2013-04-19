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
	/// Summary for buscar_material_form
	/// </summary>
	public ref class buscar_material_form : public System::Windows::Forms::Form
	{
	public:
		ControllerMidiaAudio* controller_midiaAudio;
		ControllerMidiaDados* controller_midiaDados;
		ControllerMidiaFilme* controller_midiaFilme;
		ControllerLivro* controller_livro;
		TextBox^ _text_box_material;
		DataGridView^ _data_grid_emprestimo;

		buscar_material_form( TextBox^ text_box_material, DataGridView^ data_grid_emprestimo)
		{
			InitializeComponent();

			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();

			carregar_dadosMateriais();
			_text_box_material = text_box_material;
			_data_grid_emprestimo = data_grid_emprestimo;
			//
			//TODO: Add the constructor code here
			//
		}
		buscar_material_form(void)
		{
			InitializeComponent();

		

			carregar_dadosMateriais();
					//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~buscar_material_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_material_tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_material_nome;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_busca_material;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->col_material_tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_material_nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_busca_material = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->col_material_tipo, 
				this->col_material_nome});
			this->dataGridView1->Location = System::Drawing::Point(9, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(317, 151);
			this->dataGridView1->TabIndex = 0;
			// 
			// col_material_tipo
			// 
			this->col_material_tipo->HeaderText = L"Tipo de Material";
			this->col_material_tipo->Name = L"col_material_tipo";
			this->col_material_tipo->ReadOnly = true;
			this->col_material_tipo->Width = 120;
			// 
			// col_material_nome
			// 
			this->col_material_nome->HeaderText = L"Titulo";
			this->col_material_nome->Name = L"col_material_nome";
			this->col_material_nome->ReadOnly = true;
			this->col_material_nome->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Selecione o material abixo";
			// 
			// btn_busca_material
			// 
			this->btn_busca_material->Location = System::Drawing::Point(127, 224);
			this->btn_busca_material->Name = L"btn_busca_material";
			this->btn_busca_material->Size = System::Drawing::Size(75, 23);
			this->btn_busca_material->TabIndex = 2;
			this->btn_busca_material->Text = L"Selecionar";
			this->btn_busca_material->UseVisualStyleBackColor = true;
			this->btn_busca_material->Click += gcnew System::EventHandler(this, &buscar_material_form::btn_busca_material_Click);
			// 
			// buscar_material_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 259);
			this->Controls->Add(this->btn_busca_material);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"buscar_material_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"buscar_material_form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: void carregar_dadosMateriais()
				{
					list<Livro*> *livros = controller_livro->buscarDisponiveis();
					list<MidiaAudio*> *midias_audio = controller_midiaAudio->buscarDisponiveis();
					list<MidiaDados*> *midias_dados = controller_midiaDados->buscarDisponiveis();
					list<MidiaFilme*> *midias_filme = controller_midiaFilme->buscarDisponiveis();

					//Solucao feia, mas funcional
					// Adicionando Livros para o datagrid
					for each (Livro *it in *livros)
					{
						array<String^>^row1 = 
							gcnew array<String^>{
								gcnew String("Livro"),
								gcnew String(it->getTitulo().c_str()),
						};
						this->dataGridView1->Rows->Add(row1);
					}

					// Adicionando Midia de audio para o datagrid
					for each (MidiaAudio *it in *midias_audio)
					{
						array<String^>^row1 = 
							gcnew array<String^>{
								gcnew String(getTipoMidia(it->getTipoMidia())+" de Audio"),
									gcnew String(it->getTitulo().c_str()),
						};
						this->dataGridView1->Rows->Add(row1);
					}	
					// Adicionando midias de dados para o datagrid
					for each (MidiaDados *it in *midias_dados)
					{
						array<String^>^row1 = 
							gcnew array<String^>{
								gcnew String(getTipoMidia(it->getTipoMidia())+" de Dados"),
									gcnew String(it->getTitulo().c_str()),
							};
						this->dataGridView1->Rows->Add(row1);
					}	

					// Adicionando midias de Filme para o datagrid
					for each (MidiaFilme *it in *midias_filme)
					{
						array<String^>^row1 = 
							gcnew array<String^>{
								gcnew String(getTipoMidia(it->getTipoMidia())+" de Filme"),
									gcnew String(it->getTitulo().c_str()),
					};
						this->dataGridView1->Rows->Add(row1);
					}	

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
	private: System::Void btn_busca_material_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ nome_chave = this->dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
				
				 if(!System::String::IsNullOrEmpty(nome_chave))
				 { // nome nao vazio

					Livro* livro = controller_livro->buscar(String_utils::SystemToStdString(nome_chave));//pegar amigo da coluna
					MidiaAudio* midia_audio = controller_midiaAudio->buscar(String_utils::SystemToStdString(nome_chave));
					MidiaFilme* midia_filme = controller_midiaFilme->buscar(String_utils::SystemToStdString(nome_chave));
					MidiaDados* midia_dados = controller_midiaDados->buscar(String_utils::SystemToStdString(nome_chave));

					if(livro != NULL)
					{
						_text_box_material->Text = gcnew String(livro->getTitulo().c_str());
						array<String^>^row1 = 
							gcnew array<String^>{
							gcnew String("1"),
							gcnew String(livro->getTitulo().c_str()),
							gcnew String("Livro"),
							gcnew String(Convert::ToString(livro->getAno()))
						};
						
						_data_grid_emprestimo->Rows->Add(row1);
					}
					else if (midia_audio != NULL)
						{
							_text_box_material->Text = gcnew String(midia_audio->getTitulo().c_str());
						}
					else if (midia_dados != NULL)
						{
							_text_box_material->Text = gcnew String(midia_dados->getTitulo().c_str());
						}
					else if (midia_filme != NULL)
						{
							_text_box_material->Text = gcnew String(midia_filme->getTitulo().c_str());
						}

				 } else {
					 MessageBox::Show("Por favor, selecione um amigo!","Erro",
						 MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
				 this->Close();
			 }
};
}
