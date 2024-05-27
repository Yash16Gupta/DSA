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
        ll flag = 0;
        ll flag1 = 0 ;
        for(int j=n-1;j>=0;j--){

            if(i%temp<temp/2){
                flag = 0;
            }
            else{
                flag = 1;
            }
            if(flag1 == 0){
                cout<<flag;
            }
            else{
                cout<<!flag;
            }
            flag1 = flag;
            temp /= 2;
        }
        cout<<endl;
    }
    return 0;
}