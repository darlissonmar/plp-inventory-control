#pragma once

namespace PersonalInventoryControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for cadAmigoForm
	/// </summary>
	public ref class cadAmigoForm : public System::Windows::Forms::Form
	{
	public:
		cadAmigoForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DataBase *database = DataBase::getInstance();
			ControllerAmigo* controller = new ControllerAmigo();
			database->inicializar();
			string amigoNome = "Joao";
			// convertendo <string> to System::String

			//TODO Quando o amigo nao exite na DataBase o valor de retorno é NULL causando uma excecao caso
			//se tente capturar o nome
			this->txtBox_cad_user_nome->Text = gcnew String(controller->buscar(amigoNome)->getNome().c_str());

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cadAmigoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  comBox_cad_user_gen;
	private: System::Windows::Forms::TextBox^  txtBox_cad_user_end;
	protected: 


	private: System::Windows::Forms::TextBox^  txtBox_cad_user_telef;

	private: System::Windows::Forms::TextBox^  txtBox_cad_user_email;

	private: System::Windows::Forms::TextBox^  txtBox_cad_user_sobnome;

	private: System::Windows::Forms::TextBox^  txtBox_cad_user_nome;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comBox_cad_user_gen = (gcnew System::Windows::Forms::ComboBox());
			this->txtBox_cad_user_end = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_telef = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_email = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_sobnome = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_cad_user_nome = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comBox_cad_user_gen);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_end);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_telef);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_email);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_sobnome);
			this->groupBox1->Controls->Add(this->txtBox_cad_user_nome);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(7, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(307, 190);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados Pessoais";
			// 
			// comBox_cad_user_gen
			// 
			this->comBox_cad_user_gen->FormattingEnabled = true;
			this->comBox_cad_user_gen->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Masculino", L"Feminino"});
			this->comBox_cad_user_gen->Location = System::Drawing::Point(76, 107);
			this->comBox_cad_user_gen->Name = L"comBox_cad_user_gen";
			this->comBox_cad_user_gen->Size = System::Drawing::Size(151, 21);
			this->comBox_cad_user_gen->TabIndex = 11;
			// 
			// txtBox_cad_user_end
			// 
			this->txtBox_cad_user_end->Location = System::Drawing::Point(76, 161);
			this->txtBox_cad_user_end->Name = L"txtBox_cad_user_end";
			this->txtBox_cad_user_end->Size = System::Drawing::Size(219, 20);
			this->txtBox_cad_user_end->TabIndex = 10;
			// 
			// txtBox_cad_user_telef
			// 
			this->txtBox_cad_user_telef->Location = System::Drawing::Point(76, 134);
			this->txtBox_cad_user_telef->Name = L"txtBox_cad_user_telef";
			this->txtBox_cad_user_telef->Size = System::Drawing::Size(151, 20);
			this->txtBox_cad_user_telef->TabIndex = 9;
			// 
			// txtBox_cad_user_email
			// 
			this->txtBox_cad_user_email->Location = System::Drawing::Point(75, 80);
			this->txtBox_cad_user_email->Name = L"txtBox_cad_user_email";
			this->txtBox_cad_user_email->Size = System::Drawing::Size(152, 20);
			this->txtBox_cad_user_email->TabIndex = 8;
			// 
			// txtBox_cad_user_sobnome
			// 
			this->txtBox_cad_user_sobnome->Location = System::Drawing::Point(75, 53);
			this->txtBox_cad_user_sobnome->Name = L"txtBox_cad_user_sobnome";
			this->txtBox_cad_user_sobnome->Size = System::Drawing::Size(152, 20);
			this->txtBox_cad_user_sobnome->TabIndex = 7;
			// 
			// txtBox_cad_user_nome
			// 
			this->txtBox_cad_user_nome->Location = System::Drawing::Point(75, 26);
			this->txtBox_cad_user_nome->Name = L"txtBox_cad_user_nome";
			this->txtBox_cad_user_nome->Size = System::Drawing::Size(152, 20);
			this->txtBox_cad_user_nome->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 168);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Endereço";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 110);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Gênero";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Telefone";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Sobrenome";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nome";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(88)), 
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(321, 43);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cadastrar Amigo";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(98, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Efetuar operação";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cadAmigoForm::button1_Click);
			// 
			// cadAmigoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 274);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"cadAmigoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Cadastrar Amigo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
