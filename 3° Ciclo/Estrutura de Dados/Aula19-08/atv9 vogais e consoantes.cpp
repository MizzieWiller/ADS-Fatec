#include <iostream>
int main()
{
    char letra;

    cout << "\n Digite uma letra";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            cout << "\n A letra é vogal." << endl;
        } else {
            cout << "\n A letra é uma consoante" << endl;
        }

    return 0;
}