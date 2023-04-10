
#include <iostream>
#include <string>

using namespace std;


int main(){
/**
Escribe un programa que solicite de la entrada estándar un nombre y compruebe si el
nombre se encuentra o no en un vector iniciado con una serie de nombres.


*/
string V[]={"ana","luis","paco","jesus"},frase;
int tam=0;

cout<<"introduzca un nombre"<<endl;
getline(cin>>ws,frase);
bool esta;
for(int i=0;i<=4;++i)
    {

        if(V[i] == frase)
            {
                esta = true;
            }



    }

 if(esta == true)
            {
                cout<<"esta dentro  "<<endl;
            }
else{cout<<"no esta dentro"<<endl;}
}

