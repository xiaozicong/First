#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    int len;
    while (cin>>s)
    {
        /* code */
        len = s.size();
        bool ok = false;
        int num = 0;
        for (int k = 2; k <= 9;k++)
        {

            for (int i = 0; i < len;i++)
            {
                num = (num * 10 + s[i] - '0') % k;
            }
            if(num==0)
            {
                cout << k << " ";
                ok = true;
            }
        }
        if(ok==false)
            cout << "none";
    }
    
}