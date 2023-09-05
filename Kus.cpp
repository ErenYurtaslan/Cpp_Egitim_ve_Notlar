#include "Kus.h"

Kus::Kus(string ad) : Hayvanlar(ad) { 

}

void Kus::kanatCirp()
{
	cout << Hayvanlar::getIsim() << " uçuyor!" << endl;
}