#include <iostream>
#include<list>

using namespace std;


void printList(list <int> l) {
	list<int>::iterator itr;
	for (itr = l.begin(); itr != l.end(); itr++) {
		cout << *itr << " ";
	}
	cout << endl;
}




void sil(list<int>* pl) {
	/*
	"call by value" de�il "call by reference" olmas� i�in,
	yukar�daki parametreyi pointer olarak ald�k.
	a�a��da da bu metodu kullan�rken listenin adresini verdik.
	b�ylece KOPYA OLU�MAMI� OLDU VE �STENEN
	ELEMAN(89) S�L�ND�.
	*/
	list<int>::iterator itr;
	itr = pl->begin();
	itr++;
	itr++; 
	itr++; 
	pl->erase(itr); 
}




int main() {

	setlocale(LC_ALL, "Turkish");

	list <int> liste; 

	liste.push_back(89);
	liste.push_back(57); 
	liste.push_front(31);//en ba�ta bu olur, front oldu�u i�in 

	printList(liste); 


	/*list.pop_back();//listenin son eleman�n� ��kar�r
	printList(list); 

	list.pop_front();//listenin ilk eleman�n� ��kar�r.
	printList(list); 
	*/

	list<int>::iterator iterator1;    

	iterator1 = liste.begin(); 
	iterator1++;
	iterator1++; 
	liste.insert(iterator1, 99);//iterator1++'� 2 kez yazd�k, ba�lang��tan iki ad�m sonraya 99 elaman�n� koyduk.
	printList(liste); //31,89,99,57

	iterator1 = liste.begin(); 
	iterator1++; 
	liste.insert(iterator1,2,7);//31,7,7,89,99,57 iki tane 7 eklendi.
	printList(liste);

	sil(&liste);//yukar�da anlat�ld��� gibi buraya listenin adresini yazd�k ki direkt bu listenin eleman� silinsin ve kopya g�nderilmesin.
	printList(liste);//31,7,7,99,57

	return 4;
}