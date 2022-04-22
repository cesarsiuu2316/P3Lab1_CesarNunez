#include <iostream>

using namespace std;

int main() {
	char despejar = 'C';
	cout << "---- Teorema de Pitagoras -----" << endl;
	cout << "Seleccione incognita: ";
	int incognita;
	cin >> incognita;
	
	if (incognita == 1) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'A';
		cout << "Despejar para A:\nA^2 = C^2 - B^2\n";
	}
	else if (incognita == 2) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'B';
		cout << "Despejar para B:\nB^2 = C^2 - A^2\n";
	}
	else if (incognita == 3) {
		cout << "Ecuacion inicial:\nC^2 = A^2 + B^2" << endl;
		despejar = 'C';		
		cout << "Ya esta despejada.\nC^2 = A^2 + B^2" << endl;		
	}
	else {
		cout << "Error";
	}

	return 0;
}