#include "Kedi.h"

Kedi::Kedi(string ad) : Hayvanlar(ad) {

}

void Kedi::fareYakala()
{
	cout << Hayvanlar::getIsim() << " fare yakalamakla meþgul!" << endl;
}
