#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no";
    cin>>n;
    
    // a<<n=a*2^n
    // a>>n = a/2^n
    cout<<(n>>1)<<endl;
    cout<<(n<<1)<<endl;
    return 0;
}