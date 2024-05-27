#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    cin>>arr[0];
    ll counter = 0;
    for(int i=1;i<n;i++){
        cin>>arr[i];
        while(arr[i]<arr[i-1]){
            arr[i]++;
            counter++;
        }
    }
    cout<<counter;
    return 0;
}