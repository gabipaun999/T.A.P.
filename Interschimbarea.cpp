#include <iostream>
using namespace std;

int main() {
    int n, a[100], i, j, aux;

    cout << "Introduceti numarul de elemente: ";
    cin >> n;

    cout << "Introduceti elementele sirului: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] > a[j]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }

    cout << "Sirul ordonat este: ";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
