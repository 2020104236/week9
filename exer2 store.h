#pragma once
#include "furit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, int d, float x, float y, float z, float w) {
		apple = fruit(x, a);
		pear = fruit(y, b);
		peach = fruit(z, c);
		mango = fruit(w, d);
	}
	fruit apple, pear, peach, mango;
	float total();
};
