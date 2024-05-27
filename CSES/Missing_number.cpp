#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll sum1 = n*(n+1)/2;
    ll sum2 = 0;
    ll k = 0;
    for(int i=0;i<n-1;i++){
        cin>>k;
        sum2 += k;
    }
    ll missing = sum1 - sum2;
    cout<<missing;
    return 0;
}
