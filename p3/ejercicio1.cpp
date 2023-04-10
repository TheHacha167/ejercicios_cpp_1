
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Realiza un programa que lea una fraseena de caracteres de la entrada estándar y muestre
en la salida estándar cuántas ocurrencias de frasea vocal existen en la fraseena.

*/
string frase;
int fin=1,tam=0,a=0,e=0,I=0,o=0,u=0;

cout<<"introduzca una fraseena de caracteres"<<endl;
getline(cin>>ws,frase);
tam = frase.length();
for(int i=0;i<=tam;++i)
    {

        if(frase[i]=='a'||frase[i]=='A')
            {
                ++a;
            }

        if(frase[i]=='e'||frase[i]=='E')
            {
                ++e;
            }

        if(frase[i]=='i'||frase[i]=='I')
            {
                ++I;
            }
        if(frase[i]=='o'||frase[i]=='O')
            {
                ++o;
            }

        if(frase[i]=='u'||frase[i]=='U')
            {
                ++u;
           }


    }


 cout<<"Ha introducido  "<<a<<" veces la vocal a"<<endl;
     cout<<"Ha introducido  "<<e<<" veces la vocal e"<<endl;
     cout<<"Ha introducido  "<<I<<" veces la vocal i"<<endl;
     cout<<"Ha introducido  "<<o<<" veces la vocal o"<<endl;
     cout<<"Ha introducido  "<<u<<" veces la vocal u"<<endl;



}

