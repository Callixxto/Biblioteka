#pragma once
#include <string>

class Ksiazka {
private:
    int id;
    std::string tytul;
    std::string autor;

public:
    Ksiazka(); 
    Ksiazka(int id, const std::string& tytul, const std::string& autor);

    int getId() const;
    std::string getTytul() const;
    std::string getAutor() const;

    void wyswietl() const;
};

