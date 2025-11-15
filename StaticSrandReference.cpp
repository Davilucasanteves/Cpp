#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

enum Cartas{
        as=0, um=1, dois=2, tres=3, quatro=4, cinco=5, seis=6, 
        sete=7, oito=8, nove=9, dez=10, valete=11, dama=12, rei=13
};


void nome_da_carta(int carta) {
    switch (carta) {
        case 0: 
            cout<<"Carta Ás";
            break;
        case 11: 
            cout<<"Carta Valete";
            break;
        case 12: 
            cout<<"Carta Dama";
            break;
        case 13: 
            cout<<"Carta Rei";
            break;
        default:
            cout<< "Carta " << carta;
    }
}

int compra_carta(int& original){
    Cartas card;
    card = Cartas(rand()%14);
    original= card;

    switch (card) {
        case as: 
            return 1;
        case valete:
        case dama:
        case rei: 
            return 10;
        default: 
            return card;
    }
}


void recorde(int p){
    static int newp=0;
    cout<< endl<<"A pontuação dessa foi: "<<p<< endl;
    if(p>newp && p<22)
        newp=p;
    cout<< "O Recorde é ("<<newp<<")"<< endl;
}


void jogo(){
    char op='s';
    int a_origin, b_origin, c_origin;
    
    int a= compra_carta(a_origin);
    int b= compra_carta(b_origin);
    int c= compra_carta(c_origin);
    
    
    cout<< "Você possui: "; cout<< endl; 
    nome_da_carta(a_origin); cout<< endl; 
    nome_da_carta(b_origin); cout<< endl; 
    nome_da_carta(c_origin); cout<< endl; 
    
    int ponto= a+b+c;
    
    if(ponto==21){
        cout<<"Você venceu!!!! :)"<< endl;
        exit(0);
    }
    else if(ponto>21){
        cout<<"Você perdeu! :("<< endl;
        exit(0);
    }else{
        while(op=='s'|| op=='S'){
            cout<< "Você pode arriscar comprar uma carta, "<<
            "tem coragem? Digite [s] se tiver (outra tecla se for covarde): ";
            cin>> op;
            cout<< endl;
            if(op=='s'|| op=='S'){
                int d_origin;
                int d=compra_carta(d_origin);
                ponto= ponto+d;
                cout<<"Tu pegou "; nome_da_carta(d_origin); cout<<". E está agora com "<<ponto<< " pontos"<< endl<< endl;
                if(ponto==21){
                    cout<<"Você Venceu!!!! :)";
                    exit(0);
                }
                if(ponto>21){
                    cout<<"Você perdeu! :(";
                    exit(0);
                }
            }
        }
        recorde(ponto);
    }
}


int main()
{
    srand(time(0));
    char op='s';
    while(op=='s' || op=='S'){
        jogo();
        cout<< "Digite [s] caso queira uma nova rodada (outra tecla pra sair): ";
        cin>> op;
        cout<<endl;
    }
    
    return 0;
}

