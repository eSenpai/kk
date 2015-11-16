//Dominykas Litvaitis INF 5

#include <iostream>  //Kad galetume naudoti pagrindines c++ kalbos dalis
#include <cmath>     //Kad galetume naudoti pow

using namespace std; //Naudojame, kad nereiketu rasyti std:: prie spausdinimo komandos

int main(){
	double y;        //Musu ieskoma reiksme
	double t;        
	double x = -1;   //Kintamasis, kuris kinta h zingsniu
	int h = 1;
	int komanda = 1; //Kintamasis, su kuriuo bus isjungiama programa
	cout << "Iveskite x: ";
	cin >> x;
	cout << "Iveskite h: ";
	cin >> h;
	cout << "|--------------------------------------------|" << endl;
	do{
		t = (sqrt(pow(sin(x), 2))) / (x - 2);   //Surandame t reiksme
		if (t < 0){
			cout << "|t = neigiamas | y = sprendinio nera | x = " << x << " |" << endl;
		} else {
			y = sqrt(2 * t + x);                    //Naudojant gauta t reiksme, surandame y
			cout << "|t = " << t << "        | y = " << y << "               | x = " << x << " |" << endl;            //Isspausdiname y
		}
		x += h;                                 //Prie x pridedame h (h = 1)
	} while (x <= 1);                           //Darome cikla iki kada x bus lygus 2
	cout << "|--------------------------------------------|" << endl;
	while (komanda != 0){       //Naudojame cikla, kad programa uzsidarytu, kai irasomas 0
		cin >> komanda;
	}
}
