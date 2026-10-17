#include <iostream>
#include <iomanip>
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
	cout<< "Mam na imię " << imie << " " << nazwisko << " i mam " << wiek << " lat. \n\n\n" << endl;

	int x, y, z1, z2, z3, z4;
	cout << "Podaj dwie liczby całkowite: " << endl;
	cin >> x >> y;
	z1 = x + y;																								//zadanie 7
	z2 = x * y;
	z3 = x / y;
	z4 = x%y; 
	cout << "Wynik dodawania: " << z1 << "\n Wynik mnozenia: " << z2 << "\n Wynik dzielenia: " << z3 << "\n Reszta z dzielenia x przez y wynosi: " << z4 << endl <<endl << endl;

	double o, p, l1, l2, l3;
	cout << "Podaj dwie liczby: " << endl;
	cin >> o >> p;
	l1 = o + p;																							//zadanie 8
	l2 = o * p;
	l3 = o / p;
	cout << "Wynik dodawania: " << l1 << "\n Wynik mnozenia: " << l2 << "\n Wynik dzielenia: " << l3 << endl << endl << endl << endl; 

	double r, L, P;
	double π = 3.1415926535;
	cout << "Podaj promień koła: " << endl;
	cin >> r;                                                               							//zadanie 9
	L = 2 * π * r;
	P = π * r * r;
	cout << "Obwod wynosi: " << L << "\n Pole wynosi: " << P << endl << endl << endl << endl; 

	double j, m, OBWUD, POLE;
	cout << "Podaj boki prostokąta: " <<endl;
	cin >> j >> m;
	OBWUD = (2 * j) + (2 * m);																			//zadanie 10
	POLE = j * m;
	cout << "Obwod prostokata wynosi: " << OBWUD << "\n Pole prostokata wynosi: " << POLE << endl << endl << endl <<endl; 

	double celsius, fahrenheit;
	cout << "Wprowadź temperaturę (w stopniach Celsiusza)";
	cin >> celsius;																						//zadanie 11
	fahrenheit = (9 * celsius / 5) + 32;
	cout << fixed << setprecision(2);
	cout << "TWOJA TEMPERATURA W STOPNIACH FAHRENHEITA WYNOSI: " << fahrenheit << endl << endl << endl << endl;

	int sekundy, minutosekundy, reszta;
	cout << "Wprowadz liczbe sekund";
	cin >> sekundy;																						//Zadanie 12
	minutosekundy = sekundy/60;
	reszta = sekundy % 60;
	cout << "W przeliczeniu twoja liczba sekund odpowiada: " << minutosekundy << "min i " << reszta <<" sec" << endl << endl << endl;
	

	int minuty, godziny, reszta2;
	cout << "Wprowadz liczbe minut";
	cin >> minuty;																												//Zadanie 13
	godziny = minuty / 60;
	reszta2 = minuty % 60;
	cout << "W przeliczeniu twoja liczba minut odpowiada: " << godziny << " h i " << reszta2 << " min" << endl <<endl << endl;
	

	
	double licz1, licz2, licz3, średnia;
	cout << "Podaj trzy wybrane liczby ";
	cout << fixed << setprecision (4);
	cin >> licz1 >> licz2 >> licz3;																//zadanie 14
	średnia = (licz1 + licz2 + licz3) / 3;
	cout << "Średnia arytmetyczna twoich liczb wynosi: " << średnia << endl << endl << endl;
	
	
	
	
	
	double liczba1, liczba2, liczba3;
	cout << fixed << setprecision(2);
	cout << "Wpisz cenę i liczbę sztuk produktu:";
	cin >> liczba1 >> liczba2;																					//zadanie 15
	liczba3 = liczba1 * liczba2;
	cout << "Twoja całkowita wartość zakupu wynosi: " << liczba3 << " zł" << endl << endl << endl <<endl;
	
	double lic1, lic2, lic3, lic4;
	cout << "Podaj trzy liczby całkowite";																		//zadanie 16
	cin  >> lic1 >> lic2 >> lic3;
	lic4 = (lic1+lic2) / lic3;
	cout << "Wynik twojego dzialania wynosi: " << lic4 << endl << endl << endl << endl;	
	
	char znak;
	int calkowita;
	cout << "Podaj znak oraz liczbe (PS A,B,C)";
	cin >> znak >> calkowita;
	if (znak == 'A'){
		cout << "TWOIM ZNAKIEM JEST A" << endl;
	}
	else if (znak == 'B'){
		cout << "TWOIM ZNAKIEM JEST B" << endl;												//zadanie 17
	}
	else if (znak == 'C'){
		cout << "TWOIM ZNAKEIM JEST C" << endl;
	}
	cout << "Twoje wartości to: " << znak << calkowita << endl << endl << endl << endl;
	
	string imi, nazwisk;
	cout << "Podaj swoje imię, a nastepnię nazwisko ";
	cin >> imi >> nazwisk;
	cout << "+-----------------------+\n"
     << "| IMIE:     " << left << setw(12) << imi << "|\n"								//zadanie 18
     << "| NAZWISKO: " << left << setw(12) << nazwisk << "|\n"
     << "+-----------------------+\n\n\n\n";

	int numerek[3];
	double cccena[3];
	string nazywa[3];
	
	for (int i = 0; i<3; i++){
		cout << "Podaj numer swojego produktu, nazwę, a następnie cenę ";
		cin >> numerek[i] >> nazywa[i] >> cccena[i];}
		cout << "+" << string(38, '-') << "+\n"
		   	 <<"|" << left << setw(10) << "NR"											//zadanie 19
			 << left << setw(18) << "NAZWA"
			 << left << setw(10) << "CENA" << "|\n";
	for (int i= 0; i<3; i ++){
		cout <<"|" << left << setw(10) << numerek[i]
			 << left << setw(18) << nazywa[i]
			 << left << setw(10) << cccena[i] << "|\n";}
		cout<< "+" << string(38, '-') << "+\n\n\n\n";
		 
	double bardzotrudnaliczba1, bardzotrudnaliczba2;
	cout << "Podaj dwie liczby: \n";
	cin >> bardzotrudnaliczba1 >> bardzotrudnaliczba2;
	cout << "Twoje liczby zostaną wyświetlone na 3 sposoby\n";
	cout << "STANDARDOWY SPOSÓB!!!\n" << bardzotrudnaliczba1 <<endl << bardzotrudnaliczba2 << endl;
	
	cout << fixed << setprecision(2);
	cout << "DWA MIEJSCA PO PRZECINKU!!!\n" << bardzotrudnaliczba1 <<endl << bardzotrudnaliczba2 << endl;				//zadanie 20
	
	cout << scientific << setprecision(15);
	cout << "NOTACJA WYKŁADNICZA!!!\n" << bardzotrudnaliczba1 <<endl << bardzotrudnaliczba2 << endl; 




	}











