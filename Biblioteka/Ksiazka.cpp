#include "Ksiazka.h"
#include <iostream>


Ksiazka::Ksiazka() : id(0), tytul(""), autor("") {
}

Ksiazka::Ksiazka(int id, const std::string& tytul, const std::string& autor)
    : id(id), tytul(tytul), autor(autor) {
}

int Ksiazka::getId() const {
    return id;
}

std::string Ksiazka::getTytul() const {
    return tytul;
}

std::string Ksiazka::getAutor() const {
    return autor;
}

void Ksiazka::wyswietl() const {
    std::cout << "ID: " << id << ", Tytul: " << tytul << ", Autor: " << autor << std::endl;
}
