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
	/// Summary for PrincipalForm
	/// </summary>
	public ref class PrincipalForm : public System::Windows::Forms::Form
	{
	public:
		PrincipalForm(void)
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
		~PrincipalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menu_principal;
	protected: 

	protected: 



	private: System::Windows::Forms::ToolStripMenuItem^  ajudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menu_prin_cadastros;
	private: System::Windows::Forms::ToolStripMenuItem^  materialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menu_p_cad_mat_mid_audio;
	private: System::Windows::Forms::ToolStripMenuItem^  menu_p_cad_mat_mid_dados;
	private: System::Windows::Forms::ToolStripMenuItem^  menu_p_cad_mat_mid_filme;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStrip_btn_cad_amigo;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  toolStrip_btn_cad_material;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  relatoriosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  amigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menu_p_cad_mat_livro;
	private: System::Windows::Forms::ToolStripButton^  toolStrip_btn_novo_emprestimo;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  amigosMaisPontuaisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  itemMaisEmprestadoToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripMenuItem^  emprestimosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  realizarNovoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  devoluçãoToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PrincipalForm::typeid));
			this->menu_principal = (gcnew System::Windows::Forms::MenuStrip());
			this->menu_prin_cadastros = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_p_cad_mat_mid_audio = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_p_cad_mat_mid_dados = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_p_cad_mat_mid_filme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menu_p_cad_mat_livro = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->relatoriosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->emprestimosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarNovoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->devoluçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStrip_btn_cad_amigo = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStrip_btn_cad_material = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStrip_btn_novo_emprestimo = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->amigosMaisPontuaisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemMaisEmprestadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menu_principal->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu_principal
			// 
			this->menu_principal->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->menu_prin_cadastros, 
				this->relatoriosToolStripMenuItem, this->ajudaToolStripMenuItem, this->emprestimosToolStripMenuItem});
			this->menu_principal->Location = System::Drawing::Point(0, 0);
			this->menu_principal->Name = L"menu_principal";
			this->menu_principal->Size = System::Drawing::Size(808, 24);
			this->menu_principal->TabIndex = 1;
			this->menu_principal->Text = L"menu_principal";
			// 
			// menu_prin_cadastros
			// 
			this->menu_prin_cadastros->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->amigosToolStripMenuItem, 
				this->materialToolStripMenuItem});
			this->menu_prin_cadastros->Name = L"menu_prin_cadastros";
			this->menu_prin_cadastros->Size = System::Drawing::Size(71, 20);
			this->menu_prin_cadastros->Text = L"&Cadastros";
			// 
			// amigosToolStripMenuItem
			// 
			this->amigosToolStripMenuItem->Name = L"amigosToolStripMenuItem";
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->amigosToolStripMenuItem->Text = L"Amigos";
			// 
			// materialToolStripMenuItem
			// 
			this->materialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->menu_p_cad_mat_mid_audio, 
				this->menu_p_cad_mat_mid_dados, this->menu_p_cad_mat_mid_filme, this->menu_p_cad_mat_livro});
			this->materialToolStripMenuItem->Name = L"materialToolStripMenuItem";
			this->materialToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->materialToolStripMenuItem->Text = L"Material";
			// 
			// menu_p_cad_mat_mid_audio
			// 
			this->menu_p_cad_mat_mid_audio->Name = L"menu_p_cad_mat_mid_audio";
			this->menu_p_cad_mat_mid_audio->Size = System::Drawing::Size(156, 22);
			this->menu_p_cad_mat_mid_audio->Text = L"Mídia de Audio";
			this->menu_p_cad_mat_mid_audio->Click += gcnew System::EventHandler(this, &PrincipalForm::menu_p_cad_mat_mid_audio_Click);
			// 
			// menu_p_cad_mat_mid_dados
			// 
			this->menu_p_cad_mat_mid_dados->Name = L"menu_p_cad_mat_mid_dados";
			this->menu_p_cad_mat_mid_dados->Size = System::Drawing::Size(156, 22);
			this->menu_p_cad_mat_mid_dados->Text = L"Mídia de Dados";
			this->menu_p_cad_mat_mid_dados->Click += gcnew System::EventHandler(this, &PrincipalForm::menu_p_cad_mat_mid_dados_Click);
			// 
			// menu_p_cad_mat_mid_filme
			// 
			this->menu_p_cad_mat_mid_filme->Name = L"menu_p_cad_mat_mid_filme";
			this->menu_p_cad_mat_mid_filme->Size = System::Drawing::Size(156, 22);
			this->menu_p_cad_mat_mid_filme->Text = L"Mídia de Filme";
			this->menu_p_cad_mat_mid_filme->Click += gcnew System::EventHandler(this, &PrincipalForm::menu_p_cad_mat_mid_filme_Click);
			// 
			// menu_p_cad_mat_livro
			// 
			this->menu_p_cad_mat_livro->Name = L"menu_p_cad_mat_livro";
			this->menu_p_cad_mat_livro->Size = System::Drawing::Size(156, 22);
			this->menu_p_cad_mat_livro->Text = L"Livro";
			this->menu_p_cad_mat_livro->Click += gcnew System::EventHandler(this, &PrincipalForm::menu_p_cad_mat_livro_Click);
			// 
			// relatoriosToolStripMenuItem
			// 
			this->relatoriosToolStripMenuItem->Name = L"relatoriosToolStripMenuItem";
			this->relatoriosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->relatoriosToolStripMenuItem->Text = L"Relatórios";
			// 
			// ajudaToolStripMenuItem
			// 
			this->ajudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->sobreToolStripMenuItem});
			this->ajudaToolStripMenuItem->Name = L"ajudaToolStripMenuItem";
			this->ajudaToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->ajudaToolStripMenuItem->Text = L"Ajuda";
			// 
			// sobreToolStripMenuItem
			// 
			this->sobreToolStripMenuItem->Name = L"sobreToolStripMenuItem";
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->sobreToolStripMenuItem->Text = L"Sobre o programa";
			this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrincipalForm::sobreToolStripMenuItem_Click);
			// 
			// emprestimosToolStripMenuItem
			// 
			this->emprestimosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->realizarNovoToolStripMenuItem, 
				this->devoluçãoToolStripMenuItem});
			this->emprestimosToolStripMenuItem->Name = L"emprestimosToolStripMenuItem";
			this->emprestimosToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->emprestimosToolStripMenuItem->Text = L"Empréstimos";
			// 
			// realizarNovoToolStripMenuItem
			// 
			this->realizarNovoToolStripMenuItem->Name = L"realizarNovoToolStripMenuItem";
			this->realizarNovoToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->realizarNovoToolStripMenuItem->Text = L"Realizar novo";
			// 
			// devoluçãoToolStripMenuItem
			// 
			this->devoluçãoToolStripMenuItem->Name = L"devoluçãoToolStripMenuItem";
			this->devoluçãoToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->devoluçãoToolStripMenuItem->Text = L"Devolução";
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStrip_btn_cad_amigo, 
				this->toolStripSeparator1, this->toolStrip_btn_cad_material, this->toolStripSeparator2, this->toolStrip_btn_novo_emprestimo, 
				this->toolStripSeparator3, this->toolStripDropDownButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(808, 57);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"barraAcessoRapido";
			// 
			// toolStrip_btn_cad_amigo
			// 
			this->toolStrip_btn_cad_amigo->AutoSize = false;
			this->toolStrip_btn_cad_amigo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStrip_btn_cad_amigo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip_btn_cad_amigo.Image")));
			this->toolStrip_btn_cad_amigo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->toolStrip_btn_cad_amigo->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStrip_btn_cad_amigo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStrip_btn_cad_amigo->Name = L"toolStrip_btn_cad_amigo";
			this->toolStrip_btn_cad_amigo->Size = System::Drawing::Size(50, 49);
			this->toolStrip_btn_cad_amigo->Text = L"Cadastro de  Amigo";
			this->toolStrip_btn_cad_amigo->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->toolStrip_btn_cad_amigo->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->toolStrip_btn_cad_amigo->ToolTipText = L"Cadastro de  Amigo";
			this->toolStrip_btn_cad_amigo->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStrip_btn_cad_amigo_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 57);
			// 
			// toolStrip_btn_cad_material
			// 
			this->toolStrip_btn_cad_material->AutoSize = false;
			this->toolStrip_btn_cad_material->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStrip_btn_cad_material->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip_btn_cad_material.Image")));
			this->toolStrip_btn_cad_material->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStrip_btn_cad_material->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStrip_btn_cad_material->Name = L"toolStrip_btn_cad_material";
			this->toolStrip_btn_cad_material->Size = System::Drawing::Size(50, 49);
			this->toolStrip_btn_cad_material->Text = L"Cadastro de material";
			this->toolStrip_btn_cad_material->ToolTipText = L"Cadastro de material";
			this->toolStrip_btn_cad_material->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStrip_btn_cad_material_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 57);
			// 
			// toolStrip_btn_novo_emprestimo
			// 
			this->toolStrip_btn_novo_emprestimo->AutoSize = false;
			this->toolStrip_btn_novo_emprestimo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStrip_btn_novo_emprestimo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip_btn_novo_emprestimo.Image")));
			this->toolStrip_btn_novo_emprestimo->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStrip_btn_novo_emprestimo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStrip_btn_novo_emprestimo->Name = L"toolStrip_btn_novo_emprestimo";
			this->toolStrip_btn_novo_emprestimo->Size = System::Drawing::Size(54, 49);
			this->toolStrip_btn_novo_emprestimo->Text = L"Novo Empréstimo";
			this->toolStrip_btn_novo_emprestimo->ToolTipText = L"Novo Empréstimo";
			this->toolStrip_btn_novo_emprestimo->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStrip_btn_novo_emprestimo_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 57);
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->AutoSize = false;
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->amigosMaisPontuaisToolStripMenuItem, 
				this->itemMaisEmprestadoToolStripMenuItem});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(54, 49);
			this->toolStripDropDownButton1->Text = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->ToolTipText = L"Gerar Relatórios";
			// 
			// amigosMaisPontuaisToolStripMenuItem
			// 
			this->amigosMaisPontuaisToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->amigosMaisPontuaisToolStripMenuItem->Name = L"amigosMaisPontuaisToolStripMenuItem";
			this->amigosMaisPontuaisToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->amigosMaisPontuaisToolStripMenuItem->Text = L"Amigos mais pontuais";
			// 
			// itemMaisEmprestadoToolStripMenuItem
			// 
			this->itemMaisEmprestadoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->itemMaisEmprestadoToolStripMenuItem->Name = L"itemMaisEmprestadoToolStripMenuItem";
			this->itemMaisEmprestadoToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->itemMaisEmprestadoToolStripMenuItem->Text = L"Item mais emprestado";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Enabled = false;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolStripStatusLabel1});
			this->statusStrip1->Location = System::Drawing::Point(0, 447);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(808, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(114, 17);
			this->toolStripStatusLabel1->Text = L"Amigos cadastrados";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(0, 108);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(808, 308);
			this->panel1->TabIndex = 4;
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 469);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menu_principal);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menu_principal;
			this->MaximizeBox = false;
			this->Name = L"PrincipalForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Personal Inventory Control v. 0.1";
			this->menu_principal->ResumeLayout(false);
			this->menu_principal->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	// Clicar no Ajuda->sobre
	private: System::Void sobreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 AboutForm ^about = gcnew AboutForm();
				 about->Show();
			 }
	
	// Clicar no cadastro de material barra de acesso rapido
	private: System::Void toolStrip_btn_cad_material_Click(System::Object^  sender, System::EventArgs^  e) {
			gerenciarMateriaisForm ^materiais_form = gcnew gerenciarMateriaisForm();
			materiais_form->Show();
		 }
	private: System::Void toolStrip_btn_novo_emprestimo_Click(System::Object^  sender, System::EventArgs^  e) {
			 gerenciarEmprestimosForm ^emprestimos_form = gcnew gerenciarEmprestimosForm();
			 emprestimos_form->Show();
		 }

	// Clicar cadastro de amigo na barra de acesso rapido
	private: System::Void toolStrip_btn_cad_amigo_Click(System::Object^  sender, System::EventArgs^  e) {
				 gerenciarAmigosForm ^amigo_form = gcnew gerenciarAmigosForm();
				 amigo_form->Show();
			 }

	// Clicar munu->principal->cadastro->material: MIDIA AUDIO 
	private: System::Void menu_p_cad_mat_mid_audio_Click(System::Object^  sender, System::EventArgs^  e) {
				 cadMaterialForm ^cadMat = gcnew cadMaterialForm();
				 cadMat->selecionaMidAudioTab();
				 cadMat->Show();
			 }
	// Clicar munu->principal->cadastro->material: MIDIA DADOS
	private: System::Void menu_p_cad_mat_mid_dados_Click(System::Object^  sender, System::EventArgs^  e) {
			 cadMaterialForm ^cadMat = gcnew cadMaterialForm();
			 cadMat->selecionaMidDadosTab();
			 cadMat->Show();
		 }
	// Clicar munu->principal->cadastro->material: MIDIA FILME
	private: System::Void menu_p_cad_mat_mid_filme_Click(System::Object^  sender, System::EventArgs^  e) {
			 cadMaterialForm ^cadMat = gcnew cadMaterialForm();
			 cadMat->selecionaMidFilmeTab();
			 cadMat->Show();
		 }
	// Clicar munu->principal->cadastro->material: LIVRO
	private: System::Void menu_p_cad_mat_livro_Click(System::Object^  sender, System::EventArgs^  e) {
			 cadMaterialForm ^cadMat = gcnew cadMaterialForm();
			 cadMat->selecionaLivroTab();
			 cadMat->Show();
		 }
};
}

