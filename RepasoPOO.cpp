#include <iostream>
#include <string>
using namespace std;

/* Clase de objetos CCuenta.
 * Atributos:
 * nombre, cuenta, saldo y tipo de interés
 * Métodos:
 * asignar/obtener nombre
 * asignar/obtener cuenta
 * obtener saldo
 * ingreso
 * reintegro
 * asignar/obtener tipo de interés
 */

class CCuenta
{
    // Atributos
private:
    string nombre;
    string cuenta;
    double saldo;
    double tipoDeInteres;

    // Métodos
public:
    void asignarNombre(string nom)
    {
        if (nom.length() == 0)
        {
            cout << "Error: cadena vacía\n";
            return;
        }
        nombre = nom;
    }

    string obtenerNombre()
    {
        return nombre;
    }

    void asignarCuenta(string cue)
    {
        if (cue.length() == 0)
        {
            cout << "Error: cuenta no válida\n";
            return;
        }
        cuenta = cue;
    }

    string obtenerCuenta()
    {
        return cuenta;
    }

    double obtenerSaldo()
    {
        return saldo;
    }

    void ingreso(double cantidad)
    {
        if (cantidad < 0)
        {
            cout << "Error: cantidad negativa\n";
            return;
        }
        saldo = saldo + cantidad;
    }

    void reintegro(double cantidad)
    {
        if (saldo - cantidad < 0)
        {
            cout << "Error: no dispone de saldo\n";
            return;
        }
        saldo = saldo - cantidad;
    }

    void asignarTipoDeInteres(double tipo)
    {
        if (tipo < 0)
        {
            cout << "Error: tipo de interés no válido\n";
            return;
        }
        tipoDeInteres = tipo;
    }

    double obtenerTipoDeInteres()
    {
        return tipoDeInteres;
    }
};