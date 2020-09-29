#include <iostream>
using namespace std;

int main()
{
    int n, i, a[100];
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    while (cin >> n && n != 0)
    {
        if (n == 1)
            cout << a[1] << endl;
        if (n == 2)
            cout << a[2] << endl;
        if (n == 3)
            cout << a[3] << endl;
        if (n >= 4)
        {
            for (i = 4; i <= n; i++)
            {
                a[i] = a[i - 1] + a[i - 2] + a[i - 3];
                cout << a[i] << endl;
            }
            
        }
    }
    return 0;
}