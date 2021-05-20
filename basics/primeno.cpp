#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"it is not prime"<<endl;
            break;
        }
    }
    if(i==n)
    cout<<"prime no"<<endl;
    return 0;
}