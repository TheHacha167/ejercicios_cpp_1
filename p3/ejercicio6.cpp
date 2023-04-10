
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Realice un programa que lea una cadena de caracteres e indique cuántas palabras tiene.
Una palabra puede venir separada de otra por uno o más caracteres de espacio en
blanco.

*/

string frase;
int tam=0,i=0,j=0;
bool espal =  true;
cout<<"introduzca una frasede caracteres"<<endl;
getline(cin>>ws,frase);
tam = frase.length() ;

   for(int i=0;i<tam;++i){
    if(frase[i]==' '){
        i++;
         if(frase[i]==' '){
        frase[i]='a';
        }else{j++;}

        }






   }

    cout<<"hay "<<j+1<<"   palabras"<<endl;



}

