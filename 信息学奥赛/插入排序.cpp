#include <iostream>
using namespace std;
const int MAXN = 10001;
int main()
{
    int n, i, j, k;
    float temp, a[MAXN];
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    for (int i = 0; i < n;i++)
    {
        for (j = i - 1; i >= 0;j--)
            if(a[j] < a[i])
                break;
        if(j!=i-1)
        {
            temp = a[i];
            for (int k = i - 1; k > j;k--)
                a[k + 1] = a[k];
            a[k + 1] = temp;
        }
    }
    for (i = 0; i < n;i++)
        cout << a[i] << " ";
    return 0;
}