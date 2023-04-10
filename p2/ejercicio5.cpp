

#include <iostream>
using namespace std;

int tmax=13,valormax=0;



int main(){
/**

 Desarrolle un programa que inicie un vector de enteros con valores leídos de la entrada
estándar y, acontinuación, calcule el mayor elemento del vector.

*/


 cout<<"este programa almacena numeros en un vector y hace la salida con su posicion"<<endl;
   cout<<"indique el maximo de numeros a introducir"<<endl;
    cin>>tmax;
    float V[tmax];
    for(int i=0;i<tmax;++i)
        {
        cout<<"introduzca un numero para guardarlo en la posicion"<<i<<endl;
        cin>>V[i];
        }
    for(int i=0;i<tmax;++i)
        {
            if(V[i]>valormax)
                {
                valormax = V[i];

                }
        }

    cout<<"el numero mas grande del vector es: "<<valormax<<endl;



    return 0;
}
