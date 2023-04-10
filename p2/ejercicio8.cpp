#include <iostream>
using namespace std;





int main(){
/**
Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la
diagonal principal de la matriz.
*/
const int TMAX = 3;
int j=0;
float V[TMAX][TMAX]={{1,2,3},{4,5,6},{7,8,9}};
for(int i=0;i<TMAX;++i)
{

     cout<< "la diagonal es: "<<V[i][j]<< endl;
++j;





}






    return 0;
}
