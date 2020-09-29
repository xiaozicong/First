#include <iostream>
using namespace std;

int main()
{
    long long a[101] = {0}, b[101] = {0}, i, j, x, y, z;
    cin >> x >> y >> z;
    for (int i = 0; i <= x;i++)
    {
        a[i] = 1;
        b[i] = 0;
    }
    for (int i = x + 1; i <= z + 1;i++)
    {
        b[i] = y * a[i - x];//y为成虫产卵个数，i-x表示间隔x个月成虫可以产卵
        a[i] = a[i - 1] + b[i - 2];
    }
    cout << a[z + 1] << endl;
    return 0;
}