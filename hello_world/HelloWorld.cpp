#include <iostream>

using namespace std;




int karakter_sayisi(char dizi[]) {
	cout << "Size of: " << sizeof(dizi) << endl; //64 bit bilgisayar kullanýyorsan burasý her zaman 8 olacaktýr.
	return strlen(dizi);
}


void guncelle(int &a) {//call by reference
	a++;
}


void ciftleriDegistir(int array[], int length) {
	cout << "{";

	for (int i = 0; i < length; i++) {
		if (array[i] % 2 == 0) { 
			array[i] = pow(array[i], 2);
		}

		if(i==length-1)
		{
			cout << array[i];
		}else
		{
			cout << array[i]<<", ";
		}
	}

	cout << "}" << endl;
}



int main() {

	setlocale(LC_ALL,"Turkish");

	int arr[] = {13,15,16,18,19,34,45,74};
	int length;
	length = sizeof(arr);
	cout << length <<endl;//dizinin kapladýðý byte alanýný öðrendik.  



	cout << "Normalde dizi: {";
	for(int i = 0; i < length / sizeof(arr[0]); i++) 
	{
		if (i == length / sizeof(arr[0]) - 1) 
		{
			cout << arr[i]; 
		}
		else
		{
			cout << arr[i] << ", ";
		}
	}
	cout << "}" << endl;


	cout << "Deðiþtirilmiþ dizi:";


	ciftleriDegistir(arr,length/sizeof(arr[1]));
	
	
	/*parametre length'e,
	saðdaki ifadeyi yazdýk. arr[2] olmak zorunda deðil,
	herhangi bir elamanýn boyutu ayný olduðu için 
	içlerinden rastgele birini yazmak lazým.
	her eleman 4 byte ise 32/4'ten 8'e ulaþalým diye tüm bu iþlemler yapýldý.*/



	//cout << "Hello C++ \nint main \n";










	char str[] = "qwertyuýopðüasdfghjklþizxcvbnmöç79846";
	int extent = karakter_sayisi(str);
	
	cout << "Dizinin karakter sayýsý: " << extent << endl;
	/*
	strdeki item ve boþluk sayýsý neyse cevap odur.
	hem sizeof'u hem de karakter sayýsýný ekrana basar
	*/ 



	int sayi;
	sayi = 5; 
	guncelle(sayi);  
	cout << "Sayý: " << sayi << endl;
	


	int n = 0;
	cin >> n;
	int* dizi = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> dizi[i];
	}

	for(int i = n-1; i >= 0; i--)
	{
		if (i != 0) {

			cout << dizi[i] << ", ";
		}else{ cout << dizi[i]; }
		
	}
	cout << endl << endl;

	delete[] dizi;



	return 0;
}