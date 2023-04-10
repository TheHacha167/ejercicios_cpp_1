
#include <iostream>
#include <string>

using namespace std;

int main(){
/**
Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La
estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que
dado un vector con los tiempos que un ciclista ha empleado en cada etapa calcule el
tiempo total empleado en correr todas las etapas.

*/

struct tetapa{
int horas, minutos, segundos;
};
tetapa v[] = {{1,45,34},{2,28,13},{1,2,8}};
int t=3;
tetapa total = {0,0,0};
for(int i=0;i<t;++i){
    total.horas += v[i].horas; ///total.horas = total.horas + v[i].horas;
    total.minutos += v[i].minutos;
    total.segundos += v[i].segundos;
    }

total.minutos = total.minutos + total.segundos/60;
total.segundos = total.segundos%60;
total.horas = total.horas + total.minutos/60;
total.minutos = total.minutos%60;

cout<<"el tiempo total empleado ha sido : "<<total.horas<<" : "<<total.minutos<<" : "<<total.segundos<<endl;









}
