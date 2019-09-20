#include <iostream>
#include <string.h>
#define NMAX 100

using namespace std;

int main()
{
    char nome[NMAX];
    int lunghezza = 0;

    do
    {
         cout << "Inserisci il tuo nome : ";
         cin >> nome;
         lunghezza = strlen(nome);
         cout << lunghezza << endl;
    }while(lunghezza == 0);

    cout << endl << "Ciao " << nome << "! Il tuo nome è lungo " << lunghezza << " cartatteri.";

    if(lunghezza == 7)
    {
        cout << endl << "SETTE! NUMERO MAGICKO!";
    }

    return 0;
}
