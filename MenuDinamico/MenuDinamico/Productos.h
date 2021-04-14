#pragma once
#include "DB.h"

namespace MenuDinamico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Productos
	/// </summary>
	public ref class Productos : public System::Windows::Forms::Form
	{
	public:
		Productos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Productos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ data_grid;








	private: System::Windows::Forms::Button^ btn_editar;
	private: System::Windows::Forms::Button^ btn_eliminar;
	private: System::Windows::Forms::Button^ btn_agregar;
	private: System::Windows::Forms::TextBox^ txt_carrera;
	private: System::Windows::Forms::TextBox^ txt_edad;
	private: System::Windows::Forms::TextBox^ txt_nombre;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_buscar;
	private: System::Windows::Forms::TextBox^ txt_buscar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbl_a;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->data_grid = (gcnew System::Windows::Forms::DataGridView());
			this->btn_editar = (gcnew System::Windows::Forms::Button());
			this->btn_eliminar = (gcnew System::Windows::Forms::Button());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->txt_carrera = (gcnew System::Windows::Forms::TextBox());
			this->txt_edad = (gcnew System::Windows::Forms::TextBox());
			this->txt_nombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_buscar = (gcnew System::Windows::Forms::Button());
			this->txt_buscar = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbl_a = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->BeginInit();
			this->SuspendLayout();
			// 
			// data_grid
			// 
			this->data_grid->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->data_grid->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->data_grid->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->data_grid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->data_grid->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->data_grid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_grid->EnableHeadersVisualStyles = false;
			this->data_grid->GridColor = System::Drawing::Color::SteelBlue;
			this->data_grid->Location = System::Drawing::Point(46, 87);
			this->data_grid->Name = L"data_grid";
			this->data_grid->ReadOnly = true;
			this->data_grid->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->data_grid->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->data_grid->RowHeadersVisible = false;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			this->data_grid->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->data_grid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->data_grid->Size = System::Drawing::Size(262, 197);
			this->data_grid->TabIndex = 0;
			// 
			// btn_editar
			// 
			this->btn_editar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)));
			this->btn_editar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_editar->FlatAppearance->BorderSize = 0;
			this->btn_editar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_editar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_editar->ForeColor = System::Drawing::Color::White;
			this->btn_editar->Location = System::Drawing::Point(460, 351);
			this->btn_editar->Name = L"btn_editar";
			this->btn_editar->Size = System::Drawing::Size(116, 28);
			this->btn_editar->TabIndex = 2;
			this->btn_editar->Text = L"Editar";
			this->btn_editar->UseVisualStyleBackColor = false;
			this->btn_editar->Click += gcnew System::EventHandler(this, &Productos::btn_editar_Click);
			// 
			// btn_eliminar
			// 
			this->btn_eliminar->BackColor = System::Drawing::Color::Red;
			this->btn_eliminar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_eliminar->FlatAppearance->BorderSize = 0;
			this->btn_eliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_eliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_eliminar->ForeColor = System::Drawing::Color::White;
			this->btn_eliminar->Location = System::Drawing::Point(595, 351);
			this->btn_eliminar->Name = L"btn_eliminar";
			this->btn_eliminar->Size = System::Drawing::Size(111, 28);
			this->btn_eliminar->TabIndex = 3;
			this->btn_eliminar->Text = L"Eliminar";
			this->btn_eliminar->UseVisualStyleBackColor = false;
			this->btn_eliminar->Click += gcnew System::EventHandler(this, &Productos::btn_eliminar_Click);
			// 
			// btn_agregar
			// 
			this->btn_agregar->BackColor = System::Drawing::Color::White;
			this->btn_agregar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_agregar->FlatAppearance->BorderSize = 0;
			this->btn_agregar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_agregar->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_agregar->ForeColor = System::Drawing::Color::Black;
			this->btn_agregar->Location = System::Drawing::Point(460, 250);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(246, 34);
			this->btn_agregar->TabIndex = 13;
			this->btn_agregar->Text = L"Guardar";
			this->btn_agregar->UseVisualStyleBackColor = false;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &Productos::btn_agregar_Click);
			// 
			// txt_carrera
			// 
			this->txt_carrera->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_carrera->ForeColor = System::Drawing::Color::Black;
			this->txt_carrera->Location = System::Drawing::Point(544, 190);
			this->txt_carrera->Multiline = true;
			this->txt_carrera->Name = L"txt_carrera";
			this->txt_carrera->Size = System::Drawing::Size(162, 29);
			this->txt_carrera->TabIndex = 12;
			// 
			// txt_edad
			// 
			this->txt_edad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_edad->ForeColor = System::Drawing::Color::Black;
			this->txt_edad->Location = System::Drawing::Point(544, 136);
			this->txt_edad->Multiline = true;
			this->txt_edad->Name = L"txt_edad";
			this->txt_edad->Size = System::Drawing::Size(162, 30);
			this->txt_edad->TabIndex = 11;
			this->txt_edad->TextChanged += gcnew System::EventHandler(this, &Productos::txt_edad_TextChanged);
			// 
			// txt_nombre
			// 
			this->txt_nombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nombre->ForeColor = System::Drawing::Color::Black;
			this->txt_nombre->Location = System::Drawing::Point(544, 83);
			this->txt_nombre->Multiline = true;
			this->txt_nombre->Name = L"txt_nombre";
			this->txt_nombre->Size = System::Drawing::Size(162, 31);
			this->txt_nombre->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(456, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Carrera";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(456, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Edad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(456, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Nombre";
			// 
			// btn_buscar
			// 
			this->btn_buscar->BackColor = System::Drawing::Color::Green;
			this->btn_buscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_buscar->FlatAppearance->BorderSize = 0;
			this->btn_buscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_buscar->ForeColor = System::Drawing::Color::White;
			this->btn_buscar->Location = System::Drawing::Point(250, 351);
			this->btn_buscar->Name = L"btn_buscar";
			this->btn_buscar->Size = System::Drawing::Size(88, 28);
			this->btn_buscar->TabIndex = 14;
			this->btn_buscar->Text = L"Buscar";
			this->btn_buscar->UseVisualStyleBackColor = false;
			this->btn_buscar->Click += gcnew System::EventHandler(this, &Productos::btn_buscar_Click);
			// 
			// txt_buscar
			// 
			this->txt_buscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_buscar->ForeColor = System::Drawing::Color::Black;
			this->txt_buscar->Location = System::Drawing::Point(46, 351);
			this->txt_buscar->Multiline = true;
			this->txt_buscar->Name = L"txt_buscar";
			this->txt_buscar->Size = System::Drawing::Size(189, 28);
			this->txt_buscar->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(82, 382);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Nombre del Alumno";
			// 
			// lbl_a
			// 
			this->lbl_a->AutoSize = true;
			this->lbl_a->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->lbl_a->Location = System::Drawing::Point(551, 234);
			this->lbl_a->Name = L"lbl_a";
			this->lbl_a->Size = System::Drawing::Size(70, 13);
			this->lbl_a->TabIndex = 17;
			this->lbl_a->Text = L"Actualizacion";
			this->lbl_a->Visible = false;
			// 
			// Productos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(91)));
			this->ClientSize = System::Drawing::Size(811, 463);
			this->Controls->Add(this->lbl_a);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txt_buscar);
			this->Controls->Add(this->btn_buscar);
			this->Controls->Add(this->btn_agregar);
			this->Controls->Add(this->txt_carrera);
			this->Controls->Add(this->txt_edad);
			this->Controls->Add(this->txt_nombre);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_eliminar);
			this->Controls->Add(this->btn_editar);
			this->Controls->Add(this->data_grid);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Productos";
			this->Text = L"Productos";
			this->Load += gcnew System::EventHandler(this, &Productos::Productos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_grid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Productos_Load(System::Object^ sender, System::EventArgs^ e) {
			this->MostrarDatos();
		}

		private: System::Void txt_edad_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}

	public: void MostrarDatos()
	{
		DB^ database = gcnew DB();
		database->AbrirConexion();
		this->data_grid->DataSource = database->getAlumnos();
		database->CerrarConexion();
	}


	public: void LimpiarCampos()
	{
		txt_buscar->Text = "";
		txt_edad->Text = "";
		txt_carrera->Text = "";
		txt_nombre->Text = "";
	}

	public: bool VerificarCampos()
	{
		return(txt_edad->Text != "" && txt_nombre->Text != "" && txt_carrera->Text != "") ? true : false;
	}
	public: String^ seleccionado = "";

	private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e) {

		if (modo_modificacion == true)
		{
			DB^ database = gcnew DB();
			database->AbrirConexion();
			database->ActualizarAlumno(txt_nombre->Text, txt_edad->Text, txt_carrera->Text, seleccionado);
			database->CerrarConexion();
			//modificamos todo nuevamente
			this->modo_modificacion = false;
			this->btn_agregar->Text = "Guardar";
			this->btn_agregar->BackColor = Color::White;
			this->lbl_a->Visible = false;
			this->MostrarDatos();
			this->LimpiarCampos();

		}
		else
		{
			if (this->VerificarCampos())
			{
				DB^ database = gcnew DB();
				database->AbrirConexion();
				database->InsertarDatos(txt_nombre->Text, txt_edad->Text, txt_carrera->Text);
				database->CerrarConexion();
				MessageBox::Show(L"Alumno ingresado correctamente!");
				this->MostrarDatos();
				this->LimpiarCampos();
			}
			else
			{
				MessageBox::Show(L"Debe llenar todos los campos");
			}
		}

		
	}
	private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_buscar->Text == "")
		{
			this->MostrarDatos();
		}
		else
		{
			DB^ database = gcnew DB();
			database->AbrirConexion();
			data_grid->DataSource = database->getAlumno(txt_buscar->Text);
			database->CerrarConexion();
		}
		
	}
	private: System::Void btn_eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		DB^ database = gcnew DB();
		database->AbrirConexion();
		String^ ref = data_grid->CurrentCell->Value->ToString();
		database->EliminarAlumno(ref);
		this->MostrarDatos();
		database->CerrarConexion();
	}
	public: bool modo_modificacion = false;
	private: System::Void btn_editar_Click(System::Object^ sender, System::EventArgs^ e) {
		btn_agregar->BackColor = Color::Yellow;
		btn_agregar->Text = "Guardar Cambios";
		lbl_a->Visible = true;	
		txt_nombre->Text = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
		this->seleccionado = Convert::ToString(data_grid->SelectedRows[0]->Cells[0]->Value);
		txt_edad->Text = Convert::ToString(data_grid->SelectedRows[0]->Cells[1]->Value);
		txt_carrera->Text = Convert::ToString(data_grid->SelectedRows[0]->Cells[2]->Value);
		this->modo_modificacion = true;
	}
};
}
