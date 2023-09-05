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
	"call by value" deðil "call by reference" olmasý için,
	yukarýdaki parametreyi pointer olarak aldýk.
	aþaðýda da bu metodu kullanýrken listenin adresini verdik.
	böylece KOPYA OLUÞMAMIÞ OLDU VE ÝSTENEN
	ELEMAN(89) SÝLÝNDÝ.
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
	liste.push_front(31);//en baþta bu olur, front olduðu için 

	printList(liste); 


	/*list.pop_back();//listenin son elemanýný çýkarýr
	printList(list); 

	list.pop_front();//listenin ilk elemanýný çýkarýr.
	printList(list); 
	*/

	list<int>::iterator iterator1;    

	iterator1 = liste.begin(); 
	iterator1++;
	iterator1++; 
	liste.insert(iterator1, 99);//iterator1++'ý 2 kez yazdýk, baþlangýçtan iki adým sonraya 99 elamanýný koyduk.
	printList(liste); //31,89,99,57

	iterator1 = liste.begin(); 
	iterator1++; 
	liste.insert(iterator1,2,7);//31,7,7,89,99,57 iki tane 7 eklendi.
	printList(liste);

	sil(&liste);//yukarýda anlatýldýðý gibi buraya listenin adresini yazdýk ki direkt bu listenin elemaný silinsin ve kopya gönderilmesin.
	printList(liste);//31,7,7,99,57

	return 4;
}