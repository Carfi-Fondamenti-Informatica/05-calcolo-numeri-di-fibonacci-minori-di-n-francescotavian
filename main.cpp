#include <iostream>
using namespace std;

int main() {
     int numero;
    int primoNumero=1;
    int secondoNumero=1;
    cout<<"inserire il numero di cifre della serie di fibonacci da calcolare";
    cin>>numero;
    cout<< primoNumero<<endl<<secondoNumero <<endl ;
        int i = 3;
        while (i++ <= numero && primoNumero+secondoNumero<=numero) {
            cout << primoNumero + secondoNumero <<endl;
            if (primoNumero < secondoNumero)
                primoNumero += secondoNumero;

            else
                secondoNumero += primoNumero;
        }

    
   return 0;
}
