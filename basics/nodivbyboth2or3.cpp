
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"div by both 2 and 3"<<endl;

    }
    else if(n%2==0){
        cout<<"divisble by 2 only"<<endl;
    }
    else if(n%3==0){
        cout<<"divisible by 3 only"<<endl;
    }
    else{
        cout<<"divisible by none"<<endl;
    }
    return 0;
}