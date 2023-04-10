
#include <iostream>
using namespace std;

int suma=0;



int main(){
/*

Escribe un programa que defina un vector de números y calcule la suma de sus
elementos.

*/
    float V[]{0,1,2,3,4,5,6,7,8,9};


        for(int i=0;i<10;++i)
        {
        suma = suma + V[i];
        }

        cout<<"el valor de la suma es "<<suma<<endl;



    return 0;
}
