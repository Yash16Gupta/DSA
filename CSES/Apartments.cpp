#include<iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n];
    ll b[m];
    bool status[m];
    for(ll i=0;i<n;i++){
        cin>>a[i];

    }
    for(ll j=0;j<m;j++){
        cin>>b[j];
        status[j] = true;
    }
    sort(a,a+n);
    sort(b,b+m);
    ll settled = 0;
    ll i = 0;
    ll j = 0;
    while(i<n && j<m){
        if(b[j]<a[i]-k){
            j++;
        }
        else if(b[j]>a[i]+k){
            i++;
        }
        else{
            settled++;
            i++;
            j++;
            status[j] = false;
        }
    }
    cout<<settled;
    return 0;
}