#include<bits/stdc++.h>
using namespace std;
int main(){
    int date;
    int pocktmny=3000;
    for(date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocktmny==0){
            break;
        }
        cout<<"you can go on odd day"<<date<<endl;
        pocktmny-=300;
        cout<<"curr pockmny is"<<pocktmny<<endl;

    }
    return 0;
}