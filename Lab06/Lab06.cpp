// Lab06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float ObliczPole(float r)
{
	return 3.14 * r * r;
}

float ObliczPole(float a, float b)
{
	return a * b;
}
float ObliczPoleSzescianu(float a)
{
	return 6 * a * a;
}
float ObliczObjetosc(float a)
{
	return a * a * a;
}

float ObliczPoleTrojkata(float a, float h)
{
	return (a * h) / 2;
}

float ObliczPoleWalca(float r, float h) {
	float pi = 3.14;
	return 2 * pi * r * (r + h);
}

float ObliczObjetosc(float r, float h)
{
	float pi = 22 / 7;
	float pp = pi * r * r;
	return pp * h;
}
bool LiczbaPierwsza(int liczba) {
	bool jestPierwsza = true;
	if (liczba == 0 || liczba == 1 || liczba < 1) {
		jestPierwsza = false;
	}
	else {
		for (int i = 2; i <= liczba / 2; ++i) {
			if (liczba % i == 0) {
				jestPierwsza = false;
				break;
			}
		}
		return jestPierwsza;
	}
}


void Z2() {
	cout << "Sprawdz czy liczba jest pierwsza. Podaj liczbe: " << endl;
	int l{ 0 };
	cin >> l;
	string result = (LiczbaPierwsza(l)) ? "Jest liczba pierwsza" : "Nie jest liczba pierwsza";
	cout << result << endl;
}


void Z1()
{
	cout << "Podaj a, b, r, h" << endl;
	float a{ 0 }, b{ 0 }, r{ 0 }, h{ 1 };
	cin >> a >> b >> r >> h;
	cout << "Pole kola: " + to_string(ObliczPole(r)) << endl;
	cout << "Pole prostokata: " + to_string(ObliczPole(a, b)) << endl;
	cout << "Pole trojkata: " + to_string(ObliczPoleTrojkata(a, h)) << endl;
	cout << "Pole szescianu: " + to_string(ObliczPoleSzescianu(a)) << endl;
	cout << "Objetosc szescianu: " + to_string(ObliczObjetosc(a)) << endl;
	cout << "Pole walca: " + to_string(ObliczPoleWalca(r, h)) << endl;
	cout << "Objetosc walca: " + to_string(ObliczObjetosc(r, h)) << endl;
}

void Z3() {
	cout << "Podaj liczbe do konwersji: " << endl;
	int l{ 0 };
	int r{ 0 };
	string result = "";
	cin >> l;
	int w = l;
	while (w != 0)
	{
		r = w % 2;
		char tmp = (r == 0) ? ('0') : ('1');
		w = w / 2;
		result += tmp;
	}

	string resultReversed;
	for (int i = result.length(); i >= 0; i--)
	{
		resultReversed = resultReversed + result[i];
		//cout << result[i] << endl;
	}

	cout << "Po konwersji: " + resultReversed << endl;


}

int DwuSilnia(int n)
{
	int w{ 1 };

	if (n == 0) { return 1; }
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i = i + 2)
			w = w * i;
	}
	else {
		for (int i = 1; i <= n; i = i + 2)
		{
			w = w * i;

		}

	}
	return w;
}

void Z4() {
	cout << "Podaj n: " << endl;
	int n{ 1 };
	cin >> n;
	cout << to_string(DwuSilnia(n)) << endl;
}

int main()
{
	Z1();
	Z2();
	Z3();
	Z4();
	cout << "Hello World!\n";
}

