#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include "Adresat.h"
#include "PlikiZAdresatami.h"
#include "MetodyPomocnicze.h"
#include <vector>
#include <iostream>


//using namespace std;

class AdresatMenedzer
{
    Adresat adresat;
    PlikiZAdresatami plikiZAdresatami;
    MetodyPomocnicze metodyPomocnicze;

    vector <Adresat> adresaci;
    vector <string> linieAdresatow;
    string podaneImie;
    string podaneNazwisko;

    void wyswietlDaneAdresata(Adresat adresat);
    string wyswietlaniePoImieniu(Adresat adresat, string podaneImie);
    string wyswietlaniePoNazwisku(Adresat adresat, string podaneNazwisko);
    string edytujAdresata(Adresat adresat, string trescDoEdycji, string zmianaDanych, char wybor);

public:
    AdresatMenedzer()
    {
        adresaci=plikiZAdresatami.wczytajAdresatowZPliku();
        linieAdresatow=plikiZAdresatami.wczytajLinieZPlikuDoWektora();
    };

    //char wybierzOpcjeZMenuGlownego();

    Adresat dodajAdresata();
    void wyszukajPoImieniu();
    void wyszukajPoNazwisku();
    void wyswietlWszystkichAdresatow();
    void usunAdresata();
    void wyszukajAdresataDoEdycji();
};

#endif
