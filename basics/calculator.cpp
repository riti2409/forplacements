#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the numbers: "<<endl;
    cin>>n1>>n2;
    char op;
    cout<<"enter the operation:";
    cin>>op;
    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break;
         case '-':
        cout<<n1-n2<<endl;
        break;
         case '*':
        cout<<n1*n2<<endl;
        break;
         case '/':
        cout<<n1/n2<<endl;
        break;
        default:
        cout<<"enter something else";
    }
    return 0;
}