
#include <iostream>
#include <string>

using namespace std;

int main(){
/**
Desarrolla un programa en C++ que trabaje con un vector de personas. Cada persona se
almacena en una estructura con los siguiente campos: nombre, peso en kilos y altura en
metros. El programa debe comenzar leyendo de la entrada estándar los datos de varias
personas. A continuación debe hacer lo siguiente:
○ Mostrar en la salida estándar un listado con los datos de las personas
introducidas. El listado debe incluir el índice de masa corporal de cada
persona, éste se calcula como:
𝐼𝑀𝐶 =𝑝𝑒𝑠𝑜 *𝑎𝑙𝑡𝑢𝑟𝑎/2
○ Mostrar en la salida estándar el nombre de la persona con mayor IMC.
○ Un listado con los nombres de las personas cuya altura supera una
introducida por el usuario.
○ Indicar si la persona con menor IMC es también la más baja.


*/

int t=4,j=0,l=0;

cout<<"introduzca el numero de personas a almacenar"<<endl;
cin>>t;
struct tpersona{
string nombre;
bool alergia = false;
};
string alergia[t]{};
string sinalergia[t]{};
tpersona v[t] = {};

for(int i=0;i<t;++i)
    {
    cout<<"introduzca el nombre"<<endl;
    getline(cin>>ws,v[i].nombre);
    cout<<"introduzca la alergia 0= no ; 1= si"<<endl;
    cin>>v[i].alergia;
    }




for(int i=0;i<t;++i)
    {
    if(v[i].alergia == true )
        {
            alergia[j] = v[i].nombre;
            ++j;

        }
        else{
            sinalergia[l] = v[i].nombre;
            ++l;
            }

    }
for(int i=0;i<l;++i)
    {
    cout<<"estos son los que no tienen alergia    "<<sinalergia[i]<<endl;


    }
for(int i=0;i<j;++i)
    {
    cout<<"estos son los que no tienen alergia     "<<alergia[i]<<endl;


    }





}
