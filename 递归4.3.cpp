#include <iostream>
using namespace std;
int k = 0, n;
void move(int n,char a,char c,char b)
{
    if(n==0)
        return;
    move(n - 1, a, b, c);
    k++;
    cout << k << ":form " << a << "-->" << c << endl;
    move(n - 1, b, c, a);

}
int main()
{
    cout << "n=";
    cin >> n;
    move(n, 'a', 'c', 'b');
    return 0;
}