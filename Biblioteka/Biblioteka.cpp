#include "Biblioteka.h"
#include <iostream>

void Biblioteka::dodajKsiazke(const Ksiazka& ksiazka) {
    katalog[ksiazka.getId()] = ksiazka;
}

void Biblioteka::usunKsiazke(int id) {
    katalog.erase(id);
    wypozyczone.erase(id);
}

void Biblioteka::wypozyczKsiazke(int id, const std::string& czytelnik) {
    if (katalog.count(id) && !wypozyczone.count(id)) {
        wypozyczone[id] = czytelnik;
    }
    else {
        std::cout << "Nie mozna wypozyczyc ksiazki o ID: " << id << std::endl;
    }
}

void Biblioteka::zwrocKsiazke(int id) {
    wypozyczone.erase(id);
}

void Biblioteka::wyswietlStan() const {
    for (std::map<int, Ksiazka>::const_iterator it = katalog.begin(); it != katalog.end(); ++it) {
        const Ksiazka& ksiazka = it->second;
        int id = it->first;
        ksiazka.wyswietl();
        if (wypozyczone.count(id)) {
            std::cout << "Status: Wypozyczona przez " << wypozyczone.at(id) << std::endl;
        }
        else {
            std::cout << "Status: Dostepna" << std::endl;
        }
        std::cout << "--------------------------" << std::endl;
    }
}

