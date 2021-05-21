//     1
//    212
//   32123
//  4321234
// 543212345



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int val=i;
        for (int k = 1; k <= i; k++)
        {
            cout << val;
            val --;
        }
        val =2;
        for (int l = 1; l <= i - 1; l++)
        {
            cout << val;
            val ++;
        }
        cout << endl;
    }
    return 0;
}