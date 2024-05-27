#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll b;
    cin>>b;
    ll mod = 1e9+7;
    ll result = 1;
    ll a = 2;
    while (b) {
        if (b%2 != 0)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b /=  2;
        }
    cout<<result;
    return 0;
}