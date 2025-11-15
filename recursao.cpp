#include <iostream>
using namespace std;

// Função recursiva para calcular o i-ésimo termo de Fibonacci
int fibonacci(int i) {
    if (i <= 1) {
        return i;  // Caso base: fib(0) = 0, fib(1) = 1
    }
    return fibonacci(i - 1) + fibonacci(i - 2);  // Chamadas recursivas
} 

int main() {
    int n;
    cout << "Digite o valor de n (quantidade de termos de Fibonacci): ";
    cin >> n;

    cout << "Sequencia de Fibonacci ate o " << n << "-esimo termo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}