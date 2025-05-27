#include <iostream>
using namespace std;

int main()
{
    int horas;
    float precio_hora, salario;
    string nombre, decision = "si";

    while (decision == "si")
    {
        cout << "Ingrese su primer nombre" << endl;
        cin >> nombre;
        cout << "Ingrese el numero de horas trabajadas" << endl;
        cin >> horas;
        cout << "Ingrese el precio por hora" << endl;
        cin >> precio_hora;
        if (horas <= 44)
        {
            salario = (horas * precio_hora);
            cout << nombre << " su salario es: " << salario << endl;
        }
        else
        {
            salario = (44 * precio_hora + 1.5 * precio_hora * (horas - 44));
            cout << nombre << " su salario es: " << salario << endl;
        }
        cout << "Desea mas datos?" << endl;
        cin >> decision;
    }
    return 0;
}
