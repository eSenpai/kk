//Dominykas Litvaitis INF 5
//Yra keistenybe, kadangi is gautu neigiamu skaiciu yra traukiama saknis, kai x = -1 ir x = 1

#include <iostream>  //Kad galetume naudoti pagrindines c++ kalbos dalis
#include <cmath>     //Kad galetume naudoti pow

using namespace std; //Naudojame, kad nereiketu rasyti std:: prie spausdinimo komandos

int main(){
	double y;        //Musu ieskoma reiksme
	double t;        
	double x = -1;   //Kintamasis, kuris kinta h zingsniu
	int h = 1;       

	do{
		t = (sqrt(pow(sin(x), 2))) / (x - 2);   //Surandame t reiksme
		y = sqrt(2 * t + x);                    //Naudojant gauta t reiksme, surandame y
		cout << "y = " << y << endl;            //Isspausdiname y
		x += h;                                 //Prie x pridedame h (h = 1)
	} while (x <= 1);                           //Darome cikla iki kada x bus lygus 2
	
	while (1);       //Naudojame cikla, kad programa iskarto neuzsidarytu
}
