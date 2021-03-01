#include <iostream>
using namespace std;

int soma_impares(int n){
    	int i=1,
        soma=0;

    while( i < (n*2) ){
        soma += i;
        i += 2;
    }

    return soma;
    }

int main (void){
    int n;
    cout << "Esta funcao soma n numeros naturais impares \n";
    cout << "Digite quantos numeros impares deseja somar? ";
    cin >> n;

    cout << "A soma dos " << n << " numeros impares e : " << soma_impares(n) << endl;

    return 0;
    
}