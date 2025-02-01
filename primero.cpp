// Este codigo ha sido generado por el modulo psexport 20230904-mac de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float acumulado;
	int ano;
	float coste;
	float depreciacion;
	float valor_actual;
	float valor_anual;
	float valor_recuperacion;
	int vida_util;
	cout << "introduzca coste" << endl;
	cin >> coste;
	cout << "introduzca depreciacion" << endl;
	cin >> valor_recuperacion;
	cout << "introduzca vida util" << endl;
	cin >> vida_util;
	cout << "Introduzca año actual" << endl;
	cin >> ano;
	valor_actual = coste;
	depreciacion = (coste-valor_recuperacion)/vida_util;
	acumulado = 0;
	cout << "Año Depreciación Dep. Acumulada Valor Anual" << endl;
	while (ano<=vida_util) {
		acumulado = acumulado+depreciacion;
		valor_actual = valor_actual-depreciacion;
		cout << ano << " " << depreciacion << " " << acumulado << " " << valor_actual << endl;
		ano = ano+1;
	}
	return 0;
}

