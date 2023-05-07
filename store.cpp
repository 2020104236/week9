#include "store.h"
float store::total() {
	float k = apple.show();
	k += pear.show();
	k += peach.show();
	k += mango.show();
	return k;
}