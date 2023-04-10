#include <iostream>
using namespace std;
int n1,n2,n3,n4,resto;
int main(){
 /*
  pide 2 num enteros y ssaca el mcd de los num mediante euclides

 */

    do{
       cout << " primer numero "<<endl;
       cin >> n1;
    }while(n1<0);

    do{
       cout << " segundo numero "<<endl;
       cin>>n2;
    }while(n2<0);
    n3=n1;
    n4=n2;
    resto = n3%n4;
    while ( resto!=0){
        n3=n4;
        n4=resto;
        resto=n3%n4;
    }
    cout << "el mcd es " << n4 << endl;
}

