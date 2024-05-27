#include <iostream>

using namespace std;
typedef long long ll;

// int main(){
//     ll n;
//     cin>>n;
//     ll no_of_five = 0;
//     ll temp;
//     for(int i=5;i<=n;i=i+5){
//         temp = i;
//         while(temp!=1){
//             if(temp%5==0){
//                 temp /= 5;
//                 no_of_five++;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     cout<<no_of_five;
//     return 0;
// }

int main(){
    ll n;
    cin>>n;
    ll no_of_five = 0;
    for(int i=5;(i<=n);i*=5){
        no_of_five += n/i;
    }
    cout<<no_of_five;
    return 0;
}