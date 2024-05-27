#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    string dna;
    cin>>dna;
    ll max = 1;
    ll global_max = 1;
    char pointer1 = dna[0];
    for(int i=1;i<dna.length();i++){
        char pointer2 = dna[i];
        if(pointer1 == pointer2){
            max ++;
            pointer1 = pointer2;
            if(global_max<max){
                global_max = max;
            }
        }
        else{
            pointer1 = pointer2;
            max = 1;
        }
    }
    cout<<global_max;
    return 0;
}