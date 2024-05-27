#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t){
        t--;
        ll y,x;
        cin>>y>>x;
        ll ans = 0;
        ll middle = 0;
        if(y>x){
            middle = y*y - y + 1;
            if(y%2==0){
                ans = middle + (y-x);
            }
            else{
                ans = middle - (y-x);
            }
        }
        else{
            middle = x*x - x + 1;
            if(x%2==0){
                ans = middle + (y-x);
            }
            else{
                ans = middle - (y-x);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}