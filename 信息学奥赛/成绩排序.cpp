#include <iostream>
using namespace std;

int a[100], r[100];

void msort(int s,int t)
{
    if(s==t)
        return;
    int mid = (s + t) / 2;
    msort(s, mid);
    mosort(mid + 1, t);
    int i = s, j = mid + 1, k = s;
    while(i<=mid && j<=t)
    {
        if(a[i]<a[j])
        {
            r[k] = a[i];
            k++;
            i++;
        }
        else
        {
            r[k]
        }
    }
}