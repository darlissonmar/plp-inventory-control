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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 



	private: System::Windows::Forms::ToolStripMenuItem^  ajudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  cadastrosToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^  materialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  editarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  removerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripCadUser;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;




	private: System::Windows::Forms::ToolStripMenuItem^  materiaisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  midiaDeAudioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  midiaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  midiaDeDadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  livroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  relatóriosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  amigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  livroToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripButton^  toolStripEmprestimo;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PrincipalForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->cadastrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->livroToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materiaisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->midiaDeAudioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->midiaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->midiaDeDadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->livroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->relatóriosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripCadUser = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripEmprestimo = (gcnew System::Windows::Forms::ToolStripButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->cadastrosToolStripMenuItem, 
				this->materiaisToolStripMenuItem, this->relatóriosToolStripMenuItem, this->ajudaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(800, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// cadastrosToolStripMenuItem
			// 
			this->cadastrosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->amigosToolStripMenuItem, 
				this->materialToolStripMenuItem});
			this->cadastrosToolStripMenuItem->Name = L"cadastrosToolStripMenuItem";
			this->cadastrosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->cadastrosToolStripMenuItem->Text = L"&Cadastros";
			// 
			// amigosToolStripMenuItem
			// 
			this->amigosToolStripMenuItem->Name = L"amigosToolStripMenuItem";
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->amigosToolStripMenuItem->Text = L"Amigos";
			// 
			// materialToolStripMenuItem
			// 
			this->materialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->novoToolStripMenuItem1, 
				this->editarToolStripMenuItem1, this->removerToolStripMenuItem1, this->livroToolStripMenuItem1});
			this->materialToolStripMenuItem->Name = L"materialToolStripMenuItem";
			this->materialToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->materialToolStripMenuItem->Text = L"Material";
			// 
			// novoToolStripMenuItem1
			// 
			this->novoToolStripMenuItem1->Name = L"novoToolStripMenuItem1";
			this->novoToolStripMenuItem1->Size = System::Drawing::Size(156, 22);
			this->novoToolStripMenuItem1->Text = L"Mídia de Audio";
			this->novoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &PrincipalForm::novoToolStripMenuItem1_Click);
			// 
			// editarToolStripMenuItem1
			// 
			this->editarToolStripMenuItem1->Name = L"editarToolStripMenuItem1";
			this->editarToolStripMenuItem1->Size = System::Drawing::Size(156, 22);
			this->editarToolStripMenuItem1->Text = L"Mídia de Dados";
			// 
			// removerToolStripMenuItem1
			// 
			this->removerToolStripMenuItem1->Name = L"removerToolStripMenuItem1";
			this->removerToolStripMenuItem1->Size = System::Drawing::Size(156, 22);
			this->removerToolStripMenuItem1->Text = L"Mídia de Filme";
			// 
			// livroToolStripMenuItem1
			// 
			this->livroToolStripMenuItem1->Name = L"livroToolStripMenuItem1";
			this->livroToolStripMenuItem1->Size = System::Drawing::Size(156, 22);
			this->livroToolStripMenuItem1->Text = L"Livro";
			// 
			// materiaisToolStripMenuItem
			// 
			this->materiaisToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->midiaDeAudioToolStripMenuItem, 
				this->midiaDeToolStripMenuItem, this->midiaDeDadosToolStripMenuItem, this->livroToolStripMenuItem});
			this->materiaisToolStripMenuItem->Name = L"materiaisToolStripMenuItem";
			this->materiaisToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->materiaisToolStripMenuItem->Text = L"Materiais";
			// 
			// midiaDeAudioToolStripMenuItem
			// 
			this->midiaDeAudioToolStripMenuItem->Name = L"midiaDeAudioToolStripMenuItem";
			this->midiaDeAudioToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->midiaDeAudioToolStripMenuItem->Text = L"Midia de Audio";
			// 
			// midiaDeToolStripMenuItem
			// 
			this->midiaDeToolStripMenuItem->Name = L"midiaDeToolStripMenuItem";
			this->midiaDeToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->midiaDeToolStripMenuItem->Text = L"Midia Filme";
			// 
			// midiaDeDadosToolStripMenuItem
			// 
			this->midiaDeDadosToolStripMenuItem->Name = L"midiaDeDadosToolStripMenuItem";
			this->midiaDeDadosToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->midiaDeDadosToolStripMenuItem->Text = L"Midia de Dados";
			// 
			// livroToolStripMenuItem
			// 
			this->livroToolStripMenuItem->Name = L"livroToolStripMenuItem";
			this->livroToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->livroToolStripMenuItem->Text = L"Livro";
			// 
			// relatóriosToolStripMenuItem
			// 
			this->relatóriosToolStripMenuItem->Name = L"relatóriosToolStripMenuItem";
			this->relatóriosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->relatóriosToolStripMenuItem->Text = L"Relatórios";
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
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->sobreToolStripMenuItem->Text = L"Sobre";
			this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrincipalForm::sobreToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripCadUser, 
				this->toolStripSeparator1, this->toolStripButton2, this->toolStripSeparator2, this->toolStripEmprestimo});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(800, 68);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"barraAcessoRapido";
			// 
			// toolStripCadUser
			// 
			this->toolStripCadUser->AutoSize = false;
			this->toolStripCadUser->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripCadUser->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripCadUser.Image")));
			this->toolStripCadUser->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->toolStripCadUser->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripCadUser->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripCadUser->Name = L"toolStripCadUser";
			this->toolStripCadUser->Size = System::Drawing::Size(50, 49);
			this->toolStripCadUser->Text = L"Cadastrar Amigo";
			this->toolStripCadUser->ToolTipText = L"Cadasto de  Amigo";
			this->toolStripCadUser->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStripBtnCadUser_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 68);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(50, 49);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 68);
			// 
			// toolStripEmprestimo
			// 
			this->toolStripEmprestimo->AutoSize = false;
			this->toolStripEmprestimo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripEmprestimo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripEmprestimo.Image")));
			this->toolStripEmprestimo->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripEmprestimo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripEmprestimo->Name = L"toolStripEmprestimo";
			this->toolStripEmprestimo->Size = System::Drawing::Size(54, 49);
			this->toolStripEmprestimo->Text = L"Realizar empréstimo";
			this->toolStripEmprestimo->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStripEmprestimo_Click);
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 402);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"PrincipalForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Personal Inventory Control v. 0.1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void sobreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 AboutForm ^about = gcnew AboutForm();
				 about->Show();
			 }
private: System::Void splitContainer1_Panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void novoToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			 cadMaterialForm ^cadMat = gcnew cadMaterialForm();
			 cadMat->selecionaMidAudioTab();
			 cadMat->Show();
		 }
private: System::Void toolStripBtnCadUser_Click(System::Object^  sender, System::EventArgs^  e) {
			 cadAmigoForm ^amigo_form = gcnew cadAmigoForm();
			 amigo_form->Show();
		 }
private: System::Void toolStripEmprestimo_Click(System::Object^  sender, System::EventArgs^  e) {
			 EmprestimoForm ^emp = gcnew EmprestimoForm();
			 emp->Show();
		 }
};
}

