//from the array subtract the non contributing element'
//to find noncontributing reverse the sign of every elemnt

// {4,-4,6,-6,10,-11,12}
//max subarray sum=total sum of array-sum of non contributing elements

//{-4,4,-6,6,-10,11,-12}
#include <bits/stdc++.h>
#include <climits>
using namespace std;
int kadane(int arr[], int n)
{
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        maxsum = max(currsum, maxsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int wrapsum;
    int nonwrapsum;
    int totalsum = 0;
    nonwrapsum = kadane(arr, n);
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + kadane(arr, n);
    cout<<max(wrapsum,nonwrapsum);
    return 0;
}