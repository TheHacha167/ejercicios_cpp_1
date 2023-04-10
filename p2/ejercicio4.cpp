
#include <iostream>
using namespace std;
int suma =0;




int main(){
/**
Escribe un programa que defina un vector de números y calcule la suma acumulada de
sus elementos.
Por ejemplo, si el vector contiene los números {1,3,2,7} su suma acumulada es {1, 1+3,
1+3+2, 1+3+2+7}, es decir, {1,4,6,13}.

*/

float V[]{1,3,2,7};

        for(int i=0;i<4;++i)
        {
            suma = suma+ V[i];
            cout<<"la suma acumulada es: "<< suma<<endl;

        }








    return 0;
}
