#include "Hayvanlar.h"

Hayvanlar::Hayvanlar(string ad)
{
    Hayvanlar::isim = ad;
}

void Hayvanlar::beslen()
{
    cout << Hayvanlar::isim << " besleniyor..." << endl;
}

void Hayvanlar::uyu()
{
    cout << Hayvanlar::isim << " uyuyor..." << endl;
}

void Hayvanlar::setIsim(string ad)
{
    Hayvanlar::isim = ad; 
}

string Hayvanlar::getIsim()
{
    return Hayvanlar::isim; 
}
