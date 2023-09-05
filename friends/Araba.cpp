#include <iostream>
using namespace std;


class Araba {

private:
	string marka; 

public:
	int sene;
	Araba(string _marka, int _sene) {
		marka = _marka; 
		sene = _sene;
	}

	friend void aracBilgileri(Araba araba);

};



void aracBilgileri(Araba araba) {

	cout << araba.sene << endl << araba.marka;//friend ile private'a ulaştık.  
}



/*
int main() {

	Araba a1("Opel", 20);
	aracBilgileri(a1);


	return 3423;
}*/