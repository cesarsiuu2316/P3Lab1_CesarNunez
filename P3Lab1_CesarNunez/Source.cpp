#include <iostream>

using namespace std;

int main() {
	int a, b, c, a2, b2, c2;	
	char despejar = 'C';
	cout << "---- Teorema de Pitagoras -----" << endl;
	cout << "Seleccione incognita: ";
	int incognita;
	cin >> incognita;
	
	if (incognita == 1) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'A';
		cout << "Despejar para A:\nA^2 = C^2 - B^2\n";
		cout << "Ingresar valor para C: ";
		cin >> c;
		c2 = c * c;
		cout << "Ingresar valor para B: ";
		cin >> b;
		b2 = b * b;
		cout << "Ecuacion: A^2 = " << c << "^2 - " << b << "^2\n";
		cout << "A^2 = " << c2 << " - " << b2 << endl;
		cout << "A^2 = " << c2 - b2 << endl;
	}
	else if (incognita == 2) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'B';
		cout << "Despejar para B:\nB^2 = C^2 - A^2\n";
		cout << "Ingresar valor para C: ";
		cin >> c;
		c2 = c * c;
		cout << "Ingresar valor para A: ";
		cin >> a;
		a2 = a * a;
		cout << "Ecuacion: B^2 = " << c << "^2 - " << a << "^2\n";
		cout << "B^2 = " << c2 << " - " << a2 << endl;
		cout << "B^2 = " << c2 - a2 << endl;
	}
	else if (incognita == 3) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'C';		
		cout << "Ya esta despejada.\nC^2 = A^2 + B^2" << endl;
		cout << "Ingresar valor para A: ";
		cin >> a;
		a2 = a * a;
		cout << "Ingresar valor para B: ";
		cin >> b;
		b2 = b * b;
		cout << "Ecuacion: C^2 = " << a << "^2 + " << b << "^2\n";
		cout << "C^2 = " << a2 << " + " << b2 << endl;
		cout << "C^2 = " << a2 + b2 << endl;
	}
	else {
		cout << "Error";
	}

	return 0;
}