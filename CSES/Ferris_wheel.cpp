#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n,x;
    cin>>n>>x;
    ll w[n];
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    sort(w,w+n);
    ll gondola = 0;
    ll i = 0;
    ll j = n-1;
    while(i<=j){
        if(w[i]+w[j]<=x){
            i++;
        }
        j--;
        gondola++;
    }
    cout<<gondola;
    return 0;
}