// Check number is prime or not
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cin>>num;
    if (num<2){
        cout<<"NO\n";
    }
    else if ((num==2) || (num==3)){
        cout<<"YES\n";
    }
    else if((num%2==0) || (num%3==0)){
        cout<<"NO\n";
    }
    else{
        for (int i=5;i<=sqrt(num);i+=2){
            if (num%i==0){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
    }
    return 0;
}