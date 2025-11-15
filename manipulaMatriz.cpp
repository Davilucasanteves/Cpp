#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m, n;
    
    cout<<"Digite o número de linhas da matriz A: \n";
    cin>>m;
    cout<<"Digite o número de colunass da matriz A: \n";
    cin>>n;
    
    float mA[100][100];
    float mB[100][100]={0};//evitar lixo de memória
    
    //cria mA
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<"Digite o valor da "<<i+1<<"º linha, "<<j+1<<"º coluna: ";
            cin>>mA[i][j];
        }
    }
    cout<< endl;
    
    //mostra mA
    cout<<"Matriz A\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<setw(2)<<mA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    //iguala mB a mA;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mB[i][j] = mA[i][j];
        }
    }
    
    //faz as filas adicionais de mB e o elemento total do canto
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            mB[i][n] += mA[i][j];
            //De início, 1°elemento de mB recebe a soma dos elementos de 
            //da primeira linha de mA... m e n são fixos, e i é fixo a princípio;
            mB[m][j] += mA[i][j];
        }
        mB[m][n] += mB[i][n]; //somas da coluna n de mB
    }
    
    //mostra matrizes
    cout<<"Matriz A\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<setw(2)<<mA[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"Matriz B\n";
    for(int i=0; i<=m; i++){ //i e j <= m e n para pegar as novas filas
        for(int j=0; j<=n; j++){
            cout<<setw(2)<<mB[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}