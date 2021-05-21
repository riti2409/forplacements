// sum=c1+c2+carry
#include<bits/stdc++.h>
using namespace std;
string addb(string a, string b){
    string result=" ";
    int i=a.length()-1;
    int j=b.length()-1;
    int carry=0;
    while(i>=0 ||j>=0){
        int sum=carry;
        if(i>=0){
            sum+=a[i--]-'0';
        }
        if(j>=0){
            sum+=a[j--]-'0';
        }
        carry=sum>1?1:0;
        result+=to_string(sum%2);
    }
    if(carry){
        result+=to_string(carry);
        
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){

    string a ,b;
    cin>>a>>b;
    cout<<addb(a,b)<<endl;
  
    return 0;
}