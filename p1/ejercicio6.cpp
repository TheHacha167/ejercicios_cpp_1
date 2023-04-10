
#include <iostream>
using namespace std;
int num1=1;
int main(){
  /*
Escriba un programa que lea valores enteros hasta que se introduzca un valor en el
rango [20,30] o se introduzca el valor 0.

  */

 cout<<"este programa lee valores enteros hasta que se introduzce un valor en el rango [20,30] o se introduzce el valor 0"<<endl;

       do{
       cout<<"introduzca un numero "<<endl;
            cin>>num1;

        }while(num1!=0 &&((num1<20 || num1>30)));


    return 0;
}


