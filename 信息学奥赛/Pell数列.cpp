#include <iostream>
using namespace std;

int main()
{
    int a[1000000];
    a[1] = 1, a[2] = 2;
    int n;
    cin >> n;
    for (int i = 3; i <= n;i++)
    {
       a[i] = 2 * a[i - 1] + a[i - 2];
       if(i==n)
           cout << a[i] << endl;
    }
    return 0;
}