
#include <iostream>
using namespace std;
int base=0,exponente=0,resultado=1;
int main(){
  /*
    Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sinutilizar la función pow.

  */

 cout<<"este programa calcula x^y"<<endl;
        cout<<"introduzca la base "<<endl;
            cin>>base;
        cout<<"introduzca el exponente "<<endl;
            cin>>exponente;

       for(int i=1;i <= exponente;++i){
            resultado = resultado * base;
        }
    cout<<"el resultado es "<<resultado<<endl;

    return 0;
}

