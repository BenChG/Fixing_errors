#include "KsiazkaAdresowa.h"
//#include <iostream>
//using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa;

    char wybor;
    while (true)
    {
        wybor='4';//ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

        switch (wybor)
        {
        case '1':
            ksiazkaAdresowa.dodajAdresata();
            break;
        case '2':
            ksiazkaAdresowa.wyszukajPoImieniu();
            break;
        case '3':
            ksiazkaAdresowa.wyszukajPoNazwisku();
            break;
        case '4':
            ksiazkaAdresowa.wyswietlWszystkichAdresatow();
            break;
        case '5':
            ksiazkaAdresowa.usunAdresata();
            break;
        case '6':
            ksiazkaAdresowa.wyszukajAdresataDoEdycji();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
            system("pause");
            break;
        }
    }
    return 0;
}
