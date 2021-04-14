#pragma once
#include "Productos.h"
#include "Ventas.h"
#include "Clientes.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_lateral;
	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel_margen;
	private: System::Windows::Forms::Panel^ panel_central;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ ventas;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btn_clientes;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel_lateral = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btn_clientes = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ventas = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel_margen = (gcnew System::Windows::Forms::Panel());
			this->panel_central = (gcnew System::Windows::Forms::Panel());
			this->panel_lateral->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel_lateral
			// 
			this->panel_lateral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)));
			this->panel_lateral->Controls->Add(this->panel3);
			this->panel_lateral->Controls->Add(this->btn_clientes);
			this->panel_lateral->Controls->Add(this->panel2);
			this->panel_lateral->Controls->Add(this->ventas);
			this->panel_lateral->Controls->Add(this->panel1);
			this->panel_lateral->Controls->Add(this->button1);
			this->panel_lateral->Controls->Add(this->panel_margen);
			this->panel_lateral->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_lateral->Location = System::Drawing::Point(0, 0);
			this->panel_lateral->Name = L"panel_lateral";
			this->panel_lateral->Size = System::Drawing::Size(229, 463);
			this->panel_lateral->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel3->Location = System::Drawing::Point(0, 236);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 42);
			this->panel3->TabIndex = 8;
			// 
			// btn_clientes
			// 
			this->btn_clientes->FlatAppearance->BorderSize = 0;
			this->btn_clientes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->btn_clientes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_clientes->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_clientes->ForeColor = System::Drawing::Color::White;
			this->btn_clientes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_clientes->Location = System::Drawing::Point(12, 236);
			this->btn_clientes->Name = L"btn_clientes";
			this->btn_clientes->Size = System::Drawing::Size(217, 42);
			this->btn_clientes->TabIndex = 7;
			this->btn_clientes->Text = L"Clientes";
			this->btn_clientes->UseVisualStyleBackColor = true;
			this->btn_clientes->Click += gcnew System::EventHandler(this, &Form1::btn_clientes_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel2->Location = System::Drawing::Point(0, 183);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 42);
			this->panel2->TabIndex = 5;
			// 
			// ventas
			// 
			this->ventas->FlatAppearance->BorderSize = 0;
			this->ventas->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->ventas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ventas->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ventas->ForeColor = System::Drawing::Color::White;
			this->ventas->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ventas->Location = System::Drawing::Point(12, 183);
			this->ventas->Name = L"ventas";
			this->ventas->Size = System::Drawing::Size(217, 42);
			this->ventas->TabIndex = 4;
			this->ventas->Text = L"Ventas";
			this->ventas->UseVisualStyleBackColor = true;
			this->ventas->Click += gcnew System::EventHandler(this, &Form1::ventas_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->panel1->Location = System::Drawing::Point(0, 132);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(10, 42);
			this->panel1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(217, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Productos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel_margen
			// 
			this->panel_margen->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_margen->Location = System::Drawing::Point(0, 0);
			this->panel_margen->Name = L"panel_margen";
			this->panel_margen->Size = System::Drawing::Size(229, 126);
			this->panel_margen->TabIndex = 0;
			// 
			// panel_central
			// 
			this->panel_central->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_central->Location = System::Drawing::Point(229, 0);
			this->panel_central->Name = L"panel_central";
			this->panel_central->Size = System::Drawing::Size(811, 463);
			this->panel_central->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1040, 463);
			this->Controls->Add(this->panel_central);
			this->Controls->Add(this->panel_lateral);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panel_lateral->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		template<class T>
		void AbrirPanel(T Formhijo) {
			if (this->panel_central->Controls->Count > 0)
				this->panel_central->Controls->RemoveAt(0);
			Formhijo->TopLevel = false;
			Formhijo->Dock = DockStyle::Fill;
			this->panel_central->Controls->Add(Formhijo);
			this->panel_central->Tag = Formhijo;
			Formhijo->Show();
		}


		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew MenuDinamico::Productos);
		}
		private: System::Void ventas_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew MenuDinamico::Ventas);
		}
		private: System::Void btn_clientes_Click(System::Object^ sender, System::EventArgs^ e) {
			this->AbrirPanel(gcnew MenuDinamico::Clientes);
		}
};
}
