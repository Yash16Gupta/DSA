#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    for(ll k=1;k<=n;k++){
        ll total_ways = k*k*(k*k-1)/2 ;
        ll attacking_ways = 4*(k-1)*(k-2);
        ll ways = total_ways - attacking_ways;
        cout<<ways<<endl;;
    }
    return 0;
}