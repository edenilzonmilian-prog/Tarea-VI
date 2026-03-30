#include <iostream>
using namespace std;

int main() {
	
	cout << "Nombre del estudiante: Hans Doglas Edenilzon Alvarado Milian" << endl << endl;
	
    int opcion;
    int malo = 0, regular = 0, bueno = 0, excelente = 0;
    int total = 0; // Total de respuestas válidas

    // Bucle de para la encuesta
    do {
        cout << "Ingrese calificacion (1=Malo, 2=Regular, 3=Bueno, 4=Excelente, 0=Salir): ";
        cin >> opcion;

        // Clasificación de las respuestas
        switch (opcion) {
            case 1:
                malo++;
                total++;
                break;
            case 2:
                regular++;
                total++;
                break;
            case 3:
                bueno++;
                total++;
                break;
            case 4:
                excelente++;
                total++;
                break;
            case 0:
                break; // Finaliza la encuesta
            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
        }

    } while (opcion != 0);

    // Verifica si hubo respuestas válidas
    if (total == 0) {
        cout << "No se ingresaron respuestas validas." << endl;
    } else {
        cout << "\nTotal de respuestas: " << total << endl;
        cout << "Malo: " << malo << endl;
        cout << "Regular: " << regular << endl;
        cout << "Bueno: " << bueno << endl;
        cout << "Excelente: " << excelente << endl;
    }

    return 0;
}
