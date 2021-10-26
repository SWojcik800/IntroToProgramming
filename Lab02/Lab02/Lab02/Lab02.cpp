#include <iostream>
#include <string>
#include <map>
#include <math.h>
#include <array>
#include <algorithm>

using namespace std;

void Z1()
{
    float a, b, x;
    cout << "Podaj a i b" << endl, cin >> a >> b;

    if (a == 0)
    {
        cout << "A nie moze byc rowne 0" << endl;
        return;
    }

    x = (-b) / a;
    cout << "Wynik " + to_string(x) << endl;
}
void Z2()
{
    float a, b, c, d;
    cout << "Podaj a, b i c" << endl, cin >> a >> b >> c;
    d = b * b - 4 * (a * c);
    map<bool, string> cases;
    cases[d > 0] = "Dwa rozwiazania";
    cases[d < 0] = "Brak rozwiazan";
    cases[d == 0] = "Jedno rozwiazanie";
    cout << cases[true] << endl;
}

void Z3()
{
    float a, b, c, d;
    cout << "Podaj a, b i c" << endl, cin >> a >> b >> c;
    d = b * b - 4 * (a * c);

    if (d < 0)
    {
        cout << "Brak rozwiazan" << endl;
        return;
    }

    if (a == 0)
    {
        cout << "A nie moze byc rowne 0" << endl;
        return;
    }

    float x1, x2;
    x1 = -b - sqrt(d) / (2 * a);
    x2 = -b + sqrt(d) / (2 * a);
    cout << "x1: " + to_string(x1) + "\n" + "x2: " + to_string(x2) << endl;

}


//Funkcje pomicnicze do Z4
float Z4_a(float x)
{
    map<bool, float> cases;
    cases[x > 0] = 2 * x;
    cases[x == 0] = 0;
    cases[x < 0] = (-3) * x;
    return cases[true];
}
float Z4_b(float x)
{
    map<bool, float> cases;
    cases[x >= 1] = x * x;
    cases[x < 1] = x;
    return cases[true];
}
float Z4_c(float x)
{
    map<bool, float> cases;
    cases[x > 2] = 2 + x;
    cases[x == 2] = 8;
    cases[x < 2] = x - 4;
    return cases[true];
}

void Z4()
{
    float xa, xb, xc;
    cout << "Podaj xa, xb i xc: ", cin >> xa >> xb >> xc;
    cout << "a(x) = " + to_string(Z4_a(xa)) << endl;
    cout << "b(x) = " + to_string(Z4_b(xb)) << endl;
    cout << "c(x) = " + to_string(Z4_c(xc)) << endl;
}




void Z5()
{
    float x, y, z;
    cout << "Podaj x, y i z" << endl, cin >> x >> y >> z;
    float arr[3] = { x, y, z };
    
    //Sortowanie malejąco (biblioteka algorithm)
    sort(arr, arr + 3);

    for (float item : arr)
        cout << to_string(item)+" ";
    

}

void Z6()
{
    bool c1, c2;
    cout << "Czy pada deszcz? (1 lub 0)" << endl, cin >> c1;
    cout << "Czy jest autobus? (1 lub 0)" << endl, cin >> c2;

    if (c1 && c2)
    {
        cout << "Wez parasol" << endl;
        cout << "Dostaniesz sie na uczelnie" << endl;
        return;
    }
    if (c1 && !c2)
    {
        cout << "Nie dostaniesz sie na uczelnie" << endl;
        return;
    }
    if (!c1 && c2)
    {
        cout << "Dostaniesz sie na uczelnie" << endl;
        cout << "Milego dnia i pieknje pogody" << endl;
        return;
    }
}

void Z7()
{
    bool c1, c2;
    cout << "Czy jest znizka na samochod? (1 lub 0)" << endl, cin >> c1;
    cout << "Czy otrzymales podwyzke? (1 lub 0)" << endl, cin >> c2;

    if (!c1 || c2) 
    {
        cout << "Mozesz kupic samochod!" << endl;
        cout << "Znizki na samochod nie ma :(" << endl;
        return;
    }
    if (!c1 || !c2)
    {
        cout << "Zakup samochodu trzeba odlozyc na pozniej"<< endl;
        cout << "Znizki na samochod nie ma"<< endl;
        return;
    }
    if (c1 || c2) {
        cout << "Mozesz kupic samochod" << endl;
        return;
    }
}

void Z8() {
    char option;
    float a, b;
    a = 0;
    b = 0;
    cout << "Dzialania: +,-,*,/, % \n";
    cout << "Podaj symbol dzialania: \n", cin >> option;

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
    case '%':
    {
        
        cout << "Reszta: " + to_string((int)a % (int)b) << endl;
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
    Z6();
    Z7();
    Z8();
}

