
#include <iostream>
#include <string>
#include <time.h>
#include <random>

using namespace std;

void Z1() {
	cout << "Z1" << endl;
	int tab[10] = { 3 };
	for (size_t i = 1; i < sizeof(tab) / sizeof(tab[0]); i++)
		tab[i] = tab[i - 1] + 3;


	for (auto& i : tab)
		cout << to_string(i) + " ";

}

void Z2() {
	cout << "Z2" << endl;
	int tab[10] = { 3 };
	for (size_t i = 1; i < sizeof(tab) / sizeof(tab[0]); i++)
		tab[i] = tab[i - 1] + 3;


	for (size_t i = 0; i < sizeof(tab) / sizeof(tab[0]); i += 2)
		cout << to_string(tab[i]) + " ";

}

void Z3() {
	cout << "Z3" << endl;
	const int n = 10;
	int a = 5;
	cin >> a;
	int x = 2 * a;
	int arr[n];

	for (int i = sizeof(arr) / sizeof(arr[0]) - 1; i >= 0; i--)
	{
		arr[i] = x - a;
		a += 5;
	}
	for (auto& i : arr)
	{
		cout << to_string(i) + " ";
	}
}

void Z4() {
	cout << "Z4" << endl;
	const int n = 100;
	int arr[n];
	srand(time(0));

	for (auto& i : arr) {
		i = rand() % 73 - 23;
		cout << to_string(i) + " ";
	}

	
}

void Z5() {
	cout << "Z5" << endl;
	int x, y;
	cin >> x >> y;
	const int n = 10;
	int arr[n] = { x, y };

	for (size_t i = 2; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (auto& i : arr)
	{
		cout << to_string(i) + " ";
	}
}

void Z6() {
	cout << "Z6" << endl;
	int arr[20];
	for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0])-10; i++)
	{
		arr[i] = i;

	}
	for (size_t i = sizeof(arr) / sizeof(arr[0]) - 10; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		arr[i] = arr[i-10];

	}

	for (auto& i : arr)
	{
		cout << to_string(i) + " ";
	}
}

void Z7() {
	cout << "Z7" << endl;
	int sum{ 0 };
	int arr[5][5] = {};

	for (auto& row : arr)
	{
		for (size_t i = 0; i < sizeof(row)/sizeof(row[0]); i++)
		{
			row[i] = i+1;
		}
	}

	for (size_t i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//cout << arr[i][i] << endl;
		sum += arr[i][i];
	}

	cout << to_string(sum) << endl;

	/*for (auto& row : arr)
	{
		for (auto& el : row)
		{
			cout << el << endl;
		}
		cout << "" << endl;
	}*/

}

void Z8()
{
	cout << "Z8" << endl;
	int arr[5][5] = {};
	int arr1[5][5] = {};
	

	for (auto& row : arr)
	{
		for (size_t i = 0; i < sizeof(row) / sizeof(row[0]); i++)
		{
			row[i] = i + 1;
		}
	}
	
	for (auto& row : arr1)
	{
		for (size_t i = 0; i < sizeof(row) / sizeof(row[0]); i++)
		{
			row[i] = i + 1;
		}
	}

	for (size_t i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		for (size_t j = 0; j < sizeof(arr1) / sizeof(arr1[i]); j++)
		{
			arr1[i][j] += arr[i][j];
		}
	}

	for (auto& i : arr1)
	{
		for (auto& j : i)
		{
			cout << to_string(j)+" ";
		}
		cout << "" << endl;
	}




}

int main()
{
	Z1();
	cout << "\n" << endl;
	Z2();
	cout << "\n" << endl;
	Z3();
	cout << "\n" << endl;
	Z4();
	cout << "\n" << endl;
	Z5();
	cout << "\n" << endl;
	Z6();
	cout << "\n" << endl;
	Z7();
	cout << "\n" << endl;
	Z8();
	cout << "\n" << endl;
}