#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    for (int i = 10; i>=0; i-=2) {                                      //zad 1
        cout << i << endl;
    }
    

int fahr, celsius;
int start, limit, krok;

start = 0;
limit = 200;                                                            //zad 2
krok = 20;

fahr = start;
while (fahr <= limit) {
    celsius = 5*(fahr - 32) / 9;
    cout << fahr << "\t" << celsius << endl;
    fahr = fahr + krok;
}

}
