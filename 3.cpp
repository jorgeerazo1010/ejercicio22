#include <iostream>
using namespace std;

int main()
{
    int num1;
    cout << "Ingrese un numero positivo:  " << endl;
    cin >> num1;

    while (num1 >= 0)
    {
        cout << "Ingrese un numero positivo:  " << endl;
        cin >> num1;
        if (num1 < 0)
        {
            cout << "El numero es positivo" << endl;
        }
    }

    return 0;
}