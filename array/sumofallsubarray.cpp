//5
// 1 2 0 7 2
//o/p-> 1,3,3,10,12,2,2,9,11,0,7,9,7,9,2,


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 int currsum=0;
    for (int i = 0; i < n; i++)
    {
        currsum=0;
        for (int j = i; j < n; j++)
        {
          currsum+=arr[j];
          cout<<currsum<<",";

        }
    }

    return 0;
}