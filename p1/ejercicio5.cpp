
#include <iostream>
using namespace std;
int t1=0, media=0, tmax=-1000,tmin=1000;
int main(){
  /*
 Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante
un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media
del día, la temperatura más alta y la más baja.
  */

 cout<<"este programa calcula la temperatura media del día, la temperatura más alta y la más baja"<<endl;

       for(int i=1;i<=6;++i){
            cout<<"introduzca la medicion "<<i<<endl;
            cin>>t1;
            media = media + t1;
            if(t1>=tmax){
                tmax = t1;
                }

            if(t1<=tmin){
                tmin = t1;
            }

       }



    cout<<"la temperatura media ha sido de  "<<media/6<<" grados"<<endl;
    cout<<"la temperatura minima ha sido de  "<<tmin<<" grados"<<endl;
    cout<<"la temperatura maxima ha sido de  "<<tmax<<" grados"<<endl;



    return 0;
}


