#pragma once
#include <iostream>
using namespace std;
class fruit {
public:
	fruit(): price(200),many(2){}
	fruit(float p, int n) {
		price = p; many = n; 
	}
	int many; float price;
	void show_all(string a);
	float show();
};