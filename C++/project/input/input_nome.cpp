#include <iostream>
#include <string>

int main(){
    std::string nome; //Define a variável como STRING.

    std::cout << "Digite seu nome: "; //Mensagem para o usuário.
    std::cin >> nome; //Input.
    std::cout << "Seja bem vindo, " << "\033[31m" << nome << "\033[0m" <<  "!" << std::endl;
    return 0;
}
