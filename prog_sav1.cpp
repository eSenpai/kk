#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>

//reikia is schema, komentarai su pagrindimu kintamuju tipais
//rekes worde, tikla, uzdaviniai, paziureti moodle gal.

using namespace std;

void main(){
	double y;
	double t;
	double x = -1;
	int h = 1;
	do{
		t = (sqrt(pow(sin(x), 2))) / (x - 2);
		y = sqrt(2 * t + x);
		cout << "y = " << y << endl;
		x += h;
	} while (x <= 1);
	while (1);
}
