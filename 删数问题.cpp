#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int s, len;
    char n[241];
    gets(n);
    cin >> s;
    len = strlen(n);
    for (int i = 1; i <= s; i++)
    {
        for (int j = 0; j < s; j++)
            if (n[j] > n[j + 1])
            {
                for (int k = j; k < len - 1; k++)
                    n[k] = n[k + 1];
                break;
            }
        len--;
    }
    int j = 0, m = len;
    while (n[j] == '0' && m > 1)
    {
        j++;
        m--;
    }
    for (int i = j; j < len; i++)
        cout << n[i];
    return 0; 
}