#include <iostream>
#include <string>

using namespace std;

void Z1() {
    cout << "Z1" << endl;
    float a = 0;
    float* pointer;
    pointer = &a;
    cout << "Adres: " << pointer << endl;
    cout << "Wartosc: " << *pointer << endl;

    pointer = NULL;
   
    delete  pointer;
   

 
    float b;
    float* pointer_a = &a;
    float* pointer_b = &b;
    cout << "Podaj a i b: \n", cin >> a >> b;
    cout << to_string(*pointer_a - *pointer_b) << endl;

    

    float c;
    cout << "Podaj a ,b i c: \n", cin >> a >> b >> c;
    pointer_a = &a;
    pointer_b = &b;
    float* pointer_c = &c;

    cout << to_string((*pointer_a + *pointer_b + *pointer_c) / 3);

    pointer_a = NULL;
    pointer_b = NULL;
    pointer_c = NULL;
    
    delete pointer_a, pointer_b, pointer_c;

}

void Z2() {
    cout << "Z2" << endl;

    int n = 10;
    int start{ 0 };
    int stop{ 0 };
    cout << "Podaj n: ", cin >> n;
    int* arr = new int[n];
    cout << "Adres pierwszego:  " << &arr[0] << endl;
    cout << "Adres czwartego:  " << &arr[3] << endl;
   
    cout << "Podaj poczatek przedzialu \n", cin >> start;
    cout << "Podaj koniec przedzialu \n", cin >> stop;


    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        int range = start - stop + 1;
        arr[i] = rand() % range + start;
    }

    for (int i = 0; i < n; i++)
    {
        cout << &arr[i] << endl;
    }

    delete arr;

}

void Z3() {
    cout << "Z3" << endl;

    int n = 10;
    cout << "Podaj n \n", cin >> n;

    int* arr = new int[n];

    float avg{ 0 };

    for (int i = 0; i < n; i++)
    {
        cout << "Podaj wartosc elementu o indeksie: " + to_string(i) << endl;
        int el;
        cin >> el;
        arr[i] = el;
        avg += el;
    }

    avg = avg / n;

    cout << "Srednia:" << to_string(avg) << endl;;
    cout << "Elementy wieksze od sredniej" << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > avg)
        {
            cout << arr[i] << endl;
        }

    }

    delete arr;
}

int square(int* pt)
{
    return (*pt) * (*pt);
}

void Z4()
{
    cout << "Z4" << endl;
    int n = 10;
    int* pointer = new int;
    cout << "Podaj n: \n", cin >> n;
    pointer = &n;
    cout << square(pointer) << endl;

}

float* power(float* l, int* p)
{
    
    float result;
    float* result_pointer = &result;

    

    if (*p == 0)
    {
        result = 1;
        return result_pointer;
    }
        
    if (*p > 0)
    {
        result = *l;
        for (int i = 1; i < *p; i++)
        {
            result *= *l;
        }
        return result_pointer;
    }
    else {
        result = *l;
        for (int i = 1; i < (-*p); i++)
        {
            result *= *l;
        }
        result = 1 / result;
        return result_pointer;
    }

  
    return result_pointer;

}

void Z5() {
    cout << "Z5" << endl;
    cout << "Podaj liczbe i potege: " << endl;
    float* l = new float;
    int* p = new int;
    cin >> *l >> *p;

    float* result = power(l, p);
    cout << "Wynik:" << *result << endl;

    delete l, p, result;
}

void Z6_helper(char* c, int* n)
{
    for (int i = 0; i < *n; i++)
    {
        cout << (*c);
    }
    
}

void Z6()
{
    cout << "Z6" << endl;
    cout << "Podaj liczbe i znak" << endl;
    char c;
    int n;
    cin >> c >> n;
    Z6_helper(&c, &n);
}

int Z7_1(int* a, int* b)
{
    return ((*a) > (*b)) ? *b : *a;
}
int* Z7_2(int* a, int* b)
{
    int* result_pointer = new int;
    *result_pointer = ((*a) > (*b)) ? *b : *a;
    return result_pointer;
}

void Z7()
{
    cout << "Z7" << endl;
    cout << "Podaj a i b" << endl;
    int a, b;
    cin >> a >> b;
    cout << "7.1: " << Z7_1(&a, &b) << endl;
    cout << "7.1: " << *Z7_2(&a, &b) << endl;
    
}


void Z8_swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void Z8() {
    cout << "Z8" << endl;
    cout << "Podaj a i b" << endl;
    int a, b;
    cin >> a >> b;
    cout << "Przed zamiana" << endl;;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    Z8_swap(&a, &b);
    cout << "Po zamianie" << endl;;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
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
