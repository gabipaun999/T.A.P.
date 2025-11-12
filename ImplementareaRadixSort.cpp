#include <iostream>
using namespace std;

int getCifra(int numar, int poz) {
    return (numar / poz) % 10;
}

void countingSort(int v[], int n, int poz) {
    int rezultat[100];
    int frecventa[10] = { 0 };

    for (int i = 0; i < n; i++)
        frecventa[getCifra(v[i], poz)]++;

    for (int i = 1; i < 10; i++)
        frecventa[i] += frecventa[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        int cifra = getCifra(v[i], poz);
        rezultat[frecventa[cifra] - 1] = v[i];
        frecventa[cifra]--;
    }

    for (int i = 0; i < n; i++)
        v[i] = rezultat[i];
}

void radixSort(int v[], int n) {
    int maxVal = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > maxVal)
            maxVal = v[i];

    for (int poz = 1; maxVal / poz > 0; poz *= 10)
        countingSort(v, n, poz);
}

int main() {
    int n, v[100];
    cout << "Introdu numarul de elemente: ";
    cin >> n;

    cout << "Introdu elementele vectorului:\n";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    radixSort(v, n);

    cout << "Vectorul sortat este:\n";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
