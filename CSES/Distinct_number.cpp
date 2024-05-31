#include <iostream>

using namespace std;
typedef long long ll;

bool unique(ll arr[], ll i, ll temp){
    int flag = 0;
    for(ll j=0;j<i;j++){
        if(arr[j]==temp){
            flag = 1;
            break;
        }
        else{
            continue;
        }
    }
    if(flag==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    ll distinct = 1;
    ll idx = 0;
    cin>>arr[idx];
    for(ll i=1;i<n;i++){
        ll temp = 0;
        cin>>temp;
        if(unique(arr, i, temp)){
            distinct++;
            idx++;
            arr[idx] = temp;
        }
        else{
            continue;
        }
    }
    cout<<distinct;
    return 0;
}