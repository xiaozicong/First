#include <iostream>
#include <cstring>
using namespace std;
      
int main()
{
    int n, r, s[10], a[10];
    cin >> n >> r;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    memset(s, 0, sizeof(s));
    int j = 0, minx = 0;
    for (int i = 1; i <= n; i++)
    {
        j++;
        if (j == r + 1)
            j = 1;
        s[j] += a[i];
        minx += s[j];
    }
    cout << minx << endl;
    return 0;
}