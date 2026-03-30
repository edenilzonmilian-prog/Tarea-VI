#include <iostream>
using namespace std;


int main() {
	
	cout << "Nombre del estudiante: Hans Doglas Edenilzon Alvarado Milian" << endl << endl;
	
    double monto, total = 0;
    int contador = 0;
    int mayores = 0, menores = 0;

    cout << "Ingrese montos de compra (0 para finalizar):" << endl;

    // Bucle para ingresar compras
    while (true) {
        cin >> monto;

        if (monto == 0) {
            break; // Termina el ingreso
        }

        // Validación para el monto negativo
        if (monto < 0) {
            cout << "Monto invalido. Intente nuevamente." << endl;
            continue;
        }

        total += monto; // Acumula el total
        contador++;     // Cuenta para compras

        // Clasificación de compras
        if (monto >= 100) {
            mayores++;
        } else {
            menores++;
        }
    }

    // Verifica si hubo compras válidas
    if (contador == 0) {
        cout << "No se ingresaron compras validas." << endl;
    } else {
        cout << "Total acumulado: Q" << total << endl;
        cout << "Cantidad de compras: " << contador << endl;
        cout << "Promedio de compra: Q" << (total / contador) << endl;
        cout << "Compras mayores o iguales a Q100: " << mayores << endl;
        cout << "Compras menores a Q100: " << menores << endl;
    }

    return 0;
}
