#include "furit.h"
void fruit::show_all(string a) {
	cout << a << " : " << price << "¿ø " << many << "°³ " << endl;
}
float fruit::show() {
	return price * many;
}