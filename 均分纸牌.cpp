#include <iostream>
using namespace std;

int main()
{
    int ave, step, n, i, j, a[1000];
    cin >> n;
    ave = 0, step = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ave += a[i];
    }
    ave /= n;
    for (int i = 1; i <= n; i++)
        a[i] -= ave;
    i = 1, j = n;
    while (a[i] == 0 && i < n)
        i++;
    while (a[j] == 0 && j > 1)
        j--;
    while(i<j)
    {
        a[i + 1] += a[i];
        a[i] = 0;
        step++;
        i++;
        while(a[i]==0&& i<j)
            i++;
    }
    cout << step << endl;
    return 0;
}