#include "Kopek.h"

int Kopek::kopekSayisi = 0;

Kopek::Kopek(string ad) : Hayvanlar(ad) {
	kopekSayisi++;
}

Kopek::~Kopek()
{
	kopekSayisi--;
}


void Kopek::havla()
{
	cout << Hayvanlar::getIsim() << " havlýyor!" << endl;
}

int Kopek::kopekSayisininKaresiniHesapla() {
	
	return(kopekSayisi*kopekSayisi);

}