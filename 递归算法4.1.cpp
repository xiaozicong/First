#include <iostream>
using namespace std;
int fac(int);

int main()
{
    int t;
    cin >> t;
    cout << "sum=" << fac(t) << endl;
    return 0;
}

int fac(int n)
{
    if (n == 1)
        return 1;
    return (fac(n - 1) + n);
}