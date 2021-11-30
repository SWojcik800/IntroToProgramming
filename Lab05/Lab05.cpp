


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Z1() {
	char sentence[] = { "lot" }; //Znak pusty (\0) jest dodawany domyśnlie
	char sentence2[] = { 'l', 'o', 't', '\0' }; //Trzeba dodać znak ręcznie, w przeciwnym razie otrzymamy efekt niezamierzony: lot╠╠╠╠╠╠╠╠╠lot

	//cout << sentence << endl;
	//cout << sentence2 << endl;
}

void Z2() {
	int liczby[100];
	char znaki[100];
	//cin >> liczby; Nie jest poprawny, taki sposób wczytywania zarezerwowany jest dla tablicy znaków
	//cin >> znaki;
}

void Z3() {
	char tab[] = "wiosna";
	cout << "Liczba znakow razem z nullem: " + to_string(size(tab)) << endl;
	cout << "Liczba znakow bez nulla: " + to_string((size(tab) - 1)) << endl;
}

void Z4() {
	char sentence[50];
	char sentence1[50];

	cout << "Podaj pierwszy ciag znakow" << endl;
	cin.getline(sentence, 50);
	cout << "Podaj drugi ciag znakow" << endl;
	cin.getline(sentence1, 50);

	char copiedSentence[50];
	strcpy_s(copiedSentence, sentence);

	string copied;
	for (auto& c : copiedSentence)
	{
		if (c != '\0')
			copied += c;
		else
		{
			copied += c;
			break;
		}


	}

	cout << "Skopiowana tablica znakow 1: " + copied + "Ma dlugosc: " + to_string(copied.length()) << endl;



}

string Concat(char arr[])
{
	string result;
	for (size_t i = 0; i < sizeof(arr); i++)
		result += arr[i];

	return result;

}

string OcenaHandler(int ocena)
{
	ocena -= 1;
	if (ocena < 2)
		return "2";
	if (ocena > 5)
		return "4";
	return to_string(ocena);
}



void Z5() {


	cout << "Podaj nazwe ulicy na ktorej mieszkasz: ";
	string ulica;
	getline(cin, ulica);
	cout << "Podaj nr domu:" << endl;
	string nr_domu;
	getline(cin, nr_domu);
	cout << "Na ile oceniasz swoje umiejętności programowania w skali [2 - 5]: " << endl;
	string skill;
	getline(cin, skill);
	cout << "Twoj staz programistyczny: " << endl;
	string internship;
	getline(cin, internship);
	cout << "Adres: " + ulica + " " + nr_domu << endl;
	cout << "Ocena: " + OcenaHandler(int(atoi(skill.c_str()))) << endl;
	cout << "Staz: " + to_string(int(atoi(internship.c_str()))) + " dni";

}

void Z6()
{
	cout << "Podaj tekst: ";
	string text;
	getline(cin, text);
	string samo = "aeiouyAEIOUY";
	string spol = "bcdfghjklmnprstwxzBCDFGHJKLMNPRSTWXZ";
	int csamo = 0;
	int cspol = 0;

	for (char c : text)
	{
		for (auto& s : samo)
		{
			if (s == c)
				csamo += 1;
		}
		for (auto& sp : spol)
		{
			if (sp == c)
				cspol += 1;
		}
	}
	cout << "Liczba samoglosek: " + to_string(csamo) << endl;
	cout << "Liczba spolglosek: " + to_string(cspol) << endl;

}

int main()
{
	//Z1();
	//Z2();

	cout << "Z3" << endl;
	Z3();
	cout << "Z4" << endl;
	Z4();
	cout << "Z5" << endl;
	Z5();
	cout << "Z6" << endl;
	Z6();

}

