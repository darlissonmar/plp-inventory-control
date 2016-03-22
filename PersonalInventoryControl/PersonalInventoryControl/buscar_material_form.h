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
		Label^ _COD_MATERIAL;

	public:

		buscar_material_form(TextBox^ text_box_material, Label^ codigo_material)
		{
			InitializeComponent();

			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();

			carregar_dadosMateriais();
			_text_box_material = text_box_material;
			_COD_MATERIAL = codigo_material;

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_material_tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  col_material_nome;
	private: System::Windows::Forms::Label^  label1;


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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->col_material_tipo,
					this->col_material_nome
			});
			this->dataGridView1->Location = System::Drawing::Point(9, 32);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(442, 173);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &buscar_material_form::dataGridView1_CellDoubleClick);
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
			this->col_material_nome->ToolTipText = L"material";
			this->col_material_nome->Width = 320;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(244, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Dê um clique duplo sobre o item para selecioná-lo.";
			// 
			// buscar_material_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 213);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"buscar_material_form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Materiais disponíveis";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
			cli::array<String^>^row1 =
				gcnew cli::array<String^>{
				gcnew String("Livro"),
					gcnew String(it->getTitulo().c_str()),
			};
			this->dataGridView1->Rows->Add(row1);
		}

		// Adicionando Midia de audio para o datagrid
		for each (MidiaAudio *it in *midias_audio)
		{
			cli::array<String^>^row1 =
				gcnew cli::array<String^>{
				gcnew String(getTipoMidia(it->getTipoMidia()) + " de Audio"),
					gcnew String(it->getTitulo().c_str()),
			};
			this->dataGridView1->Rows->Add(row1);
		}
		// Adicionando midias de dados para o datagrid
		for each (MidiaDados *it in *midias_dados)
		{
			cli::array<String^>^row1 =
				gcnew cli::array<String^>{
				gcnew String(getTipoMidia(it->getTipoMidia()) + " de Dados"),
					gcnew String(it->getTitulo().c_str()),
			};
			this->dataGridView1->Rows->Add(row1);
		}

		// Adicionando midias de Filme para o datagrid
		for each (MidiaFilme *it in *midias_filme)
		{
			cli::array<String^>^row1 =
				gcnew cli::array<String^>{
				gcnew String(getTipoMidia(it->getTipoMidia()) + " de Filme"),
					gcnew String(it->getTitulo().c_str()),
			};
			this->dataGridView1->Rows->Add(row1);
		}

	}

	private: String^ getTipoMidia(int codigoTipo)
	{

		String^ tipo_midia;

		switch (codigoTipo)
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

	private: System::Void dataGridView1_CellDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

		String^ titulo_material = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		String^ tipo_material = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		String^ pattern = "Audio|Livro|Filme|Dados";
		System::Text::RegularExpressions::Regex ^ regex = gcnew System::Text::RegularExpressions::Regex(pattern);
		System::Text::RegularExpressions::Match^ match = regex->Match(tipo_material);
		String^ tipo_material_split = match->Value;

		if (!System::String::IsNullOrEmpty(titulo_material))
		{
			switch (get_codTipoMaterial(tipo_material_split))
			{
			case COD_AUDIO:

				_text_box_material->Text
					= gcnew String(controller_midiaAudio
						->buscar(String_utils::SystemToStdString(titulo_material))
						->getTitulo().c_str());

				_COD_MATERIAL->Text = Convert::ToString(COD_AUDIO);

				break;

			case COD_DADOS:

				_text_box_material->Text
					= gcnew String(controller_midiaDados
						->buscar(String_utils::SystemToStdString(titulo_material))
						->getTitulo().c_str());

				_COD_MATERIAL->Text = Convert::ToString(COD_DADOS);

				break;

			case COD_FILME:

				_text_box_material->Text
					= gcnew String(controller_midiaFilme
						->buscar(String_utils::SystemToStdString(titulo_material))
						->getTitulo().c_str());

				_COD_MATERIAL->Text = Convert::ToString(COD_FILME);

				break;

			case COD_LIVRO:

				_text_box_material->Text
					= gcnew String(controller_livro
						->buscar(String_utils::SystemToStdString(titulo_material))
						->getTitulo().c_str());

				_COD_MATERIAL->Text = Convert::ToString(COD_LIVRO);


				break;

			default:
				break;
			}
		}
		else {
			MessageBox::Show("Por favor, selecione um material!", "Erro",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		this->Close();
	}

	private: int get_codTipoMaterial(String^ material_nome)
	{
		int cod_material;
		if (material_nome->Equals("Audio"))
		{
			cod_material = COD_AUDIO;

		}
		else if (material_nome->Equals("Dados"))
		{
			cod_material = COD_DADOS;

		}
		else if (material_nome->Equals("Filme"))
		{
			cod_material = COD_FILME;

		}
		else if (material_nome->Equals("Livro"))
		{
			cod_material = COD_LIVRO;
		}

		return cod_material;
	}
	};
}
