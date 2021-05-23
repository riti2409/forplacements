// Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.

// For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. Notice that multiple kids can have the greatest number of candies.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> candies;
    int n;
    cout<<"size of vector: ";
    cin >> n;
    int t;
    cout<<"enter "<<n<<" numbers:";
    for (int i = 1; i <= n; i++)
    {
        
        cin>>t;
        candies.push_back(t);
    }
    vector<int> myarr;
    int extraCandies;
    cout<<"extracandies: ";
    cin >>extraCandies;
    int max = *max_element(candies.begin(), candies.end());
    for (int i = 0; i < candies.size(); i++)
    {
        if ((extraCandies + candies[i]) >= max)
        {
            myarr.push_back(1);
        }
        else
        {
            myarr.push_back(0);
        }
    }
    cout<<"final array: ";
    for (auto &it :myarr)
    {
        
        cout <<it << " ";
    }
    return 0;
}
