#include "pch.h"
#include "DB.h"


DB::DB()
{
	this->connectionString = "datasource=localhost; username=root; password=""; database=prueba;";
	this->conn = gcnew MySqlConnection(this->connectionString);
}


void DB::CerrarConexion()
{
	this->conn->Close();
}


void DB::AbrirConexion()
{
	this->conn->Open();
}

DataTable^ DB::getAlumnos()
{
	String^ sql = "select * from persona";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;														
}

void DB::InsertarDatos(String^ n, String^ e, String^ c)
{
	String^ sql = "insert into persona (Nombre, Edad, Carrera) values ('" + n + "', " + e + ",'"+c+"')";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		cursor->ExecuteNonQuery();
	}
	catch (Exception^e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
	
}


DataTable^ DB::getAlumno(String^ ref)
{
	String^ sql = "select * from persona where Nombre = '" + ref + "'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
	DataTable^ tabla = gcnew DataTable();
	data->Fill(tabla);
	return tabla;
}

void DB::EliminarAlumno(String^ ref)
{
	String^ sql = "delete from persona where Nombre = '"+ref+"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		cursor->ExecuteNonQuery();
		MessageBox::Show(L"Se eliminara este Alumno");
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}
}


void DB::ActualizarAlumno(String^ n, String^ e, String^ c, String^ref)
{
	String^ sql = "update  persona set Nombre = '"+n+"', Edad = '"+e+"', Carrera = '"+c+"' where Nombre = '"+ref+"'";
	MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
	try
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(L"Modificado correctamente!");
		cursor->ExecuteNonQuery();
		
	}
	catch (Exception^ e)
	{
		using namespace System::Windows::Forms;
		using namespace System::Data;
		using namespace System::Drawing;
		MessageBox::Show(e->Message);
	}

}