#include <iostream>
using namespace std;

int main()
{
    int n, day;
    int a[50][50];
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; i < n;j++)
            cin >> a[i][j];
    }
    cin >> day;
    while(day)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[1][i]=='@')
            {
                if (a[0][i] != '#')
                {
                    a[0][i] = '@';
                }

            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[n][i] == '@')
            {
                if (a[n-1][i] != '#')
                {
                    a[n-1][i] = '@';
                }

            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][1] == '@')
            {
                if (a[i][0] != '#')
                {
                    a[i][0] = '@';
                }

            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][n] == '@')
            {
                if (a[i][n-1] != '#')
                {
                    a[i][n-1] = '@';
                }

            }
        }
        //摒弃四周边界的房间后，所有房间的传染更新状态
        for (int i = 1; i < n-1; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if (a[i][j] == '@')
                {
                    if (a[i - 1][j]!='#')
                    {
                        a[i - 1][j] = '@';
                    }
                    if (a[i][j - 1] != '#')
                    {
                        a[i][j - 1] = '@';
                    }
                    if (a[i][j + 1] != '#')
                    {
                        a[i][j + 1] = '@';
                    }
                    if (a[i + 1][j] != '#')
                    {
                        a[i + 1][j] = '@';
                    }


                }
            }
        }
        day = day - 1;
    }
    int num = 0;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            if(a[i][j]=='@')
                num++;
        }
    }
    cout << num << endl;
    return 0;
}