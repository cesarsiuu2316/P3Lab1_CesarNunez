#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0, c = 0, a2, b2, c2;
	bool raizExacta = false;
	int resp;
	char despejar = 'C';
	cout << "---- Teorema de Pitagoras -----" << endl;
	cout << "Seleccione incognita (A/B/C): ";
	int incognita;
	cin >> incognita;
	
	if (incognita == 1) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'A';
		cout << "Despejar para A:\nA^2 = C^2 - B^2\n";
		
		//validaciones
		cout << "Ingresar valor para B: ";
		cin >> b;
		while (b < 4 || b >= 16) {
			cout << "Ingresar un valor para B entre 4 y 15: ";
			cin >> b;
		}
		b2 = b * b;
		cout << "Ingresar valor para C: ";
		cin >> c;
		while (c < 4 || c >= 16 || c == b) {
			cout << "Ingresar un valor para C mayor que B y menor que 16: ";
			cin >> c;
		}
		c2 = c * c;

		cout << "Ecuacion: A^2 = " << c << "^2 - " << b << "^2\n";
		cout << "A^2 = " << c2 << " - " << b2 << endl;
		int resta = c2 - b2;
		cout << "A^2 = " << resta << endl;

		// verificar que sea raiz cuadrada exacta
		for (int i = 0; i < resta; i++)
		{
			if (i * i == resta) {
				raizExacta = true;
				resp = i;
				break;
			}
		}		
		if (raizExacta == true) {
			cout << "A = " << resp << endl;
		}
		else {
			cout << "La resta de la hipotenusa con el cateto no es una raiz exacta.\n";
		}
	}
	else if (incognita == 2) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'B';
		cout << "Despejar para B:\nB^2 = C^2 - A^2\n";

		//validaciones
		cout << "Ingresar valor para A: ";
		cin >> a;
		while (a < 4 || a >= 16) {
			cout << "Ingresar un valor para A entre 4 y 15: ";
			cin >> a;
		}
		a2 = a * a;
		cout << "Ingresar valor para C: ";
		cin >> c;
		while (c < 4 || c >= 16 || c == a) {
			cout << "Ingresar un valor para C mayor que A y menor que 16: ";
			cin >> c;
		}
		c2 = c * c;
		cout << "Ecuacion: B^2 = " << c << "^2 - " << a << "^2\n";
		cout << "B^2 = " << c2 << " - " << a2 << endl;
		int resta = c2 - a2;
		cout << "B^2 = " << resta << endl;

		// verificar que sea raiz cuadrada exacta
		for (int i = 0; i < resta; i++)
		{
			if (i * i == resta) {
				raizExacta = true;
				resp = i;
				break;
			}
		}
		if (raizExacta == true) {
			cout << "B = " << resp << endl;
		}
		else {
			cout << "La resta de la hipotenusa con el cateto no es una raiz exacta.\n";
		}
	}
	else if (incognita == 3) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'C';		
		cout << "Ya esta despejada.\nC^2 = A^2 + B^2" << endl;
		cout << "Ingresar valor para A: ";
		cin >> a;

		//validaciones
		while (a < 4 || a >= 16) {
			cout << "Ingresar un valor para A entre 4 y 15: ";
			cin >> a;
		}
		a2 = a * a;
		cout << "Ingresar valor para B: ";
		cin >> b;
		while (b < 4 || b >= 16) {
			cout << "Ingresar un valor para B entre 4 y 15: ";
			cin >> b;
		}
		b2 = b * b;
		cout << "Ecuacion: C^2 = " << a << "^2 + " << b << "^2\n";
		cout << "C^2 = " << a2 << " + " << b2 << endl;
		int suma = a2 + b2;
		cout << "C^2 = " << suma << endl;

		// verificar que sea raiz cuadrada exacta
		for (int i = 0; i < suma; i++)
		{
			if (i * i == suma) {
				raizExacta = true;
				resp = i;
				break;
			}
		}
		if (raizExacta == true) {
			cout << "C = " << resp << endl;
		}
		else {
			cout << "La suma de los catetos no son una raiz cuadrada exacta.\n";
		}
	}
	else {
		cout << "Error";
	}

	return 0;
}