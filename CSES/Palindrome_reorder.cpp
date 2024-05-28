#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main(){
    string str;
    cin>>str;
    vector<ll> freq(26,0);
    for(int i=0;i<str.size();i++){
        freq[str[i] - 'A'] += 1;
    }
    ll odd = 0;
    int palindrome = 0;
    int N = str.size();
    char ans[N+1];
    ans[N] = '\0';
    for(int i=0;i<26;i++){
        ll x = freq[i];
        if(x%2!=0){
            odd++;
        }
        if(odd>1){
            palindrome = 1;
            break;
        }
    }
    if(palindrome == 1) {
        cout<<"NO SOLUTION";
    }
    else{
        ll k = 0;
        for(int i=0;i<26;i++){
            ll x = freq[i];
            if(x%2==1){
                ans[N/2] = i + 'A';
                x -= 1;
            }
            while(x>1){
                ans[k] = i + 'A';
                ans[N-1-k] = ans[k];
                x -= 2;
                k++;
            }
        }

        cout<<ans;
    
    }

    return 0;
}