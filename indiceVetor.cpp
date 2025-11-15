#include <iostream>
using namespace std;


int main()
{
    int tam=21;//o vetor tem tam 20 na real, mas isso é pra lastValue work;
    int v[tam];//tem que declarar depois de receber o tam;
    int lastValue;
    for(int i=0; i<tam; i++){
        if(i==tam-1){
            cout<<"Digite o último valor(chave): ";
            cin>>lastValue;
            break;//senão pede outro valor;
        }
        cout<<"Digite o "<< i+1<<"° valor: ";
        cin>>v[i];
    }
    
    int vez=0;
    for(int i=0; i<tam; i++){
        if(lastValue==v[i] && vez==0){
            cout<<"Posição da chave no vetor é: "<<i<<endl;
            vez++;
        }else if(lastValue==v[i] && vez>0)
            cout<<"Outra posição da chave no vetor é: "<<i<<endl;
    }
    if(vez==0)
        cout<<"O valor chave não foi encontrado!";

    return 0;
}