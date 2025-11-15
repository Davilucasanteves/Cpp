#include <iostream>
#include <iomanip>
using namespace std;

void trocaSeMenor(int* x, int* y){
    if(*y > *x){
        int aux = *x;
        *x = *y;
        *y = aux;
    } 
    
}

int main()
{
    int *aPtr, *bPtr, a, b;
    cout<<"---Troca números--- \n\n";
	cout<<"Digite o primeiro número: \n";
	cin>>a; //ponteiro derreferenciado é o com *;
	cout<<"Digite o segundo número: \n";
	cin>>b;
	//aPtr= &a;
	//bPtr= &b;
	trocaSeMenor(&a, &b);
	cout<<"O maior: "<<a<<". O menor: "<<b;
	
	return 0;
}