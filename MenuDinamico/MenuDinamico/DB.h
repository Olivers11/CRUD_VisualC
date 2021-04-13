#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;
ref class DB
{
private:
	String^ connectionString;
	MySqlConnection^ conn;
public:
	DB();
	DataTable^ getAlumnos();
	void InsertarDatos(String^, String^, String^);
	void CerrarConexion();
	void AbrirConexion();
	DataTable^ getAlumno(String^);
	void EliminarAlumno(String^);
	void ActualizarAlumno(String^, String^, String^, String^);
};

