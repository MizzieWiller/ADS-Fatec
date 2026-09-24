#include <iostream>
using namespace std;

    void tabuada(int numero) {
        cout << "\n Tabuada do " << numero << endl;
      for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
  }
}

    int calcularCubo(int numero) {
    return numero * numero * numero;
}

int main() {
  int num;

  cout << "\n informe um numero inteiro:" << endl;
  cin >> num;

  tabuada(num);

  int resultadoCubo = calcularCubo(num);
      cout << "\n O cubo de " << num << "eh: " << resultadoCubo << endl;

  return 0;
}
  

