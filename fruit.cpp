#include "furit.h"
void fruit::show_all(string a) {
	cout << a << " : " << price << "�� " << many << "�� " << endl;
}
float fruit::show() {
	return price * many;
}