#pragma once
#include <iostream>
using namespace std;

class Otomobil {

public:

	//Constructor
	Otomobil(string _renk, string _model, int _beygirGucu, int _my, int _pKS);

	//Destructor
	~Otomobil();

	void aracBilgileri();

	

	void setModelYil(int _my);
	int getModelYil();
	void setOtoRenk(string _renk);
	string getOtoRenk();
	void setOtoModel(string _model);
	string getOtoModel();
	void setBeygirGucu(int _beygirgucu);
	int getBeygirGucu();

	int* pKapiSayisi;  

private:
	string renk;
	string model;
	int beygirGucu;
	int my;

}; 

