#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=1;
    int j=2;
    int k;
    
    k=i+j+ ++i + j++ + ++i + ++j;
    cout<<k;
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}