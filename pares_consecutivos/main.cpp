#include <iostream>

using namespace std;

int main()
{
    int x, soma;

    cout << "Digite um numero inteiro: ";
    cin >> x;

    while (x != 0){
        if ( x % 2 != 0){
            x = x + 1;
        }

        soma = x * 5 + 20;

        cout << "SOMA = " << soma << endl;

        cout << "Digite um numero inteiro: ";
        cin >> x;
    }


    return 0;
}
