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
	/// Summary for cadMaterialForm
	/// </summary>
	public ref class cadMaterialForm : public System::Windows::Forms::Form
	{
	public:
		ControllerMidiaAudio* controller_midiaAudio;
		ControllerMidiaDados* controller_midiaDados;
		ControllerMidiaFilme* controller_midiaFilme;
		ControllerLivro* controller_livro;
		int _COD_OPERACAO;
		Material* _material;
		
		cadMaterialForm(int cod_operacao, int cod_material, Material* material)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			controller_midiaAudio = new ControllerMidiaAudio();
			controller_midiaDados = new ControllerMidiaDados();
			controller_midiaFilme = new ControllerMidiaFilme();
			controller_livro = new ControllerLivro();
			_COD_OPERACAO = cod_operacao;
			_material = material;
			switch(cod_operacao)
			{
			case COD_CADASTRAR:
					cadastrar_material(cod_material);
				    break; 

			case COD_EDITAR: 
					editar_material(cod_material, material);
					break; 

			case COD_VISUALIZAR: 
					detalhes_material(cod_material, material);
				break; 


			default: break;
			}

		}

		void selecionaMidAudioTab(bool);
		void selecionaMidDadosTab(bool);
		void selecionaMidFilmeTab(bool);
		void selecionaLivroTab(bool);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cadMaterialForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabMaterial;
	protected: 

	private: System::Windows::Forms::TabPage^  tabPageLivro;
	protected: 

	private: System::Windows::Forms::TabPage^  tabPageMAudio;
	private: System::Windows::Forms::TabPage^  tabPageMFilme;
	private: System::Windows::Forms::TabPage^  tabPageMDados;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  titulo_label;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  txtBox_livro_editora;
	private: System::Windows::Forms::TextBox^  txtBox_livro_vol;
	private: System::Windows::Forms::TextBox^  txtBox_livro_edicao;
	private: System::Windows::Forms::TextBox^  txtBox_livro_Area;
	private: System::Windows::Forms::TextBox^  txtBox_livro_ano;
	private: System::Windows::Forms::TextBox^  txtBox_livro_autor;
	private: System::Windows::Forms::TextBox^  txtBox_livro_titulo;
	private: System::Windows::Forms::Button^  btn_cad_livro;
	private: System::Windows::Forms::Button^  btn_cad_mid_audio;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_album;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_vol;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_genero;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_gravad;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_ano;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_artista;
	private: System::Windows::Forms::TextBox^  txtBox_Maudio_titulo;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comBox_TipoMidia;
	private: System::Windows::Forms::Button^  btn_cad_mid_filme;
	private: System::Windows::Forms::TextBox^  txtBox_Mfilme_diretor;
	private: System::Windows::Forms::TextBox^  txtBox_Mfilme_produtor;
	private: System::Windows::Forms::TextBox^  txtBox_Mfilme_atores;
	private: System::Windows::Forms::TextBox^  txtBox_Mfilme_ano;
	private: System::Windows::Forms::TextBox^  txtBox_Mfilme_genero;
	private: System::Windows::Forms::TextBox^  txtBox_Mfilme_titulo;
	private: System::Windows::Forms::ComboBox^  comBox_MFilme_tipo_mid;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  btn_cad_mid_dados;
	private: System::Windows::Forms::ComboBox^  comBox_Mdados_tipo_mid;
	private: System::Windows::Forms::TextBox^  txtBox_Mdados_descr;
	private: System::Windows::Forms::TextBox^  txtBox_Mdados_ano;
	private: System::Windows::Forms::TextBox^  txtBox_Mdados_titulo;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;


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
			this->tabMaterial = (gcnew System::Windows::Forms::TabControl());
			this->tabPageLivro = (gcnew System::Windows::Forms::TabPage());
			this->btn_cad_livro = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_livro_editora = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_livro_vol = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_livro_edicao = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_livro_Area = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_livro_ano = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_livro_autor = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_livro_titulo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPageMAudio = (gcnew System::Windows::Forms::TabPage());
			this->btn_cad_mid_audio = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comBox_TipoMidia = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_Maudio_album = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Maudio_vol = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Maudio_genero = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Maudio_gravad = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Maudio_ano = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Maudio_artista = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Maudio_titulo = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tabPageMFilme = (gcnew System::Windows::Forms::TabPage());
			this->btn_cad_mid_filme = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBox_Mfilme_diretor = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mfilme_produtor = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mfilme_atores = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mfilme_ano = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mfilme_genero = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mfilme_titulo = (gcnew System::Windows::Forms::TextBox());
			this->comBox_MFilme_tipo_mid = (gcnew System::Windows::Forms::ComboBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPageMDados = (gcnew System::Windows::Forms::TabPage());
			this->btn_cad_mid_dados = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comBox_Mdados_tipo_mid = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_Mdados_descr = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mdados_ano = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Mdados_titulo = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->titulo_label = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabMaterial->SuspendLayout();
			this->tabPageLivro->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPageMAudio->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPageMFilme->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPageMDados->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabMaterial
			// 
			this->tabMaterial->Controls->Add(this->tabPageLivro);
			this->tabMaterial->Controls->Add(this->tabPageMAudio);
			this->tabMaterial->Controls->Add(this->tabPageMFilme);
			this->tabMaterial->Controls->Add(this->tabPageMDados);
			this->tabMaterial->Location = System::Drawing::Point(8, 83);
			this->tabMaterial->Multiline = true;
			this->tabMaterial->Name = L"tabMaterial";
			this->tabMaterial->SelectedIndex = 0;
			this->tabMaterial->Size = System::Drawing::Size(495, 272);
			this->tabMaterial->TabIndex = 0;
			// 
			// tabPageLivro
			// 
			this->tabPageLivro->BackColor = System::Drawing::SystemColors::Control;
			this->tabPageLivro->Controls->Add(this->btn_cad_livro);
			this->tabPageLivro->Controls->Add(this->groupBox1);
			this->tabPageLivro->Location = System::Drawing::Point(4, 22);
			this->tabPageLivro->Name = L"tabPageLivro";
			this->tabPageLivro->Padding = System::Windows::Forms::Padding(3);
			this->tabPageLivro->Size = System::Drawing::Size(487, 246);
			this->tabPageLivro->TabIndex = 0;
			this->tabPageLivro->Text = L"Livro";
			// 
			// btn_cad_livro
			// 
			this->btn_cad_livro->Location = System::Drawing::Point(372, 215);
			this->btn_cad_livro->Name = L"btn_cad_livro";
			this->btn_cad_livro->Size = System::Drawing::Size(109, 23);
			this->btn_cad_livro->TabIndex = 2;
			this->btn_cad_livro->Text = L"Efetuar opera��o";
			this->btn_cad_livro->UseVisualStyleBackColor = true;
			this->btn_cad_livro->Click += gcnew System::EventHandler(this, &cadMaterialForm::btn_cad_livro_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtBox_livro_editora);
			this->groupBox1->Controls->Add(this->txtBox_livro_vol);
			this->groupBox1->Controls->Add(this->txtBox_livro_edicao);
			this->groupBox1->Controls->Add(this->txtBox_livro_Area);
			this->groupBox1->Controls->Add(this->txtBox_livro_ano);
			this->groupBox1->Controls->Add(this->txtBox_livro_autor);
			this->groupBox1->Controls->Add(this->txtBox_livro_titulo);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Location = System::Drawing::Point(13, 20);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(468, 189);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados do Livro";
			// 
			// txtBox_livro_editora
			// 
			this->txtBox_livro_editora->Location = System::Drawing::Point(66, 106);
			this->txtBox_livro_editora->Name = L"txtBox_livro_editora";
			this->txtBox_livro_editora->Size = System::Drawing::Size(195, 20);
			this->txtBox_livro_editora->TabIndex = 13;
			// 
			// txtBox_livro_vol
			// 
			this->txtBox_livro_vol->Location = System::Drawing::Point(66, 159);
			this->txtBox_livro_vol->Name = L"txtBox_livro_vol";
			this->txtBox_livro_vol->Size = System::Drawing::Size(34, 20);
			this->txtBox_livro_vol->TabIndex = 12;
			// 
			// txtBox_livro_edicao
			// 
			this->txtBox_livro_edicao->Location = System::Drawing::Point(66, 133);
			this->txtBox_livro_edicao->Name = L"txtBox_livro_edicao";
			this->txtBox_livro_edicao->Size = System::Drawing::Size(34, 20);
			this->txtBox_livro_edicao->TabIndex = 11;
			// 
			// txtBox_livro_Area
			// 
			this->txtBox_livro_Area->Location = System::Drawing::Point(66, 80);
			this->txtBox_livro_Area->Name = L"txtBox_livro_Area";
			this->txtBox_livro_Area->Size = System::Drawing::Size(196, 20);
			this->txtBox_livro_Area->TabIndex = 10;
			// 
			// txtBox_livro_ano
			// 
			this->txtBox_livro_ano->Location = System::Drawing::Point(311, 27);
			this->txtBox_livro_ano->Name = L"txtBox_livro_ano";
			this->txtBox_livro_ano->Size = System::Drawing::Size(51, 20);
			this->txtBox_livro_ano->TabIndex = 9;
			// 
			// txtBox_livro_autor
			// 
			this->txtBox_livro_autor->Location = System::Drawing::Point(66, 54);
			this->txtBox_livro_autor->Name = L"txtBox_livro_autor";
			this->txtBox_livro_autor->Size = System::Drawing::Size(196, 20);
			this->txtBox_livro_autor->TabIndex = 8;
			// 
			// txtBox_livro_titulo
			// 
			this->txtBox_livro_titulo->Location = System::Drawing::Point(66, 27);
			this->txtBox_livro_titulo->Name = L"txtBox_livro_titulo";
			this->txtBox_livro_titulo->Size = System::Drawing::Size(196, 20);
			this->txtBox_livro_titulo->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"�rea";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(18, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Volume";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 136);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Edi��o";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 109);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Editora";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(279, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Ano";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 57);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Autor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"T�tulo";
			// 
			// tabPageMAudio
			// 
			this->tabPageMAudio->BackColor = System::Drawing::SystemColors::Control;
			this->tabPageMAudio->Controls->Add(this->btn_cad_mid_audio);
			this->tabPageMAudio->Controls->Add(this->groupBox2);
			this->tabPageMAudio->Location = System::Drawing::Point(4, 22);
			this->tabPageMAudio->Name = L"tabPageMAudio";
			this->tabPageMAudio->Padding = System::Windows::Forms::Padding(3);
			this->tabPageMAudio->Size = System::Drawing::Size(487, 246);
			this->tabPageMAudio->TabIndex = 1;
			this->tabPageMAudio->Text = L"M�dia de �udio";
			// 
			// btn_cad_mid_audio
			// 
			this->btn_cad_mid_audio->Location = System::Drawing::Point(372, 215);
			this->btn_cad_mid_audio->Name = L"btn_cad_mid_audio";
			this->btn_cad_mid_audio->Size = System::Drawing::Size(109, 23);
			this->btn_cad_mid_audio->TabIndex = 1;
			this->btn_cad_mid_audio->Text = L"Efetuar opera��o";
			this->btn_cad_mid_audio->UseVisualStyleBackColor = true;
			this->btn_cad_mid_audio->Click += gcnew System::EventHandler(this, &cadMaterialForm::btn_cad_mid_audio_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comBox_TipoMidia);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_album);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_vol);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_genero);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_gravad);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_ano);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_artista);
			this->groupBox2->Controls->Add(this->txtBox_Maudio_titulo);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Location = System::Drawing::Point(13, 20);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(468, 189);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Dados da M�dia de �udio";
			// 
			// comBox_TipoMidia
			// 
			this->comBox_TipoMidia->FormattingEnabled = true;
			this->comBox_TipoMidia->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CD", L"DVD", L"Blu-ray"});
			this->comBox_TipoMidia->Location = System::Drawing::Point(341, 27);
			this->comBox_TipoMidia->Name = L"comBox_TipoMidia";
			this->comBox_TipoMidia->Size = System::Drawing::Size(72, 21);
			this->comBox_TipoMidia->TabIndex = 15;
			// 
			// txtBox_Maudio_album
			// 
			this->txtBox_Maudio_album->Location = System::Drawing::Point(66, 80);
			this->txtBox_Maudio_album->Name = L"txtBox_Maudio_album";
			this->txtBox_Maudio_album->Size = System::Drawing::Size(196, 20);
			this->txtBox_Maudio_album->TabIndex = 14;
			// 
			// txtBox_Maudio_vol
			// 
			this->txtBox_Maudio_vol->Location = System::Drawing::Point(341, 80);
			this->txtBox_Maudio_vol->Name = L"txtBox_Maudio_vol";
			this->txtBox_Maudio_vol->Size = System::Drawing::Size(44, 20);
			this->txtBox_Maudio_vol->TabIndex = 13;
			// 
			// txtBox_Maudio_genero
			// 
			this->txtBox_Maudio_genero->Location = System::Drawing::Point(66, 106);
			this->txtBox_Maudio_genero->Name = L"txtBox_Maudio_genero";
			this->txtBox_Maudio_genero->Size = System::Drawing::Size(197, 20);
			this->txtBox_Maudio_genero->TabIndex = 12;
			// 
			// txtBox_Maudio_gravad
			// 
			this->txtBox_Maudio_gravad->Location = System::Drawing::Point(66, 133);
			this->txtBox_Maudio_gravad->Name = L"txtBox_Maudio_gravad";
			this->txtBox_Maudio_gravad->Size = System::Drawing::Size(197, 20);
			this->txtBox_Maudio_gravad->TabIndex = 11;
			// 
			// txtBox_Maudio_ano
			// 
			this->txtBox_Maudio_ano->Location = System::Drawing::Point(66, 159);
			this->txtBox_Maudio_ano->Name = L"txtBox_Maudio_ano";
			this->txtBox_Maudio_ano->Size = System::Drawing::Size(51, 20);
			this->txtBox_Maudio_ano->TabIndex = 10;
			// 
			// txtBox_Maudio_artista
			// 
			this->txtBox_Maudio_artista->Location = System::Drawing::Point(66, 54);
			this->txtBox_Maudio_artista->Name = L"txtBox_Maudio_artista";
			this->txtBox_Maudio_artista->Size = System::Drawing::Size(196, 20);
			this->txtBox_Maudio_artista->TabIndex = 9;
			// 
			// txtBox_Maudio_titulo
			// 
			this->txtBox_Maudio_titulo->Location = System::Drawing::Point(66, 27);
			this->txtBox_Maudio_titulo->Name = L"txtBox_Maudio_titulo";
			this->txtBox_Maudio_titulo->Size = System::Drawing::Size(196, 20);
			this->txtBox_Maudio_titulo->TabIndex = 8;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(265, 30);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(73, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Tipo de M�dia";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(2, 136);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 13);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Gravadora";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(293, 83);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Volume";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(42, 13);
			this->label14->TabIndex = 4;
			this->label14->Text = L"G�nero";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(23, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 3;
			this->label13->Text = L"�lbum";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Artista";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(33, 162);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Ano";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(24, 30);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"T�tulo";
			// 
			// tabPageMFilme
			// 
			this->tabPageMFilme->BackColor = System::Drawing::SystemColors::Control;
			this->tabPageMFilme->Controls->Add(this->btn_cad_mid_filme);
			this->tabPageMFilme->Controls->Add(this->groupBox3);
			this->tabPageMFilme->Location = System::Drawing::Point(4, 22);
			this->tabPageMFilme->Name = L"tabPageMFilme";
			this->tabPageMFilme->Padding = System::Windows::Forms::Padding(3);
			this->tabPageMFilme->Size = System::Drawing::Size(487, 246);
			this->tabPageMFilme->TabIndex = 2;
			this->tabPageMFilme->Text = L"M�dia de Filme";
			// 
			// btn_cad_mid_filme
			// 
			this->btn_cad_mid_filme->Location = System::Drawing::Point(372, 215);
			this->btn_cad_mid_filme->Name = L"btn_cad_mid_filme";
			this->btn_cad_mid_filme->Size = System::Drawing::Size(109, 23);
			this->btn_cad_mid_filme->TabIndex = 1;
			this->btn_cad_mid_filme->Text = L"Efetuar opera��o";
			this->btn_cad_mid_filme->UseVisualStyleBackColor = true;
			this->btn_cad_mid_filme->Click += gcnew System::EventHandler(this, &cadMaterialForm::btn_cad_mid_filme_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->txtBox_Mfilme_diretor);
			this->groupBox3->Controls->Add(this->txtBox_Mfilme_produtor);
			this->groupBox3->Controls->Add(this->txtBox_Mfilme_atores);
			this->groupBox3->Controls->Add(this->txtBox_Mfilme_ano);
			this->groupBox3->Controls->Add(this->txtBox_Mfilme_genero);
			this->groupBox3->Controls->Add(this->txtBox_Mfilme_titulo);
			this->groupBox3->Controls->Add(this->comBox_MFilme_tipo_mid);
			this->groupBox3->Controls->Add(this->label24);
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Location = System::Drawing::Point(13, 20);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(468, 189);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dados M�dia Filme";
			// 
			// txtBox_Mfilme_diretor
			// 
			this->txtBox_Mfilme_diretor->Location = System::Drawing::Point(66, 160);
			this->txtBox_Mfilme_diretor->Name = L"txtBox_Mfilme_diretor";
			this->txtBox_Mfilme_diretor->Size = System::Drawing::Size(196, 20);
			this->txtBox_Mfilme_diretor->TabIndex = 13;
			// 
			// txtBox_Mfilme_produtor
			// 
			this->txtBox_Mfilme_produtor->Location = System::Drawing::Point(66, 133);
			this->txtBox_Mfilme_produtor->Name = L"txtBox_Mfilme_produtor";
			this->txtBox_Mfilme_produtor->Size = System::Drawing::Size(196, 20);
			this->txtBox_Mfilme_produtor->TabIndex = 12;
			// 
			// txtBox_Mfilme_atores
			// 
			this->txtBox_Mfilme_atores->Location = System::Drawing::Point(66, 106);
			this->txtBox_Mfilme_atores->Name = L"txtBox_Mfilme_atores";
			this->txtBox_Mfilme_atores->Size = System::Drawing::Size(196, 20);
			this->txtBox_Mfilme_atores->TabIndex = 11;
			// 
			// txtBox_Mfilme_ano
			// 
			this->txtBox_Mfilme_ano->Location = System::Drawing::Point(66, 81);
			this->txtBox_Mfilme_ano->Name = L"txtBox_Mfilme_ano";
			this->txtBox_Mfilme_ano->Size = System::Drawing::Size(51, 20);
			this->txtBox_Mfilme_ano->TabIndex = 10;
			// 
			// txtBox_Mfilme_genero
			// 
			this->txtBox_Mfilme_genero->Location = System::Drawing::Point(66, 54);
			this->txtBox_Mfilme_genero->Name = L"txtBox_Mfilme_genero";
			this->txtBox_Mfilme_genero->Size = System::Drawing::Size(196, 20);
			this->txtBox_Mfilme_genero->TabIndex = 9;
			// 
			// txtBox_Mfilme_titulo
			// 
			this->txtBox_Mfilme_titulo->Location = System::Drawing::Point(66, 27);
			this->txtBox_Mfilme_titulo->Name = L"txtBox_Mfilme_titulo";
			this->txtBox_Mfilme_titulo->Size = System::Drawing::Size(196, 20);
			this->txtBox_Mfilme_titulo->TabIndex = 8;
			// 
			// comBox_MFilme_tipo_mid
			// 
			this->comBox_MFilme_tipo_mid->FormattingEnabled = true;
			this->comBox_MFilme_tipo_mid->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CD", L"DVD", L"Blu-ray"});
			this->comBox_MFilme_tipo_mid->Location = System::Drawing::Point(345, 27);
			this->comBox_MFilme_tipo_mid->Name = L"comBox_MFilme_tipo_mid";
			this->comBox_MFilme_tipo_mid->Size = System::Drawing::Size(72, 21);
			this->comBox_MFilme_tipo_mid->TabIndex = 7;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(266, 30);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(73, 13);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Tipo de M�dia";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(21, 163);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(38, 13);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Diretor";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(12, 136);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(47, 13);
			this->label22->TabIndex = 4;
			this->label22->Text = L"Produtor";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(22, 109);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(37, 13);
			this->label21->TabIndex = 3;
			this->label21->Text = L"Atores";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(33, 84);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(26, 13);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Ano";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(17, 57);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 13);
			this->label19->TabIndex = 1;
			this->label19->Text = L"G�nero";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(24, 30);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(35, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"T�tulo";
			// 
			// tabPageMDados
			// 
			this->tabPageMDados->BackColor = System::Drawing::SystemColors::Control;
			this->tabPageMDados->Controls->Add(this->btn_cad_mid_dados);
			this->tabPageMDados->Controls->Add(this->groupBox4);
			this->tabPageMDados->Location = System::Drawing::Point(4, 22);
			this->tabPageMDados->Name = L"tabPageMDados";
			this->tabPageMDados->Padding = System::Windows::Forms::Padding(3);
			this->tabPageMDados->Size = System::Drawing::Size(487, 246);
			this->tabPageMDados->TabIndex = 3;
			this->tabPageMDados->Text = L"M�dia de Dados";
			// 
			// btn_cad_mid_dados
			// 
			this->btn_cad_mid_dados->Location = System::Drawing::Point(372, 215);
			this->btn_cad_mid_dados->Name = L"btn_cad_mid_dados";
			this->btn_cad_mid_dados->Size = System::Drawing::Size(109, 23);
			this->btn_cad_mid_dados->TabIndex = 1;
			this->btn_cad_mid_dados->Text = L"Efetuar opera��o";
			this->btn_cad_mid_dados->UseVisualStyleBackColor = true;
			this->btn_cad_mid_dados->Click += gcnew System::EventHandler(this, &cadMaterialForm::btn_cad_mid_dados_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comBox_Mdados_tipo_mid);
			this->groupBox4->Controls->Add(this->txtBox_Mdados_descr);
			this->groupBox4->Controls->Add(this->txtBox_Mdados_ano);
			this->groupBox4->Controls->Add(this->txtBox_Mdados_titulo);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Location = System::Drawing::Point(13, 20);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(468, 189);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Dados M�dia Dados";
			// 
			// comBox_Mdados_tipo_mid
			// 
			this->comBox_Mdados_tipo_mid->FormattingEnabled = true;
			this->comBox_Mdados_tipo_mid->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"CD", L"DVD", L"Blu-ray"});
			this->comBox_Mdados_tipo_mid->Location = System::Drawing::Point(345, 27);
			this->comBox_Mdados_tipo_mid->Name = L"comBox_Mdados_tipo_mid";
			this->comBox_Mdados_tipo_mid->Size = System::Drawing::Size(72, 21);
			this->comBox_Mdados_tipo_mid->TabIndex = 7;
			// 
			// txtBox_Mdados_descr
			// 
			this->txtBox_Mdados_descr->Location = System::Drawing::Point(66, 87);
			this->txtBox_Mdados_descr->Multiline = true;
			this->txtBox_Mdados_descr->Name = L"txtBox_Mdados_descr";
			this->txtBox_Mdados_descr->Size = System::Drawing::Size(352, 64);
			this->txtBox_Mdados_descr->TabIndex = 6;
			// 
			// txtBox_Mdados_ano
			// 
			this->txtBox_Mdados_ano->Location = System::Drawing::Point(66, 54);
			this->txtBox_Mdados_ano->Name = L"txtBox_Mdados_ano";
			this->txtBox_Mdados_ano->Size = System::Drawing::Size(51, 20);
			this->txtBox_Mdados_ano->TabIndex = 5;
			// 
			// txtBox_Mdados_titulo
			// 
			this->txtBox_Mdados_titulo->Location = System::Drawing::Point(66, 27);
			this->txtBox_Mdados_titulo->Name = L"txtBox_Mdados_titulo";
			this->txtBox_Mdados_titulo->Size = System::Drawing::Size(196, 20);
			this->txtBox_Mdados_titulo->TabIndex = 4;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(266, 30);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(73, 13);
			this->label28->TabIndex = 3;
			this->label28->Text = L"Tipo de M�dia";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 90);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(55, 13);
			this->label27->TabIndex = 2;
			this->label27->Text = L"Descri��o";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(33, 57);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(26, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Ano";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(24, 30);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(35, 13);
			this->label25->TabIndex = 0;
			this->label25->Text = L"T�tulo";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(88)), 
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel1->Controls->Add(this->titulo_label);
			this->panel1->Location = System::Drawing::Point(4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(510, 54);
			this->panel1->TabIndex = 1;
			// 
			// titulo_label
			// 
			this->titulo_label->AutoSize = true;
			this->titulo_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->titulo_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->titulo_label->Location = System::Drawing::Point(8, 15);
			this->titulo_label->Name = L"titulo_label";
			this->titulo_label->Size = System::Drawing::Size(232, 25);
			this->titulo_label->TabIndex = 0;
			this->titulo_label->Text = L"Cadastro de Material";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L" ";
			// 
			// cadMaterialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 361);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabMaterial);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"cadMaterialForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cadastro de material";
			this->tabMaterial->ResumeLayout(false);
			this->tabPageLivro->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPageMAudio->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPageMFilme->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPageMDados->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btn_cad_livro_Click(System::Object^  sender, System::EventArgs^  e) {
			
				if( 
					!System::String::IsNullOrEmpty(this->txtBox_livro_ano->Text) ||
					!System::String::IsNullOrEmpty(this->txtBox_livro_Area->Text) ||
					!System::String::IsNullOrEmpty(this->txtBox_livro_autor->Text) ||
					!System::String::IsNullOrEmpty(this->txtBox_livro_edicao->Text) ||
					!System::String::IsNullOrEmpty(this->txtBox_livro_editora->Text) ||
					!System::String::IsNullOrEmpty(this->txtBox_livro_vol->Text) ||
					!System::String::IsNullOrEmpty(this->txtBox_livro_titulo->Text)
					 )
					 {	
						 
						 switch(_COD_OPERACAO)
						 {
						 case COD_CADASTRAR: 
								 
							 if(controller_livro->adicionar(get_livroDoForm(false)))
								 {
										MessageBox::Show("Livro cadastrado com sucesso", "Sucesso",
										MessageBoxButtons::OK, MessageBoxIcon::Information);
										this->Close();
								 }
							 else 
								 {
										MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
										MessageBoxButtons::OK, MessageBoxIcon::Error);
										this->Close();
					
								 }
										break;
						 
						 case COD_EDITAR: 
																	
								 if(controller_livro->atualizar(get_livroDoForm(true)))
									 {
										MessageBox::Show("Livro atualizado com sucesso", "Sucesso",
										MessageBoxButtons::OK, MessageBoxIcon::Information);
										this->Close();
									}
									else 
									{
										MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
										MessageBoxButtons::OK, MessageBoxIcon::Error);
										this->Close();
									}
										break;
						 default:
										break;
						 }
					}
				else 
					 {
						 MessageBox::Show("Preencha os campos", "Aviso",
							 MessageBoxButtons::OK, MessageBoxIcon::Warning);
					 }
			 }
private: System::Void btn_cad_mid_audio_Click(System::Object^  sender, System::EventArgs^  e) {

			 if( 
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_titulo->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_artista->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_ano->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_album->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_genero->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_vol->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Maudio_gravad->Text)
				 )
			 {	

				 switch(_COD_OPERACAO)
				 {
				 case COD_CADASTRAR: 

					 if(controller_midiaAudio->adicionar(get_midiaAudioDoForm(false)))
					 {
						 MessageBox::Show("Midia de Audio cadastrada com sucesso", "Sucesso",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 this->Close();
					 }
					 else 
					 {
						 MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 this->Close();

					 }
					 break;

				 case COD_EDITAR: 

					 if(controller_midiaAudio->atualizar(get_midiaAudioDoForm(true)))
					 {
						 MessageBox::Show("Midia de Audio atualizada com sucesso", "Sucesso",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 this->Close();
					 }
					 else 
					 {
						 MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 this->Close();
					 }
					 break;
				 default:
					 break;
				 }
			 }
			 else 
			 {
				 MessageBox::Show("Preencha os campos", "Aviso",
					 MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
		 }
private: System::Void btn_cad_mid_filme_Click(System::Object^  sender, System::EventArgs^  e) {

			 if( 
				 !System::String::IsNullOrEmpty(this->txtBox_Mfilme_titulo->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mfilme_genero->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mfilme_atores->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mfilme_diretor->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mfilme_ano->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mfilme_produtor->Text)
				 )
			 {	

				 switch(_COD_OPERACAO)
				 {
				 case COD_CADASTRAR: 

					 if(controller_midiaFilme->adicionar(get_midiaFilmeDoForm(false)))
					 {
						 MessageBox::Show("Midia de Filme cadastrada com sucesso", "Sucesso",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 this->Close();
					 }
					 else 
					 {
						 MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 this->Close();

					 }
					 break;

				 case COD_EDITAR: 

					 if(controller_midiaFilme->atualizar(get_midiaFilmeDoForm(true)))
					 {
						 MessageBox::Show("Midia de Filme atualizada com sucesso", "Sucesso",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 this->Close();
					 }
					 else 
					 {
						 MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 this->Close();
					 }
					 break;
				 default:
					 break;
				 }
			 }
			 else 
			 {
				 MessageBox::Show("Preencha os campos", "Aviso",
					 MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
		 }
private: System::Void btn_cad_mid_dados_Click(System::Object^  sender, System::EventArgs^  e) {

			 if( 
				 !System::String::IsNullOrEmpty(this->txtBox_Mdados_titulo->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mdados_ano->Text) ||
				 !System::String::IsNullOrEmpty(this->txtBox_Mdados_descr->Text)
				 )
			 {	

				 switch(_COD_OPERACAO)
				 {
				 case COD_CADASTRAR: 

					 if(controller_midiaDados->adicionar(get_midiaDadosDoForm(false)))
					 {
						 MessageBox::Show("Midia de Dados cadastrada com sucesso", "Sucesso",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 this->Close();
					 }
					 else 
					 {
						 MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 this->Close();

					 }
					 break;

				 case COD_EDITAR: 

					 if(controller_midiaDados->atualizar(get_midiaDadosDoForm(true)))
					 {
						 MessageBox::Show("Midia de Dados atualizada com sucesso", "Sucesso",
							 MessageBoxButtons::OK, MessageBoxIcon::Information);
						 this->Close();
					 }
					 else 
					 {
						 MessageBox::Show("Ocorreu um erro durante a operacao", "Erro",
							 MessageBoxButtons::OK, MessageBoxIcon::Error);
						 this->Close();
					 }
					 break;
				 default:
					 break;
				 }
			 }
			 else 
			 {
				 MessageBox::Show("Preencha os campos", "Aviso",
					 MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
		 }

private: void detalhes_material(int codigo_material, Material* material)
		 {
			 switch(codigo_material)
			 {
			 
			 case COD_AUDIO:
				 this->titulo_label->Text = "Detalhes da Midia de Audio";
				 selecionaMidAudioTab(false);
				 set_midiaAudioNoForm((MidiaAudio*) material);
				 break;

			 case COD_DADOS:
				 this->titulo_label->Text = "Detalhes da Midia de Dados";
				 selecionaMidDadosTab(false);
				 set_midiaDadosNoForm((MidiaDados*) material); 	
				 break;

			 case COD_FILME: 
				 this->titulo_label->Text = "Detalhes da Midia de Filme";
				 selecionaMidFilmeTab(false);
				 set_midiaFilmeNoForm((MidiaFilme*) material);
				 break;

			 case COD_LIVRO:
				 this->titulo_label->Text = "Detalhes do Livro";
				 selecionaLivroTab(false);
				 set_livroNoForm((Livro*) material);
				 break;

			 default: 
				 break;
			 
			 }

		}

private: void editar_material(int codigo_material, Material* material)
		 {
			 switch(codigo_material)
			 {

			 case COD_AUDIO:
				 this->titulo_label->Text = "Editando Midia de Audio";
				 selecionaMidAudioTab(true);
				 set_midiaAudioNoForm((MidiaAudio*) material);

				 break;

			 case COD_DADOS:
				 this->titulo_label->Text = "Editando Midia de Dados";
				 selecionaMidDadosTab(true);
				 set_midiaDadosNoForm((MidiaDados*) material); 	
				 break;

			 case COD_FILME: 
				 this->titulo_label->Text = "Editando Midia de Filme";
				 selecionaMidFilmeTab(true);
				 set_midiaFilmeNoForm((MidiaFilme*) material);
				 break;

			 case COD_LIVRO:
				 this->titulo_label->Text = "Editando Livro";
				 selecionaLivroTab(true);
				 set_livroNoForm((Livro*) material);
				 break;

			 default: 
				 break;

			 }
		 }

private: void cadastrar_material(int codigo_material)
		 {
			 switch(codigo_material)
			 {

			 case COD_AUDIO:
				 this->titulo_label->Text = "Cadastro de Midia de Audio";
				 selecionaMidAudioTab(true);

				 break;

			 case COD_DADOS:
				 this->titulo_label->Text = "Cadastro de Midia de Dados";
				 selecionaMidDadosTab(true);
				 break;

			 case COD_FILME: 
				 this->titulo_label->Text = "Cadastro de Midia de Filme";
				 selecionaMidFilmeTab(true);
				 break;

			 case COD_LIVRO:
				 this->titulo_label->Text = "Cadastro de Livro";
				 selecionaLivroTab(true);
				
				 break;

			 default: 
				 break;

			 }
		 }

private: Livro* get_livroDoForm(bool editando)
		 {

			 Livro* livro;
			 Livro* _livro = (Livro*) _material;

			 if (editando){
				 _livro->setTitulo(String_utils::SystemToStdString(this->txtBox_livro_titulo->Text));
				 _livro->setAno(Convert::ToInt32(this->txtBox_livro_ano->Text));
				 _livro->setArea(String_utils::SystemToStdString(this->txtBox_livro_Area->Text));
				 _livro->setAutor(String_utils::SystemToStdString(this->txtBox_livro_autor->Text));
				 _livro->setEdicao(Convert::ToInt32(this->txtBox_livro_edicao->Text));
				 _livro->setEditora(String_utils::SystemToStdString(this->txtBox_livro_editora->Text));
				 _livro->setVolume(Convert::ToInt32(this->txtBox_livro_vol->Text));
				 livro = _livro;

			 }else{
				 livro = new Livro(1, true,
					 String_utils::SystemToStdString(this->txtBox_livro_titulo->Text),
					 Convert::ToInt32(this->txtBox_livro_ano->Text),
					 String_utils::SystemToStdString(this->txtBox_livro_autor->Text),
					 String_utils::SystemToStdString(this->txtBox_livro_Area->Text),
					 Convert::ToInt32(this->txtBox_livro_edicao->Text),
					 String_utils::SystemToStdString(this->txtBox_livro_editora->Text),
					 Convert::ToInt32(this->txtBox_livro_vol->Text)); 
			 }
			 return livro;		 
		 }
private: MidiaAudio* get_midiaAudioDoForm(bool editando)
		 {
			 MidiaAudio* midia_audio;		 
			 MidiaAudio* _midia_audio = (MidiaAudio*) _material;
				
			 if(editando)
				{
					_midia_audio->setTitulo(String_utils::SystemToStdString(this->txtBox_Maudio_titulo->Text));
					_midia_audio->setAno(Convert::ToInt32(this->txtBox_Maudio_ano->Text));
					_midia_audio->setAlbum(String_utils::SystemToStdString(this->txtBox_Maudio_album->Text));
					_midia_audio->setArtista(String_utils::SystemToStdString(this->txtBox_Maudio_artista->Text));
					_midia_audio->setVolume(Convert::ToInt32(this->txtBox_Maudio_vol->Text));
					_midia_audio->setGenero(String_utils::SystemToStdString(this->txtBox_Maudio_genero->Text));
					_midia_audio->setGravadora(String_utils::SystemToStdString(this->txtBox_Maudio_gravad->Text));
					_midia_audio->setTipoMidia(get_enumTipoMaterial(this->comBox_TipoMidia->Text));
					midia_audio = _midia_audio;

				} else 
				{
				 midia_audio = new MidiaAudio(1, true, 
					 String_utils::SystemToStdString(this->txtBox_Maudio_titulo->Text),
					 Convert::ToInt32(this->txtBox_Maudio_ano->Text),
					 String_utils::SystemToStdString(this->txtBox_Maudio_album->Text),
					 String_utils::SystemToStdString(this->txtBox_Maudio_artista->Text),
					 Convert::ToInt32(this->txtBox_Maudio_vol->Text),
					 String_utils::SystemToStdString(this->txtBox_Maudio_genero->Text),
					 String_utils::SystemToStdString(this->txtBox_Maudio_gravad->Text),
					 get_enumTipoMaterial(this->comBox_TipoMidia->Text));
				}
			 return midia_audio;

		 }

private: MidiaDados* get_midiaDadosDoForm(bool editando)
		 {
			 
			 MidiaDados* midia_dados;		 
			 MidiaDados* _midia_dados = (MidiaDados*) _material;

			 if(editando)
			 {
				_midia_dados->setTitulo(String_utils::SystemToStdString(this->txtBox_Mdados_titulo->Text));
				_midia_dados->setAno(Convert::ToInt32(this->txtBox_Mdados_ano->Text));
				_midia_dados->setDescricao(String_utils::SystemToStdString(this->txtBox_Mdados_descr->Text));
				_midia_dados->setTipoMidia(get_enumTipoMaterial(this->comBox_Mdados_tipo_mid->Text));
				
				midia_dados = _midia_dados;

			 } else 
			 {
				 midia_dados = new MidiaDados(1, true, 
					 String_utils::SystemToStdString(this->txtBox_Mdados_titulo->Text),
					 Convert::ToInt32(this->txtBox_Mdados_ano->Text),
					 String_utils::SystemToStdString(this->txtBox_Mdados_descr->Text),
					 get_enumTipoMaterial(this->comBox_Mdados_tipo_mid->Text));
			 }

			 return midia_dados;
		 }

private: MidiaFilme* get_midiaFilmeDoForm(bool editando)
		 {
			 
			 MidiaFilme* midia_filme;		 
			 MidiaFilme* _midia_filme = (MidiaFilme*) _material;

			 if(editando)
			 {
				 _midia_filme->setTitulo(String_utils::SystemToStdString(this->txtBox_Mfilme_titulo->Text));
				 _midia_filme->setAno(Convert::ToInt32(this->txtBox_Mfilme_ano->Text));
				 _midia_filme->setGenero(String_utils::SystemToStdString(this->txtBox_Mfilme_genero->Text));
				 _midia_filme->setAtores(String_utils::SystemToStdString(this->txtBox_Mfilme_atores->Text));
				 _midia_filme->setProdutor(String_utils::SystemToStdString(this->txtBox_Mfilme_produtor->Text));
				 _midia_filme->setDiretor(String_utils::SystemToStdString(this->txtBox_Mfilme_diretor->Text));
				 _midia_filme->setTipoMidia(get_enumTipoMaterial(this->comBox_MFilme_tipo_mid->Text));
				 
				 midia_filme = _midia_filme;

			 } else 
			 {
				 midia_filme = new MidiaFilme(1, true, 
					 String_utils::SystemToStdString(this->txtBox_Mfilme_titulo->Text),
					 Convert::ToInt32(this->txtBox_Mfilme_ano->Text),
					 String_utils::SystemToStdString(this->txtBox_Mfilme_genero->Text),
					 String_utils::SystemToStdString(this->txtBox_Mfilme_atores->Text),
					 String_utils::SystemToStdString(this->txtBox_Mfilme_produtor->Text),
					 String_utils::SystemToStdString(this->txtBox_Mfilme_diretor->Text),
					 get_enumTipoMaterial(this->comBox_MFilme_tipo_mid->Text));
			 }
			 return midia_filme;
		 }

private: void set_livroNoForm(Livro* livro)
		 {
			this->txtBox_livro_titulo->Text		=	gcnew String(livro->getTitulo().c_str());
			this->txtBox_livro_ano->Text		=	Convert::ToString(livro->getAno());	
			this->txtBox_livro_autor->Text		=	gcnew String(livro->getAutor().c_str());
			this->txtBox_livro_Area->Text		=	gcnew String(livro->getArea().c_str());
			this->txtBox_livro_edicao->Text		=	Convert::ToString(livro->getEdicao());
			this->txtBox_livro_editora->Text	=	gcnew String(livro->getEditora().c_str());
			this->txtBox_livro_vol->Text		=	Convert::ToString(livro->getVolume());
		 }
private: void set_midiaAudioNoForm(MidiaAudio* midia_audio)
		 {
			 this->txtBox_Maudio_titulo->Text	=	gcnew String(midia_audio->getTitulo().c_str());
			 this->txtBox_Maudio_ano->Text		=	Convert::ToString(midia_audio->getAno());
			 this->txtBox_Maudio_album->Text	=	gcnew String(midia_audio->getAlbum().c_str());
			 this->txtBox_Maudio_artista->Text	=	gcnew String(midia_audio->getArtista().c_str());
			 this->txtBox_Maudio_vol->Text		=	Convert::ToString(midia_audio->getVolume());
			 this->txtBox_Maudio_genero->Text	=	gcnew String(midia_audio->getGenero().c_str());
			 this->txtBox_Maudio_gravad->Text	=	gcnew String(midia_audio->getGravadora().c_str());
			 this->comBox_TipoMidia->Text		=	get_stringTipoMidia(midia_audio->getTipoMidia());

		 }

private: void set_midiaDadosNoForm(MidiaDados* midia_dados)
		 {
			 this->txtBox_Mdados_titulo->Text	= gcnew String(midia_dados->getTitulo().c_str());
			 this->txtBox_Mdados_ano->Text		= Convert::ToString(midia_dados->getAno());
			 this->txtBox_Mdados_descr->Text	= gcnew String(midia_dados->getDescricao().c_str());
			 this->comBox_Mdados_tipo_mid->Text = get_stringTipoMidia(midia_dados->getTipoMidia());
		 }

private: void set_midiaFilmeNoForm(MidiaFilme* midia_filme)
		 {
			     this->txtBox_Mfilme_titulo->Text	= gcnew String(midia_filme->getTitulo().c_str());
				 this->txtBox_Mfilme_ano->Text		= Convert::ToString(midia_filme->getAno());
				 this->txtBox_Mfilme_genero->Text	= gcnew String(midia_filme->getGenero().c_str());
				 this->txtBox_Mfilme_atores->Text	= gcnew String(midia_filme->getAtores().c_str());
				 this->txtBox_Mfilme_produtor->Text	= gcnew String(midia_filme->getProdutor().c_str());
				 this->txtBox_Mfilme_diretor->Text	= gcnew String(midia_filme->getDiretor().c_str());
				 this->comBox_MFilme_tipo_mid->Text	= get_stringTipoMidia(midia_filme->getTipoMidia());

		 }

private: EnumTipoMidia::Tipo  get_enumTipoMaterial(String^ tipo_material)
		 {
			 EnumTipoMidia::Tipo material_tipo;
			 if( tipo_material->Equals("CD") )
			 {
				 material_tipo = EnumTipoMidia::CD;

			 } else if ( tipo_material->Equals("DVD") )
			 {
				 material_tipo = EnumTipoMidia::DVD;

			 } else if ( tipo_material->Equals("Blu-ray") )
			 {
				 material_tipo = EnumTipoMidia::BLURAY;

			 } 
			 return material_tipo;
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

	};
}
