
#include <iostream>
using namespace std;





int main(){
/**

Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

*/

///matriz1
int TMAX = 3, suma=0;
int j=0,det=0;
float V[TMAX][TMAX]={{1,2,3},{4,5,6},{7,8,9}};

///matriz2

float V1[TMAX][TMAX]={{10,11,12},{13,14,15},{16,17,18}};

///enseñamos las matrices
///matriz1

cout<< "la matriz 1 es  "<<endl;

for(int i=0;i<TMAX;++i)
{
    for(int j=0;j<TMAX;j++)
        {
        cout<<"  "<<V[i][j]<<"    ";


        }
    cout<<"  "<<endl;
    }
///matriz2

cout<< "la matriz 2 es  "<<endl;

for(int i=0;i<TMAX;++i)
{
    for(int j=0;j<TMAX;j++)
        {
        cout<<"  "<<V1[i][j]<<"    ";


        }
    cout<<"  "<<endl;
    }
    cout<<"     "<<endl;
    cout<<"la suma de las matrices es: "<<endl;
///hacemos la suma

for(int i=0;i<TMAX;++i)
{
    for(int j=0;j<TMAX;j++)
        {
        cout<<"   "<<V1[i][j]+V[i][j]<<"  ";


        }
    cout<<"  "<<endl;
    }





    return 0;
}
