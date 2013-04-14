#pragma once
#include "AboutForm.h"
#include "cadMaterialForm.h"

namespace PersonalInventoryControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
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
	private: System::Windows::Forms::ToolStripMenuItem^  novoAmigoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  removerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  materialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  editarToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  removerToolStripMenuItem1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStripBtnCadUser;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  amigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  novoToolStripMenuItem2;

	private: System::Windows::Forms::ToolStripMenuItem^  consultarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  materiaisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  midiaDeAudioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  midiaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  midiaDeDadosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  livroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  relatóriosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cadastrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoAmigoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripBtnCadUser = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materiaisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->midiaDeAudioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->midiaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->livroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->midiaDeDadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->relatóriosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->amigosToolStripMenuItem, 
				this->cadastrosToolStripMenuItem, this->materiaisToolStripMenuItem, this->relatóriosToolStripMenuItem, this->ajudaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(800, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
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
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sobreToolStripMenuItem->Text = L"Sobre";
			this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sobreToolStripMenuItem_Click);
			// 
			// cadastrosToolStripMenuItem
			// 
			this->cadastrosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->novoAmigoToolStripMenuItem, 
				this->materialToolStripMenuItem});
			this->cadastrosToolStripMenuItem->Name = L"cadastrosToolStripMenuItem";
			this->cadastrosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->cadastrosToolStripMenuItem->Text = L"&Cadastros";
			// 
			// novoAmigoToolStripMenuItem
			// 
			this->novoAmigoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->novoToolStripMenuItem, 
				this->editarToolStripMenuItem, this->removerToolStripMenuItem});
			this->novoAmigoToolStripMenuItem->Name = L"novoAmigoToolStripMenuItem";
			this->novoAmigoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->novoAmigoToolStripMenuItem->Text = L"Amigo";
			// 
			// novoToolStripMenuItem
			// 
			this->novoToolStripMenuItem->Name = L"novoToolStripMenuItem";
			this->novoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->novoToolStripMenuItem->Text = L"Novo ..";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// removerToolStripMenuItem
			// 
			this->removerToolStripMenuItem->Name = L"removerToolStripMenuItem";
			this->removerToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->removerToolStripMenuItem->Text = L"Remover";
			// 
			// materialToolStripMenuItem
			// 
			this->materialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->novoToolStripMenuItem1, 
				this->editarToolStripMenuItem1, this->removerToolStripMenuItem1});
			this->materialToolStripMenuItem->Name = L"materialToolStripMenuItem";
			this->materialToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->materialToolStripMenuItem->Text = L"Material";
			// 
			// novoToolStripMenuItem1
			// 
			this->novoToolStripMenuItem1->Name = L"novoToolStripMenuItem1";
			this->novoToolStripMenuItem1->Size = System::Drawing::Size(155, 22);
			this->novoToolStripMenuItem1->Text = L"Midia de Audio";
			this->novoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::novoToolStripMenuItem1_Click);
			// 
			// editarToolStripMenuItem1
			// 
			this->editarToolStripMenuItem1->Name = L"editarToolStripMenuItem1";
			this->editarToolStripMenuItem1->Size = System::Drawing::Size(155, 22);
			this->editarToolStripMenuItem1->Text = L"Editar";
			// 
			// removerToolStripMenuItem1
			// 
			this->removerToolStripMenuItem1->Name = L"removerToolStripMenuItem1";
			this->removerToolStripMenuItem1->Size = System::Drawing::Size(155, 22);
			this->removerToolStripMenuItem1->Text = L"Remover";
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->toolStripBtnCadUser, 
				this->toolStripSeparator1, this->toolStripButton2, this->toolStripSeparator2, this->toolStripSplitButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(800, 51);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"barraAcessoRapido";
			// 
			// toolStripBtnCadUser
			// 
			this->toolStripBtnCadUser->AutoSize = false;
			this->toolStripBtnCadUser->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripBtnCadUser->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripBtnCadUser.Image")));
			this->toolStripBtnCadUser->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripBtnCadUser->Name = L"toolStripBtnCadUser";
			this->toolStripBtnCadUser->Size = System::Drawing::Size(48, 48);
			this->toolStripBtnCadUser->Text = L"Cadastrar Amigo";
			this->toolStripBtnCadUser->ToolTipText = L"Cadasto de  Amigo";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 51);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(48, 48);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 51);
			// 
			// amigosToolStripMenuItem
			// 
			this->amigosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->novoToolStripMenuItem2, 
				this->consultarToolStripMenuItem});
			this->amigosToolStripMenuItem->Name = L"amigosToolStripMenuItem";
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->amigosToolStripMenuItem->Text = L"Amigos";
			// 
			// novoToolStripMenuItem2
			// 
			this->novoToolStripMenuItem2->Name = L"novoToolStripMenuItem2";
			this->novoToolStripMenuItem2->Size = System::Drawing::Size(152, 22);
			this->novoToolStripMenuItem2->Text = L"Novo";
			// 
			// consultarToolStripMenuItem
			// 
			this->consultarToolStripMenuItem->Name = L"consultarToolStripMenuItem";
			this->consultarToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->consultarToolStripMenuItem->Text = L"Consultar";
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
			// livroToolStripMenuItem
			// 
			this->livroToolStripMenuItem->Name = L"livroToolStripMenuItem";
			this->livroToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->livroToolStripMenuItem->Text = L"Livro";
			// 
			// midiaDeDadosToolStripMenuItem
			// 
			this->midiaDeDadosToolStripMenuItem->Name = L"midiaDeDadosToolStripMenuItem";
			this->midiaDeDadosToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->midiaDeDadosToolStripMenuItem->Text = L"Midia de Dados";
			// 
			// relatóriosToolStripMenuItem
			// 
			this->relatóriosToolStripMenuItem->Name = L"relatóriosToolStripMenuItem";
			this->relatóriosToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->relatóriosToolStripMenuItem->Text = L"Relatórios";
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->AutoSize = false;
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(48, 48);
			this->toolStripSplitButton1->Text = L"toolStripSplitButton1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 402);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
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
			 cadMat->Show();
		 }
};
}

