#include <iostream>
#include <string>
using namespace std;

int main() {
    char mensagem_inicial[800];
    string mensagem_final;
    int i=0,opcao, tamanho = 8,numero,resto = 2,sobra[100];

    cout << "Bom dia, diga se vai querer encriptar ou desencriptar uma mensagem ou saber se um numero cabe em binario ou não:" << endl;
    cout << "1: Quero encriptar\n2: Quero desencriptar\n3: Quero saber se meu numero em binario" << endl;
    cin >> opcao;
    cin.ignore(); // Limpa o buffer de entrada para evitar problemas com getline()

    if (opcao == 1) {
        cout << "Escreva a mensagem a ser encriptada:" << endl;
        cin.getline(mensagem_inicial);
        cout << "Mensagem inicial: " << mensagem_inicial << endl;

        for (int i = 0; mensagem_inicial[i] != '\0'; i++) {
            switch (mensagem_inicial[i]) {
                case 'a': mensagem_final += "01100001"; break;
                case 'b': mensagem_final += "01100010"; break;
                case 'c': mensagem_final += "01100011"; break;
                case 'd': mensagem_final += "01100100"; break;
                case 'e': mensagem_final += "01100101"; break;
                case 'f': mensagem_final += "01100110"; break;
                case 'g': mensagem_final += "01100111"; break;
                case 'h': mensagem_final += "01101000"; break;
                case 'i': mensagem_final += "01101001"; break;
                case 'j': mensagem_final += "01101010"; break;
                case 'k': mensagem_final += "01101011"; break;
                case 'l': mensagem_final += "01101100"; break;
                case 'm': mensagem_final += "01101101"; break;
                case 'n': mensagem_final += "01101110"; break;
                case 'o': mensagem_final += "01101111"; break;
                case 'p': mensagem_final += "01110000"; break;
                case 'q': mensagem_final += "01110001"; break;
                case 'r': mensagem_final += "01110010"; break;
                case 's': mensagem_final += "01110011"; break;
                case 't': mensagem_final += "01110100"; break;
                case 'u': mensagem_final += "01110101"; break;
                case 'v': mensagem_final += "01110110"; break;
                case 'w': mensagem_final += "01110111"; break;
                case 'x': mensagem_final += "01111000"; break;
                case 'y': mensagem_final += "01111001"; break;
                case 'z': mensagem_final += "01111010"; break;
                case ' ': mensagem_final += "00100000"; break;
                default: mensagem_final += mensagem_inicial[i];
            }
        }

        cout << "Mensagem final: " << mensagem_final << endl;
        
    } else if (opcao == 2) {
        cout << "Escreva a mensagem a ser desencriptada:" << endl;
        cin.getline(mensagem_inicial, 800);

        for (int i = 0; mensagem_inicial[i] != '\0'; i += tamanho) {
            string pedaco = mensagem_inicial;
            pedaco = pedaco.substr(i, tamanho);
            if (pedaco == "01100001") mensagem_final += 'a';
            else if (pedaco == "01100010") mensagem_final += 'b';
            else if (pedaco == "01100011") mensagem_final += 'c';
            else if (pedaco == "01100100") mensagem_final += 'd';
            else if (pedaco == "01100101") mensagem_final += 'e';
            else if (pedaco == "01100110") mensagem_final += 'f';
            else if (pedaco == "01100111") mensagem_final += 'g';
            else if (pedaco == "01101000") mensagem_final += 'h';
            else if (pedaco == "01101001") mensagem_final += 'i';
            else if (pedaco == "01101010") mensagem_final += 'j';
            else if (pedaco == "01101011") mensagem_final += 'k';
            else if (pedaco == "01101100") mensagem_final += 'l';
            else if (pedaco == "01101101") mensagem_final += 'm';
            else if (pedaco == "01101110") mensagem_final += 'n';
            else if (pedaco == "01101111") mensagem_final += 'o';
            else if (pedaco == "01110000") mensagem_final += 'p';
            else if (pedaco == "01110001") mensagem_final += 'q';
            else if (pedaco == "01110010") mensagem_final += 'r';
            else if (pedaco == "01110011") mensagem_final += 's';
            else if (pedaco == "01110100") mensagem_final += 't';
            else if (pedaco == "01110101") mensagem_final += 'u';
            else if (pedaco == "01110110") mensagem_final += 'v';
            else if (pedaco == "01110111") mensagem_final += 'w';
            else if (pedaco == "01111000") mensagem_final += 'x';
            else if (pedaco == "01111001") mensagem_final += 'y';
            else if (pedaco == "01111010") mensagem_final += 'z';
            else if (pedaco == "00100000") mensagem_final += ' ';
            else mensagem_final += pedaco; 
        }
        
        cout << "Mensagem final: " << mensagem_final << endl;
    }  else if(opcao == 3) {
        cout << "digite um numero decimal:" << endl;
        cin >> numero;
        while((resto != 0) and (resto != 1)){
                if(numero%2 == 0){
                    sobra[i] += 0;
                }
                if(numero%2 != 0){
                    sobra[i] += 1;
                }
                else if(numero = 2){
                    resto =0;
                }
        }
        cout << sobra<<endl;
    }else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}