#include <iostream>
using namespace std;

class Cliente
{
private:
    string nombre;
    string apellido;
    string dni;

public:
    Cliente(string _nombre = "", string _apellido = "", string _dni = "")
    {
        nombre = _nombre;
        apellido = _apellido;
        dni = _dni;
    }

    // Metodos de getter an setter

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }

    string getDni()
    {
        return dni;
    }

    void setDni(string _dni)
    {
        dni = _dni;
    }
};