#include <iostream>
using namespace std;

int main()
{/* 
	cout << "         JJJJJJJJ\n"
	<<"                J\n"
	<<"                J\n"
	<<"                J\n"
	<<"                J\n"
	<<"                J\n"
	<<"                J\n"
	<<"          J     J\n"
	<<"           JJJJJJ\n\n\n";
	                                                    					//zadanie 1 
	cout << " CCCCCCCCCCC       hhhhh\n";
	cout << "C                  hhhhh\n";
	cout << "C                  hhhhh\n";
	cout << "C                  hhhhhhhhhhhhhhh\n";
	cout << "C                  hhhhhhhhhhhhhhh\n";
	cout << "C                  hhhhh    hhhhhh\n";
	cout << "C.                 hhhhh    hhhhhh\n";
	cout << " CCCCCCCCCCC       hhhhh    hhhhhh\n\n\n\n";
	
	
	cout << "* * *\n";
	cout << " *** \n";                                     					//zadanie 2
	cout << "  *\n";
	cout << " * *\n"; 
	cout << "*   *\n\n\n\n";

	cout <<"\t   Lista obecności" << endl;
	cout <<" |----------------------------------|" << endl;
	cout <<" |nr |   Imię     |     Nazwisko    |" << endl;
	cout <<" |----------------------------------|" << endl;
	cout <<" |1  |  Boksdel   |      Baron      |" << endl;
	cout <<" |----------------------------------|" << endl;													//zadanie 3    
	cout <<" |2  |  Michał    |      Rychlik    |" << endl;
	cout <<" |----------------------------------|" << endl;
	cout <<" |3  |   Kacper   |      Kezel	    |" << endl;		
	cout <<" |----------------------------------|\n\n\n" << endl;													      



	int a, b, c1, c2;
	cout << "Podaj dwie liczby całkowite: " << endl;
	cin >> a >> b;
	c1 = a * b;																//zadanie 4
	c2 = a + b;
	cout << "\n Wyniki obliczeń: \n";
	cout << "mnozenie: " << c1 << endl;
	cout << "suma: " << c2 << endl;
	cout << "\n\n\n";

	double f;
	cout << "Podaj temperaturę w stopniach Fahrenheita: " << endl;
	cin >> f;
	double c;                                                               //zadanie 5
	c = 5.0 * (f - 32.0) / 9.0;
	cout << f << " stopni Fahrenheita to " << c << " stopni Celsjusza";
	cout << "\n\n\n";

	string imie, nazwisko;
	int wiek;
	cout << "Podaj swoje imię, nazwisko i wiek: " << endl;
	cin >> imie >> nazwisko >> wiek;																		//zadanie 6
	cout<< "Mam na imię " << imie << " " << nazwisko << " i mam " << wiek << " lat. " << endl;

	int x, y, z1, z2, z3, z4;
	cout << "Podaj dwie liczby całkowite: " << endl;
	cin >> x >> y;
	z1 = x + y;																								//zadanie 7
	z2 = x * y;
	z3 = x / y;
	z4 = x%y; 
	cout << "Wynik dodawania: " << z1 << "\n Wynik mnozenia: " << z2 << "\n Wynik dzielenia: " << z3 << "\n Reszta z dzielenia x przez y wynosi: " << z4 << endl;

	double o, p, l1, l2, l3;
	cout << "Podaj dwie liczby: " << endl;
	cin >> o >> p;
	l1 = o + p;																							//zadanie 8
	l2 = o * p;
	l3 = o / p;
	cout << "Wynik dodawania: " << l1 << "\n Wynik mnozenia: " << l2 << "\n Wynik dzielenia: " << l3 << endl; */

	double r, L, P;
	double π = 3.1415926535;
	cout << "Podaj promień koła: " << endl;
	cin >> r;                                                               							//zadanie 9
	L = 2 * π * r;
	P = π * r * r;
	cout << "Obwod wynosi: " << L << "\n Pole wynosi: " << P << endl; 

	double j, m, OBWUD, POLE;
	cout << "Podaj boki prostokąta: " <<endl;
	cin >> j >> m;
	OBWUD = (2 * j) + (2 * m);																			//zadanie 10
	POLE = j * m;
	cout << "Obwod prostoka5ta wynosi: " << OBWUD << "\n Pole prostokata wynosi: " << POLE << endl; 

	



}
