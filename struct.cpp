#include <iostream>
#include <string>

using namespace std; // Simplifica o uso de cout, string, etc.

// 1️⃣ Definindo uma struct "Pessoa" (C++23 permite inicialização direta nos membros!)
struct Pessoa {
    string nome;
    int idade = 0;      // Inicialização padrão (novo em C++11+)
    double altura;

    // Método para exibir dados (C++23 mantém a sintaxe clássica)
    void mostrar() const {
        cout << "Nome: " << nome << ", Idade: " << idade 
             << ", Altura: " << altura << "m\n";
    }
};

int main() {
    // 2️⃣ Criando uma instância (C++23 permite inicialização agrupada)
    Pessoa p1 {
        .nome = "João",  // Designated initializers (C++20+)
        .idade = 25,
        .altura = 1.75
    };

    // 3️⃣ Acessando membros
    p1.mostrar();
    cout << "Ano que vem, " << p1.nome << " terá " << p1.idade + 1 << " anos.\n";

    // 4️⃣ Struct aninhada (exemplo adicional)
    struct Endereco {
        string rua;
        int numero;
    };

    Endereco casa { "Rua das Flores", 42 };
    cout << "Morador de " << casa.rua << ", nº " << casa.numero << "\n";

    return 0;
}