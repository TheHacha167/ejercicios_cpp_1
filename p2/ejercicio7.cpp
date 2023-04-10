

#include <iostream>
using namespace std;

int num1=0,suma=0;



int main(){
/**

Escribe un programa que defina un vector de números y calcule si existe algún número en
el vector cuyo valor equivale a la suma del resto de números del vector.

*/


 cout<<"este programa dice si existe algun numero que sea el resultado de sumar el resto del vector"<<endl;


    float V[]{0,1,2,3,4,5,6,7,8,9,45 };
    for(int i=0;i<11;++i)
        {
            suma= suma+ V[i];
        }
    for(int i=0;i<11;++i)
        {

            if(V[i]== suma-V[i])
                {
                cout<<"el numero de la posicion "<<i<<"  corresponde a la suma del resto"<<endl;

                }
        }





    return 0;
}
