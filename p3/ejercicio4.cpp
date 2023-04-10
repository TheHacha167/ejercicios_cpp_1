
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Realiza un programa que lea una cadena de caracteres e indique si es un palíndromo.
Un palíndromo es una frase o palabra que se lee igual de delante hacia atrás que de
atrás hacia delante, por ejemplo: reconocer o anilina. Para simplificar suponga que la
cadena leída no contiene ni mayúsculas, ni signos de puntuación, ni espacios en blanco
ni tildes.

*/
string frase;
int tam=0,i=0,j=0;
bool espal =  true;
cout<<"introduzca una frasede caracteres"<<endl;
getline(cin>>ws,frase);
tam = frase.length() ;
j = tam-1;
   for(int i=0;i<tam;++i){
    if(frase[i]!=frase[j]){
        espal=false;


        }
   --j;

   }
if(espal==true){
    cout<<"es es un palindromo"<<endl;
}else{cout<<"no es un palindromo"<<endl;}


}

