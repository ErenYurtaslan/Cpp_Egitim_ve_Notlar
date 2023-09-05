#pragma once
#include "Hayvanlar.h"

class Kopek : public Hayvanlar {

public:

	Kopek(string ad);
	~Kopek();
	void havla();
	static int getKopekSayisi() {
		return kopekSayisi;
	};
	static int kopekSayisininKaresiniHesapla();


private:

	static int kopekSayisi;
};