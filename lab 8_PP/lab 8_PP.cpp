// lab 8_PP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Zadanie 2.1
    const int size = 3;
    int tab[size] = { 1,2,3 };
    for (int i = 0; i < size; i++) {
        cout << i << " Wartoœæ: " << tab[i] << endl;
    }
    int* tab2[size];
    for (int i = 0; i < size; i++) {
        tab2[i] = &tab[i];
        cout << i << " Wartoœæ: " << *tab2[i] << endl;
    }
}

