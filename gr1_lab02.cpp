#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    for (int i = 10; i>=0; i-=2) {                                      //zad 1
        cout << i << endl << endl << endl;
    }
    

int fahr, celsius;
int start, limit, krok;

start = 0;
limit = 200;                                                //zad 2
krok = 20;

fahr = start;
while (fahr <= limit) {
    celsius = 5*(fahr - 32) / 9;
    cout << fahr << "\t" << celsius << endl << endl << endl;
    fahr = fahr + krok;
}


   int fahr2, celsius2; //zmienne typu int 
   int start2, limit2, krok2; //zmienne typu int 
   start2 = 0; //przypisz 0 do start 
   limit2 = 200; //przypisz 200 do limit 
   krok2 = 20; //przypisz 20 do krok 
   for (fahr2 = 0.0; fahr2 <= limit2; fahr2 = fahr2 + krok2)  //kod 02_14 
   {
      float celsius2 = (5.0 / 9.0) * (fahr2 - 32.0);
      cout << fahr2 << "\t" << celsius2 << endl <<endl <<endl;
      //printf("%3.0f \t %6.1f \n", fahr, celsius);
   }

}
