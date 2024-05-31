#include<iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll distinct = 1;
    ll temp = arr[0];
    for(ll i=1;i<n;i++){
        if(arr[i]!=temp){
            distinct++;
            temp = arr[i];
        }
        else{
            continue;
        }
    }
    cout<<distinct;
}