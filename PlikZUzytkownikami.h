#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikZUzytkownikami
{
    const string nazwaPlikuZUzytkownikami;
    //fstream plikTekstowy;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);


public:
    PlikZUzytkownikami (string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami (NAZWAPLIKUZUZYTKOWNIKAMI) {};
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void dopiszUzytkownikaDoPliku (Uzytkownik uzytkownik);
    void zapiszWszystkichUzytkownikowDoPliku (vector <Uzytkownik> &uzytkownicy);
};

#endif
