#include <iostream>
using namespace std;


int main() {
	
	cout << "Nombre del estudiante: Hans Doglas Edenilzon Alvarado Milian" << endl << endl;
	
    double saldo = 500; // Saldo inicial 
    int opcion;
    double monto;

    // Menú que se repite hasta salir
    do {
        cout << "\n1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Control para las opciones
        switch (opcion) {
            case 1:
                cout << "Saldo actual: Q" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese monto a depositar: ";
                cin >> monto;

                // Validación de depósito
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito realizado correctamente." << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 3:
                cout << "Ingrese monto a retirar: ";
                cin >> monto;

                // Validación de retiro
                if (monto > saldo) {
                    cout << "Fondos insuficientes." << endl;
                } else if (monto > 0) {
                    saldo -= monto;
                    cout << "Retiro realizado correctamente." << endl;
                } else {
                    cout << "Monto invalido." << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el sistema." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }

    } while (opcion != 4);

    return 0;
}
