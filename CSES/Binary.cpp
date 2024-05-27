#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll N = pow(2,n);
    for(int i=0;i<N;i++){
        ll temp = N;
        for(int j=n-1;j>=0;j--){
            if(i%temp<temp/2){
                cout<<0;
            }
            else{
                cout<<1;
            }
            temp /= 2;
        }
        cout<<endl;
    }
    return 0;
}