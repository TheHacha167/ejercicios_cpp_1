#include <iostream>
using namespace std;


int main(){
/**
Realizar un programa que lea los datos de un array de 3x3 desde la entrada estándar y
calcule su deter    minante.

*/
const int TMAX = 3;
int j=0,det=0;
///float V[TMAX][TMAX]={{1,2,3},{4,5,6},{7,8,9}};
float V[TMAX][TMAX];
for(int i=0;i<TMAX;++i)
{
    for(int j=0;j<TMAX;j++)
        {
        cout<< "introduzca el digito "<<i<<j<< endl;
        cin>>V[i][j];

        }

}

    det = (V[0][0]*V[1][1]*V[2][2])+(V[0][1]*V[1][2]*V[2][0])+(V[1][0]*V[2][1]*V[0][2])-(V[0][2]*V[1][1]*V[2][0])-(V[0][1]*V[1][0]*V[2][2])-(V[1][2]*V[2][1]*V[0][0]);

         cout<< "el determinante es: "<<det<< endl;
}
