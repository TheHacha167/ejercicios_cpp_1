

#include <iostream>
using namespace std;

int num1=0;



int main(){
/**

 Desarrolle un programa que inicie un vector de enteros con valores leídos de la entrada
estándar y, acontinuación, calcule el mayor elemento del vector.

*/


 cout<<"este programa dice si su numero esta en el vector"<<endl;
   cout<<"indique el numero a consultar"<<endl;
    cin>>num1;
    float V[]{0,1,2,3,4,5,6,7,8,9 };

    for(int i=0;i<10;++i)
        {
            if(V[i]==num1)
                {
                cout<<"el numero que ha introducido esta en la posicion "<<i<<" del vector"<<endl;

                }
        }





    return 0;
}
