
#include <iostream>
using namespace std;
int i=0,num1=1;
int main(){
  /*
Realice un programa que lea de la entrada estándar números hasta que se introduzca un
cero (es decir, es una lectura con centinela donde el centinela es el valor 0). En ese
momento el programa debe terminar y mostrar en la salida estándar la cantidad de valores
mayores que cero leídos.
  */

 cout<<"este programa dira cuantos digitos diferentes de 0 ha introducido, en ese momento el programa finalizara"<<endl;

       do{
       cout<<"introduzca un numero "<<endl;
            cin>>num1;
            i++;
        }while(num1!=0);

    cout<<"ha introducido "<<i<<" numeros distintos de 0"<<endl;

    return 0;
}

