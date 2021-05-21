//     1 
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int s=1;s<=n-i;s++){
        cout<<" ";
        }
        int val=1;
        for(int j=1;j<=i;j++){
         cout<<val<<" ";
         val++;
        }
        cout<<endl;
    }
    return 0;
}