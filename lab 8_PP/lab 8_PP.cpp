#include <iostream>
#include <cstdlib>  
#include <ctime> 
using namespace std;
//Zadanie 4:
/*float srednia(float* tab, int n) {
    if (n == 0) return 0.0f; 
    float suma = 0.0f;
    for (int i = 0; i < n; i++) {
        suma += tab[i];
    }
    return suma / n;
}*/
//Zadanie 5:
/*float roznicaMaxMin(float* tab, int n) {
    if (n <= 0) return 0.0f;

    float maxEl = tab[0];
    float minEl = tab[0];

    for (int i = 1; i < n; i++) {
        if (tab[i] > maxEl) maxEl = tab[i];
        if (tab[i] < minEl) minEl = tab[i];
    }
    return maxEl - minEl; }*/
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
    /*int tab[10];
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
    }*/
    //Zadanie 3:
    /*int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    if (n <= 0) {
        cout << "Rozmiar tablicy musi byc dodatni!" << endl;
        return 1;
    }
    float* tab = new float[n];
    for (int i = 0; i < n; i++) {
        tab[i] = static_cast<float>(i);
    }
    float* wsk = tab + n - 1;
    cout << "Przechodzenie wskaźnikiem od końca do początku:" << endl;
    while (1) {
        cout << *wsk << " ";  
        if (*wsk == 0.0f)     
            break;
        wsk--;                
    }
    cout << endl;
    delete[] tab;
    return 0;*/
    //Zadanie 4:
    /*int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;

    if (n <= 0) {
        cout << "Rozmiar tablicy musi być dodatni!" << endl;
        return 1;
    }
    float* tab = new float[n];
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < n; i++) {
        tab[i] = static_cast<float>(rand() % 100);
        cout << tab[i] << " ";  
    }
    cout << endl;
    float avg = srednia(tab, n);
    cout << "Srednia arytmetyczna: " << avg << endl;
    delete[] tab;

    return 0;*/
    //Zadanie 5:
    /*int n;
    cout << "Podaj rozmiar tablic: ";
    cin >> n;

    if (n <= 0) {
        cout << "Rozmiar musi byc dodatni!" << endl;
        return 1;
    }
    float* tab1 = new float[n];
    float* tab2 = new float[n];
    float* suma = new float[n];
    float* iloczyn = new float[n];

    srand(static_cast<unsigned int>(time(0)));
    cout << "Tablica 1: ";
    for (int i = 0; i < n; i++) {
        tab1[i] = static_cast<float>(rand() % 100);
        cout << tab1[i] << " ";
    }
    cout << endl;

    cout << "Tablica 2: ";
    for (int i = 0; i < n; i++) {
        tab2[i] = static_cast<float>(rand() % 100);
        cout << tab2[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        suma[i] = tab1[i] + tab2[i];
        iloczyn[i] = tab1[i] * tab2[i];
    }

    cout << "Suma odpowiadajacych sobie elementow: ";
    for (int i = 0; i < n; i++)
        cout << suma[i] << " ";
    cout << endl;

    cout << "Iloczyn odpowiadajacych sobie elementow: ";
    for (int i = 0; i < n; i++)
        cout << iloczyn[i] << " ";
    cout << endl;
    cout << "Roznica max-min tablicy 1: " << roznicaMaxMin(tab1, n) << endl;
    cout << "Roznica max-min tablicy 2: " << roznicaMaxMin(tab2, n) << endl;
    delete[] tab1;
    delete[] tab2;
    delete[] suma;
    delete[] iloczyn;

    return 0;*/

}
