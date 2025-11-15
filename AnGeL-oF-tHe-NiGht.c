char *stralt(char *string){ // Ponteiro como parâmetro para passagem de vetor ou matriz.

int letra;
for(letra = 0; (string[letra] != '\0') && (letra < 1000); letra ++)//interessante esse for sem chaves
    if(letra%2){//se índice ímpar, deixa M em m;
        if(string[letra]>='A' && string[letra]<='Z')
           string[letra]-='A'-'a';//ASCII, A-a=32, nº especial para changes;
    }
    else{//par, deixa m em M;
        if(string[letra]>='a' && string[letra]<='z')
            string[letra]+='A'-'a';
    }
    return string;
}

#include <stdio.h>
int main()
{
    char frase[100];
    printf("*Alternando maiúscula e minúscula*\n");
    printf("Digite uma frase: ");
    gets(frase);
    stralt(frase);
    printf("\n%s\n", frase);
}
