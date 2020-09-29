#include <iostream>
using namespace std;

int a[100];
double b[100];

int main()
{
    int n, k;
    double temp;
    cin >> n >> k;
    for (int i = 0; i < n;i++)
        cin >> a[i] >> b[i];
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(b[i]<b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    for (int i = 0; i < k;i++)
    {
        if(i==k-1)
        {
            cout << a[i] << " " << b[i];
        }
    }
        return 0;
}