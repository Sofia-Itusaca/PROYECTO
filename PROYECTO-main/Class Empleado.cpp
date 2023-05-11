#include <iostream>
using namespace std;

class Empleado
{
private:
    string nombre_empleado;
    int codigo;

public:
    Empleado(string _nombre_empleado = "", int _codigo= 0)
    {
        nombre_empleado = _nombre_empleado;
        codigo = _codigo;
    }
    string getnombre_empleado()
    {
        return nombre_empleado;
    }
    void setNombreEmpleado(string _nombre_empleado)
    {
        nombre_empleado = _nombre_empleado;
    }
    int getCodigo()
    {
        return codigo;
    }
    void setCodigo(int _codigo)
    {
        codigo = _codigo;
    }

};