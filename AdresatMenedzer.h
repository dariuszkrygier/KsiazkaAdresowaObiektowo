#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H
#include "Adresat.h"
#include <vector>
#include <cstdlib>

class AdresatMenedzer
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata=0;
    vector <Adresat> adresaci;

    public:
    void dodajAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
};

#endif
