#include <iostream>
using namespace std;
int v[100], n, i, x, ok;
int main()
{
    cout << "Scrieti nr de elemente din sir: ";`
    cin >> n; 
    cout << "Scrieti elementele din sir: ";
    for (i = 1; i <= n; i++)
        cin >> v[i]; 
    cout << "Scrieti elementul pe care vreti sa il gasiti: ";
    cin >> x; 
    ok = 0; 
    for (i = 1; i <= n; i++)
    {
        if (v[i] == x)
            ok = 1;
    }
    if (ok == 1)
        cout << "gasit";
    else
        cout << "nu exsita";
    return 0;
}