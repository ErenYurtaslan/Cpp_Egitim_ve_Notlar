#pragma once
#include <iostream>

using namespace std;


class Hesap {

private:

	string isim;
	int hesapNo;
	float bakiye;

public:

	Hesap(string _isim, int _hesapNo, float _bakiye);
	void paraYatir(float yatirilanPara);  
	void paraCek(float cekilenPara);
	void hesapDetayi();

};