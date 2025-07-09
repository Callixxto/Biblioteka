#pragma once
#include <map>
#include <string>
#include "Ksiazka.h"

class Biblioteka {
private:
    std::map<int, Ksiazka> katalog;
    std::map<int, std::string> wypozyczone;

public:
    void dodajKsiazke(const Ksiazka& ksiazka);
    void usunKsiazke(int id);
    void wypozyczKsiazke(int id, const std::string& czytelnik);
    void zwrocKsiazke(int id);
    void wyswietlStan() const;
};

