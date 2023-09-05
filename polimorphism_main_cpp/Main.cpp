#include <iostream>

using namespace std;


class Hayvan {

public:

	virtual void sesCikar() {
		cout << "Hayvan ses ��kard�:\n";
	}

	void yaz() {
		cout << "Hayvan yazd�r"<<endl;
	}
};

//child class kedi

class Kedi : public Hayvan {
public: 
	void sesCikar() { 
		__super::sesCikar(); 
		cout << "Meow...\n";
	}
	void yaz() {
		cout << "Kedi yazd�r" << endl;
	}
};

//child class k�pek

class Kopek : public Hayvan {
public:
	void sesCikar() {
		__super::sesCikar(); 
		cout << "Hav Hav..." << endl;   
	}
	void yaz() {
		cout << "K�pek yazd�r" << endl;
	}
};

//child class ku�

class Kus : public Hayvan {
public:
	void sesCikar() {
		__super::sesCikar(); 
		cout << "Cik Cik...\n";
	}
	void yaz() {
		cout << "Ku� yazd�r" << endl;
	}
};


void DortKezSesCikar(Hayvan* h)
{	
		for (int x = 1; x <= 4; x++) {
			h->sesCikar();  
		}
}





int main()
{
	setlocale(LC_ALL, "Turkish");//stringlerde t�rk�e karakter kullanabilmek i�in yazmak gerekir.


	Hayvan* pHayvan;
	Kopek karabas; 	
	Kedi tekir;
	Kus cicikus;


	pHayvan = &tekir; 

	pHayvan->sesCikar(); //meow

	pHayvan->yaz();// => hayvan s�n�f� �al���r ��nk� virtual bi metot de�il

	DortKezSesCikar(pHayvan);

	tekir.yaz(); 

	
	pHayvan = &karabas;
	pHayvan->sesCikar(); //hav hav

	karabas.yaz();
	DortKezSesCikar(pHayvan); 




	for (int x = 1; x <= 7; x++) {
		if (x == 4) {
			for (int i = 1; i <= 4;i++) { 
				cout << "-----------"; 
			}
			cout << endl;
		}
		else {
			cout << endl; 
		}
		
	}
	


	
	DortKezSesCikar(&karabas);
	cout << endl;
	DortKezSesCikar(&tekir);
	cout << endl;
	DortKezSesCikar(&cicikus);
	cout << endl;

	return 54325;
}