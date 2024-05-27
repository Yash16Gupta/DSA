#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;

    if(n*(n+1)/2 & 1){
        cout<<"NO";
    }

    else{
        cout<<"YES\n";
        vector<ll> set1,set2;

        if(n&1){
            n -= 1;
            for(int i=1;i<n/2;i=i+2){
                set1.push_back(i);
                set2.push_back(i+1);
                set1.push_back(n-i+1);
                set2.push_back(n-i);
            }
            set1.push_back(n/2);
            set1.push_back(n/2+1);
            set2.push_back(n+1);
        }
            
        else{
            for(int i=1;i<n/2;i=i+2){
                set1.push_back(i);
                set2.push_back(i+1);
                set1.push_back(n-i+1);
                set2.push_back(n-i);
            }
        }

        cout<<set1.size()<<endl;
        for(int i=0;i<set1.size();i++){
            cout<<set1[i]<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(int i=0;i<set2.size();i++){
            cout<<set2[i]<<" ";
        }
    }
    return 0;
}