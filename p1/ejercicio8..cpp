#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout<<"este programa calcula mediante un grado de aproximacion el valor correspondiente de pi "<<endl;
int n1;
double pi=0.0;
/*
    Cree un programa que lea el grado de aproximación (es decir, número de términos de la
    sumatoria) y devuelva un valor aproximado de pi
*/
    cout<<"introduce el valor de la aproximacion que quieres "<<endl;    
	cin>>n1;

    for (int i=1;i<=n1;++i){
        pi = pi + (6/(1.0*(i*i)));
    }
    
	cout<<"el valor correspondiente es "<<sqrt(pi)<<endl;
	

			return 0;
}

