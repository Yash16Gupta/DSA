#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

void towerofhanoi(ll n,int a,int b,int c){
    if(n==1){
        cout<<a<<' '<<c<<endl;
        return;
    }
    else{
        towerofhanoi(n-1,a,c,b);
        cout<<a<<' '<<c<<endl;
        towerofhanoi(n-1,b,a,c);
    }

}
int main(){
    ll n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    towerofhanoi(n,1,2,3);
    return 0;
}