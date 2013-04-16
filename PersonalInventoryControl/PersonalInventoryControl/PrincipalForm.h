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









	private: System::Windows::Forms::ToolStripMenuItem^  relatóriosToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  amigosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  livroToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripButton^  toolStripEmprestimo;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;



	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  amigosMaisPontuaisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  itemMaisEmprestadoToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripMenuItem^  empréstimosToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->cadastrosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->amigosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->materialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->novoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->removerToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->livroToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->relatóriosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripCadUser = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripEmprestimo = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->amigosMaisPontuaisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemMaisEmprestadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->empréstimosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarNovoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->devoluçãoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->cadastrosToolStripMenuItem, 
				this->relatóriosToolStripMenuItem, this->ajudaToolStripMenuItem, this->empréstimosToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(808, 24);
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
			this->amigosToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->amigosToolStripMenuItem->Text = L"Amigos";
			// 
			// materialToolStripMenuItem
			// 
			this->materialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->novoToolStripMenuItem1, 
				this->editarToolStripMenuItem1, this->removerToolStripMenuItem1, this->livroToolStripMenuItem1});
			this->materialToolStripMenuItem->Name = L"materialToolStripMenuItem";
			this->materialToolStripMenuItem->Size = System::Drawing::Size(152, 22);
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
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(169, 22);
			this->sobreToolStripMenuItem->Text = L"Sobre o programa";
			this->sobreToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrincipalForm::sobreToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->toolStripCadUser, 
				this->toolStripSeparator1, this->toolStripButton2, this->toolStripSeparator2, this->toolStripEmprestimo, this->toolStripSeparator3, 
				this->toolStripDropDownButton1});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(808, 57);
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
			this->toolStripCadUser->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->toolStripCadUser->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->toolStripCadUser->ToolTipText = L"Cadastrar Amigo";
			this->toolStripCadUser->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStripBtnCadUser_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 60);
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
			this->toolStripButton2->ToolTipText = L"Cadastrar Material";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 60);
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
			this->toolStripEmprestimo->ToolTipText = L"Realizar Empréstimo";
			this->toolStripEmprestimo->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStripEmprestimo_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 60);
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
			// empréstimosToolStripMenuItem
			// 
			this->empréstimosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->realizarNovoToolStripMenuItem, 
				this->devoluçãoToolStripMenuItem});
			this->empréstimosToolStripMenuItem->Name = L"empréstimosToolStripMenuItem";
			this->empréstimosToolStripMenuItem->Size = System::Drawing::Size(88, 20);
			this->empréstimosToolStripMenuItem->Text = L"Empréstimos";
			// 
			// realizarNovoToolStripMenuItem
			// 
			this->realizarNovoToolStripMenuItem->Name = L"realizarNovoToolStripMenuItem";
			this->realizarNovoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->realizarNovoToolStripMenuItem->Text = L"Realizar novo";
			// 
			// devoluçãoToolStripMenuItem
			// 
			this->devoluçãoToolStripMenuItem->Name = L"devoluçãoToolStripMenuItem";
			this->devoluçãoToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->devoluçãoToolStripMenuItem->Text = L"Devolução";
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 469);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"PrincipalForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Personal Inventory Control v. 0.1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
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

