#include <iostream>
using namespace std;

float volume(float x){
    return x*x*x;
}

float volume(float x, float y, float z){
    return x*y*z;
}

float volume(float x, float y){
    return (x*x)*3.1415*y;
}

int main()
{
    int op=0;
    float v=0, a=0, b=0, c=0;
    std::cout<<"Digite [1] para obter o volume de um cubo, [2] para um paralelepípedo, [3] para um cilindro: ";
    cin>> op;
    if(op==1){
        cout<< "Digite a aresta do cubo: ";
        cin>>a;
        v=volume(a);
        cout<< "O volume do cubo é "<< v;
    }else if(op==2){
        cout<< "Digite as três dimensões do paralelepípedo: ";
        cin>>a>>b>>c;
        v=volume(a, b, c);
        cout<< "O volume do paralelepípedo é "<< v;
    }else if(op==3){
        cout<< "Digite o raio e a altura do cilindro, nessa ordem: ";
        cin>>a>>b;
        v=volume(a, b);
        cout<< "O volume do cilindro é "<< v;
    }else
        cout<< "Inválido!";

    return 0;
}