#ifndef METODYPOMOCNICZE_H
#define METODYPOMOCNICZE_H

#include "AdresatMenedzer.h"
#include "KsiazkaAdresowa.h"

using namespace std;

class MetodyPomocnicze
{
    char wczytajZnak();

public:
    char wybierzOpcjeZMenuGlownego();
    string wczytajLinie();
    string podajImie();
    string podajNazwisko();
    char wybierzDanaDoEdycji();
};

#endif
