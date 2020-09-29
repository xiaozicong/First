#include <iostream>
using namespace std;
int a[11];
int fib(int);

int main()
{
    int m;
    cin >> m;
    cout << "fib(" << m << ")=" << fib(m);
    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return (fib(n - 1) + fib(n - 2));
}