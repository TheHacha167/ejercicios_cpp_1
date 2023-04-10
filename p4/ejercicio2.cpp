
#include <iostream>
#include <string>

using namespace std;

int main(){
/**
Defina una estructura que sirva para representar a una persona. La estructura debe
contener dos campos: el nombre de la persona y un valor de tipo lógico que indica si la
persona tiene algún tipo de alergia. Realiza un programa que dado un vector de
personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ningún tipo de alergia y otro que contenga las personas que con alergia.

*/
int t=4,j=0,l=0;
struct tpersona{
string nombre;
bool alergia = false;
};
string alergia[t]{};
string sinalergia[t]{};
tpersona v[] = {{"jesus", true},{"luis", true},{"paco", false},{"pepe", true}};

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
