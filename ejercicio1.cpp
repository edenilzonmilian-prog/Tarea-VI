#include <iostream>
#include <string>
using namespace std;


int main() {
	
	cout << "Nombre del estudiante: Hans Doglas Edenilzon Alvarado Milian" << endl << endl;
	
    string usuario;
    int contrasena;
    int intentos = 0; // Contador de intentos fallidos

    // Bucle que se repite hasta que los datos sean correctos
    while (true) {
        cout << "Ingrese usuario: ";
        cin >> usuario;

        cout << "Ingrese contraseña: ";
        cin >> contrasena;

        // Validación para ñas credenciales
        if (usuario == "admin" && contrasena == 2026) {
            cout << "Bienvenido al sistema." << endl;
            cout << "Acceso concedido." << endl;
            cout << "Intentos incorrectos: " << intentos << endl;
            break; // Sale del ciclo si es correcto
        } else {
            cout << "Datos incorrectos." << endl << endl;
            intentos++; // intentos fallidos
        }
    }

    return 0;
}
