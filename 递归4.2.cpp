#include <iostream>
using namespace std;
int a[11];
void search(int, int, int);
int main()
{
    int k, x, L = 1, R = 10;
    cout << "输入十个从大到小的数" << endl;
    for (k = 1; k <= 10; k++)
        cin >> a[k];
    cin >> x;
    search(x, L, R);
    system("pause");
    return 0;
}

void search(int x, int top, int bot)
{
    int mid;
    if (top <= bot)
    {
        mid = (top + bot) / 2;
        if (x == a[mid])
            cout << "YES" << endl;
        else if (x >= a[mid])
            search(x, top, mid - 1);
        else
            search(x, mid + 1, bot);
    }
    else
        cout << "NO" << endl;
}