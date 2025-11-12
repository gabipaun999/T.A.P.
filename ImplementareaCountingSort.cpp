#include <iostream>
using namespace std;

void countingSort(int v[], int n) {
    int rezultat[100];
    int frecventa[1000] = { 0 };

    int maxVal = v[0];
    for (int i = 1; i < n; i++)
        if (v[i] > maxVal)
            maxVal = v[i];

    for (int i = 0; i < n; i++)
        frecventa[v[i]]++;

    for (int i = 1; i <= maxVal; i++)
        frecventa[i] += frecventa[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        rezultat[frecventa[v[i]] - 1] = v[i];
        frecventa[v[i]]--;
    }

    for (int i = 0; i < n; i++)
        v[i] = rezultat[i];
}

int main() {
    int n, v[100];
    cout << "Introdu numarul de elemente: ";
    cin >> n;

    cout << "Introdu elementele vectorului:\n";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    countingSort(v, n);

    cout << "Vectorul sortat este:\n";
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
