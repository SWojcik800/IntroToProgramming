
#include <iostream>
#include <string>
#include <random>
#include <time.h>

using namespace std;

/* PIERWSZY PDF
void Z1()
{
	
	int n{ 0 };

	cout << "Podaj liczbe", cin >> n;

	cout << "For: " << endl;
	for (int i = 0; i <= n; i++)
		cout << to_string(i)+"\n";
	cout << "While: " << endl;

	int j{ 0 };

	while (j <= n)
	{
		cout << to_string(j) + "\n";
		j++;
	}
		

	j = 0;
	cout << "Do while: " << endl;
	do
	{
		cout << to_string(j) + "\n";
		j++;
	} while (j <= n);
	
	

}

void Z2() {
	cout << "Z2 \n";
	float c{ 1 };

	while (c >= 0)
		cin >> c;
	cout << to_string(c) + "< 0" << endl;
}



void Z3() {
	float arr [10];
	int pos_count = 0;
	int neg_count = 0;
	float pos_sum = 0;
	float neg_sum = 0;

	for (int i = 0; i <= 9; i++)
		cin >> arr[i];

	for (float x : arr)
	{
		if (x > 0) 
		{
			pos_count++;
			pos_sum += x;
		}

		if (x < 0)
		{
			neg_count++;
			neg_sum += x;
		}
	}

	cout << "Ilosc dodatnich: " + to_string(pos_count) + "\n";
	cout << "Ilosc ujemnych: " + to_string(neg_count) + "\n";
	cout << "Suma dodatnich: " + to_string(pos_sum) + "\n";
	cout << "Suma ujemnych: " + to_string(neg_sum) + "\n";

}

void Z4() {
	cout << "Z4" << endl;

	int n = 0;
	float sum = 0;
	int tmp = 0;

	cout << "Podaj n: ", cin >> n;
	if (n <= 0) { cout << "n musi buc wieksze od 0"; return; }
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (int(tmp) % 2 == 0)
			sum += tmp;
	}
	cout << "Suma: " + to_string(sum) << endl;


}

void Z5() {
	cout << "Z5" << endl;
	int n = 1;
	int sum = 0;
	cout << "podaj n ", cin >> n;
	if (n <= 0) {
		cout << "N musi byc wieksze od 0" <<  endl;
		return;
	}
	
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		int tmp;
		tmp = rand() % 56 - 5;
		cout << to_string(tmp) << endl;
		if (tmp % 2 == 0)
			sum += tmp;
	}

	cout << "Suma: " << to_string(sum) << endl;

}*/

//DRUGI PDF
void Z1() {
	int n = 0;
	int i = 0;
	float avg = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;

	if (n<=0)
	{
		cout << "N musi byc wieksze od 0" << endl;
		return;
	}

	while (i < n) {
		float tmp = 0;
		cin >> tmp;
		avg += tmp;
		i++;
	}
	cout << "Srednia: " << to_string(avg / n) << endl;
	
}

void Z2() {
	int n = 0;
	int i = 0;
	float avg = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;

	if (n <= 0)
	{
		cout << "N musi byc wieksze od 0" << endl;
		return;
	}

	while (i < n) {
		float tmp = 0;
		cin >> tmp;

		if (tmp < 0 || tmp > 100)
		{
			cout << "Wartosc poza przedzialem 0-100";
			continue;
		}

		avg += tmp;
		i++;
	}
	cout << "Srednia: " << to_string(avg / n) << endl;

}

void Z3()
{
	int n = 0;
	int i = 0;
	float avg = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;

	if (n <= 0)
	{
		cout << "N musi byc wieksze od 0" << endl;
		return;
	}

	while (i < n) {
		float tmp = 0;
		cin >> tmp;

		if (tmp < 0 || tmp > 100)
		{
			cout << "Wartosc poza przedzialem 0-100";
			break;

		}

		avg += tmp;
		i++;
	}
	while (true) { continue; }
	
	cout << "Srednia: " << to_string(avg / n) << endl;
}
void Z4()
{
	int n = 0;
	int i = 0;
	float avg = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;

	if (n <= 0)
	{
		cout << "N musi byc wieksze od 0" << endl;
		return;
	}
	do
	{
			float tmp = 0;
			cin >> tmp;

			if (tmp < 0 || tmp > 100)
			{
				cout << "Wartosc poza przedzialem 0-100";
				break;

			}

			avg += tmp;
			i++;
	} while (i < n);

	while (true) { continue; }

	cout << "Srednia: " << to_string(avg / n) << endl;
}


	


void Z5() {
	
	for (int i = 0; i <= 100; i++)
		cout << to_string(i) + " ";
	cout << "\n" << endl;
	for (int i = 100; i >= 0; i--)
		cout << to_string(i) + " ";
	cout << "\n" << endl;
	for (int i = 7; i <= 77; i+=7)
		cout << to_string(i) + " ";
	cout << "\n" << endl;
	for (int i = 20; i >= 0; i-=2)
		cout << to_string(i) + " ";
	cout << "\n" << endl;

	

}

int main()
{
	Z1();
	Z2();
	//Z3(); Do petli nieskonczonej
	//Z4(); Do petli nieskonczonej
	Z5();
}
 
