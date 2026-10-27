#include <iostream>
#include <string>
using namespace std;

const int N = 12;

int main() {
    string nomes[N];
    int pontos[N];
    int saldo[N];

    cout << "cadastro dos times" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\nTime " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin >> ws, nomes[i]);
        cout << "Pontos ganhos: ";
        cin >> pontos[i];
        cout << "Saldo de gols: ";
        cin >> saldo[i];
    }

    cout << "\n dados informados" << endl;
    for (int i = 0; i < N; i++) {
        cout << nomes[i] << " - Pontos: " << pontos[i]
             << " - Saldo de gols: " << saldo[i] << endl;
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            bool trocar = false;

            if (pontos[j] < pontos[j + 1]) {
                trocar = true;
            } else if (pontos[j] == pontos[j + 1] && saldo[j] < saldo[j + 1]) {
                trocar = true;
            }

            if (trocar) {
                string auxNome = nomes[j];
                nomes[j] = nomes[j + 1];
                nomes[j + 1] = auxNome;

                int auxPontos = pontos[j];
                pontos[j] = pontos[j + 1];
                pontos[j + 1] = auxPontos;

                int auxSaldo = saldo[j];
                saldo[j] = saldo[j + 1];
                saldo[j + 1] = auxSaldo;
            }
        }
    }

    cout << "\n classificacao " << endl;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << "o lugar: " << nomes[i]
             << " - Pontos: " << pontos[i]
             << " - Saldo de gols: " << saldo[i] << endl;
    }

    return 0;
}
