
#include <iostream>
using namespace std;





int main(){
/**

Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

*/

///entrada matriz 3x3
int TMAX = 3;
int j=0,det=0;
float V[TMAX][TMAX];///={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<TMAX;++i)
{
    for(int j=0;j<TMAX;j++)
        {
        cout<< "introduzca el digito "<<i<<j<< endl;
        cin>>V[i][j];

        }

}

///salida matriz 3x3
cout<< "la matriz transpuesta es  "<<endl;

for(int i=0;i<TMAX;++i)
{
    for(int j=0;j<TMAX;j++)
        {
        cout<<"  "<<V[j][i]<<"    ";


        }
    cout<<"  "<<endl;
    }




    return 0;
}
