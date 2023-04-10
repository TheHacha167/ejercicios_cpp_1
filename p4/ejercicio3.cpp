
#include <iostream>
#include <string>

using namespace std;

int main(){
/**
Modifica el programa sobre personas con posible alergia para que los datos se lean de la
entrada estándar.

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
