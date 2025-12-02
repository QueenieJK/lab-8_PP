// lab 8_PP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Zadanie 2.1
    /*const int size = 3;
    int tab[size] = { 1,2,3 };
    for (int i = 0; i < size; i++) {
        cout << i << " Wartoœæ: " << tab[i] << endl;
    }
    int* tab2[size];
    for (int i = 0; i < size; i++) {
        tab2[i] = &tab[i];
        cout << i << " Wartoœæ: " << *tab2[i] << endl;
    }*/
	//Zadanie 2.2
	/*const int size = 3;
	int tab[size] = { 1,2,3 };
    int* p;
    p = &tab[0];
    for (int i = 0; i < size; i++) {
        cout << p << " Wartoœæ: " << *p++ << endl;
	}*/
    //Zadanie 1:
    /*int x;
    int* ptr;
    ptr = &x;
	cout << "Podaj wartoœæ: ";
    cin >> *ptr;
	cout << "Zmienna: " << x << endl;
	cout << "WskaŸnik: " << *ptr << endl;
	return 0;*/
	//Zadanie 2:
    /*int jakastablica[10];
    int* wsk;
    for (int i = 0; i < 10; i++) {
        jakastablica[i] = i;
    }
    cout << "Tablica: " << endl;
    for (int i = 0; i<10; i++) {
        cout << jakastablica[i] << " ";
	}
    cout << endl;
	wsk = jakastablica;
	wsk = &jakastablica[0];
    wsk += 6;
    *wsk = 77;
	cout << "Tablica po zmianie: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << jakastablica[i] << " ";
    }
	cout << endl;*/
	//Zadanie 2.1:
	int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = 0;
    }
    int* wsk;
    wsk = &tab[0];
    for (int i = 0; i < 10; i++) {
        *wsk = 9;
        wsk++;
    }
	cout << "Tablica po zmianie: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
	}

}

