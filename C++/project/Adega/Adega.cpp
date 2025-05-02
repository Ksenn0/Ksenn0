#include <iostream>
#include <string>
#include <vector>

void Menu() {  //cria o Menu.
    std::cout << "\n________________\n" << std::endl;
    std::cout << "\nMENU:\n 1. Adicionar Bebida.\n 2. Listar Bebidas.\n 3. Sair." << std::endl;
    std::cout << "________________" << std::endl;
    std::cout << "Escolha: ";
}

class Bebida { //define a classe bebida
    protected:
    std::string marca;
    std::string nome;
    float valor;

    public:
    Bebida(std::string m, std::string n, float v) {
        marca = m;
        nome = n;
        valor = v;
    }

    void exibirdetalhes() {
        std::cout << "Marca: " << marca << ", Nome: " << nome << ", Valor: " << "\033[32m" << valor << "\033[0m" << std::endl;
    }
};


int main() {
    std::vector<Bebida> bebida;
    int opcao;

    do
    {
        Menu();
        std::cin >> opcao;

        switch (opcao)
        {
        case 1: {
             // adicionar bebida.
            std::string marca;
            std::string nome;
            float valor;

            std::cout << "Marca: ";
            std::cin.ignore();
            std::getline(std::cin, marca);

            std::cout << "Nome: ";
            std::getline(std::cin, nome);

            std::cout << "Valor: ";
            std::cin >> valor;

            //Adicionar nova bebida
            Bebida novaBebida(marca, nome, valor);
            bebida.push_back(novaBebida);
            std::cout << "Bebida adicionada com sucesso!";            break;
        }
        case 2: {
            // Listar Bebidas
            if (bebida.empty()) {
                std::cout << "Nenhuma bebida cadastrada.";
            } else {
                std::cout << "Lista de Bebidas:\n";
                for (size_t i = 0; i < bebida.size(); i++) {
                    std::cout << "Bebida " << i + 1 << ": ";
                    bebida[i].exibirdetalhes();
                }
                
            }
            break;
        }
        case 3: {
            //sair 
            std::cout << "Saindo...";
            break;
        }
        default:
            std::cout << "Invalido! Tente novamente!.";
        }
    } while (opcao != 3);
    
    return 0;
}
