#include "Uzytkownik.h"

void Uzytkownik::ustawIdUzytkownika(int noweIdUzytkownika)
{
    if (noweIdUzytkownika >= 0)
        idUzytkownika = noweIdUzytkownika;
}

void Uzytkownik::ustawNazweUzytkownika(string nowaNazwaUzytkownika)
{
    nazwaUzytkownika = nowaNazwaUzytkownika;
}

void Uzytkownik::ustawHasloUzytkownika (string noweHasloUzytkownika)
{
    hasloUzytkownika = noweHasloUzytkownika;
}

int Uzytkownik::pobierzIdUzytkownika()
{
    return idUzytkownika;
}

string Uzytkownik::pobierzNazweUzytkownika()
{
    return nazwaUzytkownika;
}

string Uzytkownik::pobierzHasloUzytkownika()
{
    return hasloUzytkownika;
}
