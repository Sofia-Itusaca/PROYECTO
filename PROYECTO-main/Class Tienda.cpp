#include <iostream>
#include "Class Empleado.cpp"
#include "Class Autos.cpp"
#include "Class Cliente.cpp"
using namespace std;

class Tienda
{
private:
    string nombre_tienda;
    string direccion;
    Empleado empleado;
    Autos autos[10];
    Cliente cliente;

public:
    Tienda(string _nombre_tienda = "", string _direccion = "")
    {
        nombre_tienda = _nombre_tienda;
        direccion = _direccion;
    }
    string getNombreTienda()
    {
        return nombre_tienda;
    }
    void setNombreTienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }
    string getDireccion()
    {
        return direccion;
    }
    void setDireccion(string _direccion)
    {
        direccion = _direccion;
    }
    Empleado getEmpleado()
    {
        return empleado;
    }
    void setEmpleado(Empleado _empleado)
    {
        empleado = _empleado;
    }
    Cliente getCliente()
    {
        return cliente;
    }
    void setCliente(Cliente _cliente)
    {
        cliente = _cliente;
    }
    Autos getAutos(int id)
    {
        return autos[id];
    }
    
};
