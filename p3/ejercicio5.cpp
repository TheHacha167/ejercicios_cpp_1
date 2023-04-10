
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Realice un programa como el del ejercicio anterior pero en el que se permitan espacios
en blanco. Este programa debe reconocer como palíndromos las frases: “dabale arroz a
la zorra el abad'' y “la ruta nos aporto otro paso natural'.
*/


string frase;
int tam=0,i=0,j=0;
bool espal =  true;
cout<<"introduzca una frasede caracteres"<<endl;
getline(cin>>ws,frase);
tam = frase.length() ;
j = tam-1;
   for(int i=0;i<tam;++i){
    if(frase[i]==' '){
        i++;
        }
    if(frase[j]==' '){
        j--;
        }

    if(frase[i]!=frase[j]){
        espal=false;

        }
   --j;

   }
if(espal==true){
    cout<<"es es un palindromo"<<endl;
}else{cout<<"no es un palindromo"<<endl;}






}

