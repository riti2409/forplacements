//     *****
//    *****
//   *****
//  *****
// *****




#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int s=1; s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}