#include <iostream>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;

    if(n<=3 && n>1){
        cout<<"NO SOLUTION";
    }
    
    else{
        ll arr[n];
        ll j = 0;
        ll k = 0;
        for(int i=1;i<n+1;i++){
            if(i%2==0){
                arr[j] = i;
                j++;
            }
            else{
                if(n%2==0){
                    arr[n/2+k] = i;
                    k++;
                }
                else{
                    arr[(n-1)/2+k] = i;
                    k++;
                }
            }
        }    
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}