#include <iostream>
#include "Biblioteka.h"

int main() {
    Biblioteka b;

    b.dodajKsiazke(Ksiazka(1, "Hobbit", "J. R.R. Martin"));
    b.dodajKsiazke(Ksiazka(2, "Dark Rise", "C.S. Pascat"));
	b.dodajKsiazke(Ksiazka(3, "AFTG", "Nora Sakavic"));

    b.wypozyczKsiazke(1, "Czytelnik 1");
	b.wypozyczKsiazke(3, "Czytelnik 2");
    b.wyswietlStan();

    b.zwrocKsiazke(1);
    b.usunKsiazke(2);


	b.wypozyczKsiazke(3, "Czytelnik 3");
    b.wyswietlStan();

    return 0;
}
