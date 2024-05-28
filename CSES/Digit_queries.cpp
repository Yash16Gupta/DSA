#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;

int main(){
    ll q;
    cin>>q;
    while(q){
        q--;
        ll n;
        cin>>n;
        ll length = 1; 
        ll count = 9;
        while (n > length * count) {
            n -= length * count;
            length++;
            count *= 10;
        }
        ll a = (n-1)/length;
        ll b = (n-1)%length;
        ll y = pow(10,length-1);
        ll num = y + a;
        string v = to_string(num);
        cout<<v[b]<<endl;
    }
    return 0;
}