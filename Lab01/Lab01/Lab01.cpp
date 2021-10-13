#include <iostream>
#include <map>
#include <string>

using namespace std;

void Z1() {
	cout << "Z1 \n";
	string id;
	cout << "Podaj nr_legitymacji: \n";
	cin >> id;
	cout << "Nr legitymacji: " + id + "\n";

}

void Z2() {
	cout << "Z2 \n";

	int l;

	//Mapa zamiast if else 
	map<bool, string> m;
	m[true] = "Parzysta";
	m[false] = "Nieparzysta";

	cout << "Podaj liczbe: \n", cin >> l;

	bool is_even = l % 2 == 0;
	cout << m[is_even] + "\n";
}

void Z3() {
	cout << "Z3 \n";

	float a, b;
	cout << "Podaj a i b: \n", cin >> a >> b;
	bool are_equal = a == b;
	if (are_equal)
	{
		cout << "Liczby sa rowne \n";
		return;
	}
	bool a_is_greater_than_b = a > b;
	if (a_is_greater_than_b)
		cout << to_string(a) + " jest wieksze od " + to_string(b) + "\n";
	else
		cout << to_string(b) + " jest wieksze od " + to_string(a) + "\n";

}

void Z4() {
	cout << "Z4 \n";
	float a, b, c, d, result;
	cout << "Podaj a, b, c, d: \n", cin >> a >> b >> c >> d;
	result = (a + b + c + d) / 4;
	cout << "Srednia: " + to_string(result) + "\n";
}

//Funkcja pomocnicza do kalkulatora
float avg(int n) {
	bool is_zero = n == 0;
	if (is_zero) {
		cout << "Nie mozna dzielic przez 0 \n";
		return -1;
	}

	float sum = 0;
	float tmp = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		sum = sum + tmp;
	}
	return sum / n;

}

void Z5() {
	char option;
	float a, b;
	a = 0;
	b = 0;
	cout << "Z5 \n";
	cout << "Dzialania: +,-,*,/ \n";
	cout << "Podaj symbol działania: \n", cin >> option;

	if (option != 's') 
		cout << "Podaj a, b \n", cin >> a >> b;	
	
	string _a = to_string(a);
	string _b = to_string(b);

	switch (option)
	{
		case '+':
		{
			string result = to_string(a + b);
			cout << _a + " + " + _b + " = " + result;
			break;
		}
			
		case '-':
		{
			string result = to_string(a - b);
			cout << _a + " - " + _b + " = " + result;
			break;
		}
		case '*':
		{
			string result = to_string(a * b);
			cout << _a + " * " + _b + " = " + result;
			break;
		}
		case '/':
		{
			bool is_zero = b == 0;
			if (is_zero)
			{
				cout << "Nie mozna dzielic przez 0 \n";
				break;
			}
				
			string result = to_string(a / b);
			cout << _a + " / " + _b + " = " + result;
			break;
		}
		case 's':
		{
			int n;
			cout << "Podaj liczbe elementow: \n", cin >> n;
			float result = avg(n);
			cout << "Srednia: " + to_string(result) + '\n';
			break;
		}

		default:
			cout << "Bledna opcja \n";
			break;
	}
}


int main()
{

	Z1();
	Z2();
	Z3();
	Z4();
	Z5();
}

