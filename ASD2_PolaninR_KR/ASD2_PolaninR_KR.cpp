#include <iostream>
#include <string>
#include <fstream>
#include <locale>

using namespace std;

long power_modulo_fast(long a, long b, long m)
{
	int i;
	long wynik = 1;
	long int x = a%m;

	for (i = 1; i <= b; i <<= 1)
	{
		x %= m;
		if ((b&i) != 0)
		{
			wynik *= x;
			wynik %= m;
		}
		x *= x;
	}

	return wynik%m;
}
int toASCII(unsigned char c)
{
	//unsigned char d = static_cast<unsigned char>(c);
	return (c);//static_cast<unsigned int>
}
int main()
{
	setlocale(LC_ALL, "polish");

	long lPrzypadkow = 0;
	long dPliku = 0;
	long dWzorca = 0;

	cin >> lPrzypadkow;
	for (long i = 0; i < lPrzypadkow; i++)
	{
		string nazwa_plik;
		string wzorzec;
		string plik;
		string linia;

		cin >> nazwa_plik;
		ifstream moj_plik;
		moj_plik.open(nazwa_plik);
		while (getline(moj_plik, linia))
		{
			plik += linia +'\n';
		}
			
		moj_plik >> plik;
		moj_plik.close();
		cin >> wzorzec;

		//-1 bo zczytujemy znak nastêpnej lini
		dPliku = plik.length()-1;
		dWzorca = wzorzec.length();


		 
		
	}
	//long x = 37813 * 37813;
	//cout << x << endl;

	//cout << toASCII('¹') << endl;


	return 0;
}