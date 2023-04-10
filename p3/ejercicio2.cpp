
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Realiza un programa que lea líneas de la entrada estándar hasta que se lea una línea
cuyo contenido sea la cadena FIN. El programa debe mostrar en la salida estándar la
línea más larga de las leídas y también la menor desde un punto de vista lexicográfico.

*/
string frase,mayor,menor;


cout<<"introduzca una frase de caracteres"<<endl;
getline(cin>>ws,frase);
menor = mayor = frase;
while(frase!="FIN")

    {
        cout<<"introduzca una frase de caracteres"<<endl;
        getline(cin>>ws,frase);
        if(frase.length() >= mayor.length())
            {

                mayor = frase;

            }
        if(menor.length() >= frase.length())
            {

                menor = frase;

            }








    }


 cout<<"la frase mas larga es "<<mayor<<endl;
    cout<<"la frase mas corta es "<<menor<<endl;


}

