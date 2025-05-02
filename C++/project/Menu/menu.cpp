#include <iostream>
#include <cstdlib>
#include <locale>

void menu() {
    std::cout << "------- MENU PRINCIPAL -------\n";
    std::cout << "0. Sair\n"; 
    std::cout << "1. Opção 1\n"; 
    std::cout << "2. Opção 2\n"; 
    std::cout << ":> ";
}

void opcao1() {
    std::cout << "Você escolheu a opção 1\n";
}

void opcao2() {
    std::cout << "Você escolheu a opção 2\n";
}

int main() {
    // Verifique a configuração regional do sistema e defina o setlocale adequadamente
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8"); 

    int opcao;
    do {
        menu();
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                opcao1();
                break;
            case 2:
                opcao2();
                break;
            case 0:
                std::cout << "Saindo do programa.\n";
                return 0;
            default:
                std::cout << "Opção inválida. Tente novamente.\n";
        }

        std::cout << std::endl;
    } while (true);

    return 0;
}
