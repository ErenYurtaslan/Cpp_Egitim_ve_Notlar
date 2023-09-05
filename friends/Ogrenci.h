#pragma once
#include <iostream>
using namespace std;


class Ogrenci {
private:
	int not1; 
	int not2; 
	string isim; 
public:
	Ogrenci(string _isim, int _not1, int _not2);
	friend class Hesaplayici;
};