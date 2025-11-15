#include <iostream>
using namespace std;

void bubble(int v[], int tam){//nesse caso, tam=tamanho real do vetor;
    int flag=0;
    for(int i=0; i<(tam-1); i++){//é tam-1, pois não haverá elemento v[19+1], só há até v[19];
        for (int j = 0; j < (tam)-i-1; j++) {//-i é pq otimiza a ordenação;
            if(v[j]>v[j+1]){ 
                int aux=v[j];
                v[j]= v[j+1]; 
                v[j+1]=aux;
                flag++;
            }
        }
        if(flag==0)break;
    }
}

int buscaBinaria(int v[], int tam, int ch){
    int meio=0, ini=0, fim=tam-1;//tam= 4; |vec|= 3, lastIndice= 2;

    while(ini<=fim){
        meio= (ini+fim)/2;
        if(v[meio]==ch){
            return meio;
        }else{
            (v[meio]<ch ? ini= meio+1 : fim= meio-1); //ternário
        }
    }
    return -1;
}

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
    
    bubble(v, tam-1);//tam-1 é o tamanho do vetor;
    int pos=0;
    pos= buscaBinaria(v, tam-1, lastValue);
    if(pos==-1){
        cout<<"O valor chave não foi encontrado!";
    }else
        cout<<"O valor está no índice: "<<pos;
    
    /*
    int vez=0;
    for(int i=0; i<tam; i++){
        if(lastValue==v[i] && vez==0){
            cout<<"Posição da chave no vetor é: "<<i<<endl;
            vez++;
        }else if(lastValue==v[i] && vez>0)
            cout<<"Outra posição da chave no vetor é: "<<i<<endl;
    }
    if(vez==0)
        cout<<"O valor chave não foi encontrado";
    */
    return 0;
}