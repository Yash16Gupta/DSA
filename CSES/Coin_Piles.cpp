#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll t,a,b;
    cin>>t;
    while(t){
        t--;
        cin>>a>>b;                 // a = 2x + y ; b = x + 2y
        if((2*a-b)%3==0 && (2*b-a)%3==0 && (2*a-b)>=0 && (2*b-a)>=0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}