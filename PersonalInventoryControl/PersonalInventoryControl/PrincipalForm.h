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
			this->database = DataBase::getInstance();
			
		}
	DataBase *database;

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

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  toolStrip_btn_cad_amigo;
	private: System::Windows::Forms::ToolStripButton^  toolStrip_btn_cad_material;
	private: System::Windows::Forms::ToolStripButton^  toolStrip_btn_novo_emprestimo;



	private: System::Windows::Forms::ToolStripMenuItem^  empréstimosToolStripMenuItem;



	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  amigosMaisPontuaisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  itemMaisEmprestadoToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PrincipalForm::typeid));
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
			this->empréstimosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->toolStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStrip_btn_cad_amigo, 
				this->toolStripSeparator1, this->toolStrip_btn_cad_material, this->toolStripSeparator2, this->toolStrip_btn_novo_emprestimo, 
				this->toolStripSeparator3, this->toolStripDropDownButton1, this->toolStripSeparator4, this->toolStripButton1});
			this->toolStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::HorizontalStackWithOverflow;
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->toolStrip1->Size = System::Drawing::Size(976, 69);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"barraAcessoRapido";
			// 
			// toolStrip_btn_cad_amigo
			// 
			this->toolStrip_btn_cad_amigo->AccessibleDescription = L"";
			this->toolStrip_btn_cad_amigo->AutoSize = false;
			this->toolStrip_btn_cad_amigo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip_btn_cad_amigo.Image")));
			this->toolStrip_btn_cad_amigo->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStrip_btn_cad_amigo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStrip_btn_cad_amigo->Name = L"toolStrip_btn_cad_amigo";
			this->toolStrip_btn_cad_amigo->Size = System::Drawing::Size(80, 65);
			this->toolStrip_btn_cad_amigo->Text = L"Amigos";
			this->toolStrip_btn_cad_amigo->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStrip_btn_cad_amigo->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStrip_btn_cad_amigo->ToolTipText = L"Gerenciamento de amigos";
			this->toolStrip_btn_cad_amigo->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStrip_btn_cad_amigo_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 69);
			// 
			// toolStrip_btn_cad_material
			// 
			this->toolStrip_btn_cad_material->AutoSize = false;
			this->toolStrip_btn_cad_material->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip_btn_cad_material.Image")));
			this->toolStrip_btn_cad_material->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStrip_btn_cad_material->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStrip_btn_cad_material->Name = L"toolStrip_btn_cad_material";
			this->toolStrip_btn_cad_material->Size = System::Drawing::Size(80, 65);
			this->toolStrip_btn_cad_material->Text = L"Materiais";
			this->toolStrip_btn_cad_material->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStrip_btn_cad_material->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStrip_btn_cad_material->ToolTipText = L"Gerenciamento de materiais";
			this->toolStrip_btn_cad_material->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStrip_btn_cad_material_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 69);
			// 
			// toolStrip_btn_novo_emprestimo
			// 
			this->toolStrip_btn_novo_emprestimo->AutoSize = false;
			this->toolStrip_btn_novo_emprestimo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip_btn_novo_emprestimo.Image")));
			this->toolStrip_btn_novo_emprestimo->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStrip_btn_novo_emprestimo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStrip_btn_novo_emprestimo->Name = L"toolStrip_btn_novo_emprestimo";
			this->toolStrip_btn_novo_emprestimo->Size = System::Drawing::Size(80, 65);
			this->toolStrip_btn_novo_emprestimo->Text = L"Empréstimos";
			this->toolStrip_btn_novo_emprestimo->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStrip_btn_novo_emprestimo->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStrip_btn_novo_emprestimo->ToolTipText = L"Novo Empréstimo";
			this->toolStrip_btn_novo_emprestimo->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStrip_btn_novo_emprestimo_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 69);
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->AutoSize = false;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->amigosMaisPontuaisToolStripMenuItem, 
				this->itemMaisEmprestadoToolStripMenuItem, this->empréstimosToolStripMenuItem});
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(80, 65);
			this->toolStripDropDownButton1->Text = L"Relatórios";
			this->toolStripDropDownButton1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStripDropDownButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripDropDownButton1->ToolTipText = L"Gerar Relatórios";
			// 
			// amigosMaisPontuaisToolStripMenuItem
			// 
			this->amigosMaisPontuaisToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->amigosMaisPontuaisToolStripMenuItem->Name = L"amigosMaisPontuaisToolStripMenuItem";
			this->amigosMaisPontuaisToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->amigosMaisPontuaisToolStripMenuItem->Text = L"Amigos";
			this->amigosMaisPontuaisToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrincipalForm::amigosMaisPontuaisToolStripMenuItem_Click);
			// 
			// itemMaisEmprestadoToolStripMenuItem
			// 
			this->itemMaisEmprestadoToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->itemMaisEmprestadoToolStripMenuItem->Name = L"itemMaisEmprestadoToolStripMenuItem";
			this->itemMaisEmprestadoToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->itemMaisEmprestadoToolStripMenuItem->Text = L"Materiais";
			this->itemMaisEmprestadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrincipalForm::itemMaisEmprestadoToolStripMenuItem_Click);
			// 
			// empréstimosToolStripMenuItem
			// 
			this->empréstimosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->empréstimosToolStripMenuItem->Name = L"empréstimosToolStripMenuItem";
			this->empréstimosToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->empréstimosToolStripMenuItem->Text = L"Empréstimos";
			this->empréstimosToolStripMenuItem->Click += gcnew System::EventHandler(this, &PrincipalForm::empréstimosToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->AutoSize = false;
			this->toolStripSeparator4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(510, 95);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(80, 65);
			this->toolStripButton1->Text = L"Sobre";
			this->toolStripButton1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->toolStripButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &PrincipalForm::toolStripButton1_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->toolStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(978, 73);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 73);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(978, 436);
			this->panel2->TabIndex = 4;
			// 
			// PrincipalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(978, 509);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"PrincipalForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Personal Inventory Control v. 1.00";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
	
	// Clicar no cadastro de material barra de acesso rapido
	private: System::Void toolStrip_btn_cad_material_Click(System::Object^  sender, System::EventArgs^  e) {
			gerenciarMateriaisForm ^materiais_form = gcnew gerenciarMateriaisForm();
			materiais_form->Show();
		 }
	
    // Clicar emprestimo  barra de acesso rapido
	private: System::Void toolStrip_btn_novo_emprestimo_Click(System::Object^  sender, System::EventArgs^  e) {
			 gerenciarEmprestimosForm ^emprestimos_form = gcnew gerenciarEmprestimosForm();
			 emprestimos_form->Show();
		 }

	// Clicar cadastro de amigo na barra de acesso rapido
	private: System::Void toolStrip_btn_cad_amigo_Click(System::Object^  sender, System::EventArgs^  e) {
				 gerenciarAmigosForm ^amigo_form = gcnew gerenciarAmigosForm();
				 amigo_form->Show();
			 }

	// Clicar about  na barra de acesso rapido
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 AboutForm ^about = gcnew AboutForm();
			 about->Show();
		 }
	
	private: System::Void amigosMaisPontuaisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 form_relatorios^ relatorio = gcnew form_relatorios(COD_RELATORIO_AMIGO);
				 relatorio->Show();
			 }
	private: System::Void itemMaisEmprestadoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 form_relatorios^ relatorio = gcnew form_relatorios(COD_RELATORIO_MATERIAL);
			 relatorio->Show();
		 }
	private: System::Void empréstimosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 form_relatorios^ relatorio = gcnew form_relatorios(COD_RELATORIO_EMPRESTIMO);
			 relatorio->Show();
		 }
};

}

