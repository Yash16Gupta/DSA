#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
typedef long long ll;

ll solver(vector<ll> weights,ll start,ll end,ll sum1,ll sum2){
    if(start==end){
        return abs(sum1-sum2);
    }
    ll group1 = solver(weights,start+1,end,sum1+weights[start],sum2);
    ll group2 = solver(weights,start+1,end,sum1,sum2+weights[start]);
    return min(group1,group2);
}

int main(){
    ll n;
    cin>>n;
    vector<ll> weights(n);
    for(ll i=0;i<n;i++){
        cin>>weights[i];
    }
    cout<<solver(weights,0,n,0,0);
    return 0;
}

