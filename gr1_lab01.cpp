#include <iostream>
using namespace std;

int main()
{
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
	cin >> a >> b;
	c1 = a * b;																//zadanie 4
	c2 = a + b;
	cout << "\n Wyniki obliczeń: \n";
	cout << "mnozenie: " << c1 << endl;
	cout << "suma: " << c2 << endl;
	cout << "\n\n\n";

	double f;
	cin >> f;
	double c;                                                               //zadanie 5
	c = 5.0 * (f - 32.0) / 9.0;
	cout << f << " stopni Fahrenheita to " << c << " stopni Celsjusza";


}
