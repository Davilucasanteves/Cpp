#include <iostream>
using namespace std;

float raizquadrada (float numero) {
    float x = numero/2;
    float erro = 0.01/100*numero;
    
    while (true) {
        float armazena = (x + numero/x);
        float raiz = armazena/2;
        if ((raiz*raiz - numero) <= erro){
            return raiz;
        }
        x = raiz;
    }
}

int main (){
    float n;
    cout << "Digite um número: ";
    cin>> n;
    cout << raizquadrada(n);
    return 0;
}
    
