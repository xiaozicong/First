#include <iostream>
using namespace std;

void qsort(int, int);
int a[101];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> a[i];
    qsort(1, n);
    for (int i = 0; i < n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

void qsort(int l,int r)
{
    int i, j, mid, temp;
    i = l, j = r;
    mid = a[(r + 1) / 2];
    do{
        while(a[i]<a[mid])
            i++;
        while(a[j]>a[mid])
            j--;
        if(i<=j)
        {
            temp = a[i];
            a[i] = a[j];
            
        }
    }
}