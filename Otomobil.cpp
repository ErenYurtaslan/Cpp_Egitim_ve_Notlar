#include "Otomobil.h"

void Otomobil::aracBilgileri(){
	cout << "Model: " << Otomobil::model << endl; 
	cout << "Renk: " << Otomobil::renk << endl;
	cout << "Beygir G�c�: " << Otomobil::beygirGucu << endl;
	cout << "Model Y�l�: " << Otomobil::my << endl;
	cout << "Kap� Say�s�: " << *(Otomobil::pKapiSayisi) << endl;
	}


//Constructor
Otomobil::Otomobil(string _renk, string _model, int _beygirGucu, int _my, int _pKS)
{
	renk = _renk;
	model = _model;
	beygirGucu = _beygirGucu;
	my = _my;

	pKapiSayisi = new int(_pKS); //*pKapiSayisi = _pKS; ile ayn� kod
}

//Destructor
Otomobil::~Otomobil() {
	cout << Otomobil::model << " nesnesinin destructor'� �a�r�ld�." << endl;
	delete pKapiSayisi;
	}



void Otomobil::setOtoRenk(string _renk) {
	renk = _renk;
}

string Otomobil::getOtoRenk() {
	return renk;
}

void Otomobil::setOtoModel(string _model){
	model = _model;
}

string Otomobil::getOtoModel(){ 
	return model;
}

void Otomobil::setBeygirGucu(int _beygirgucu) {
	beygirGucu = _beygirgucu;
}

int Otomobil::getBeygirGucu() {
	return beygirGucu;
}

void Otomobil::setModelYil(int _my){
	my = _my;
}

int Otomobil::getModelYil() {
	return my;
}