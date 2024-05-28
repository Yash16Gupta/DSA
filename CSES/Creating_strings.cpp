#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

ll counter = 0;
vector<string> vec;

void swap(char &a, char &b){
    char x = a;
    a = b;
    b = x;
}

void permute(string str, ll l, ll r){
    if(l == r){
        counter++;
        vec.push_back(str);
        return;
    }
    else{
        for(int i=l;i<=r;i++){

            bool shouldSwap = true;
            for (int j = l; j < i; j++) {
                if (str[j] == str[i]) {
                    shouldSwap = false;
                    break;
                }
            }
            if (shouldSwap) {
                swap(str[l], str[i]);
                permute(str, l+1, r);
                swap(str[l], str[i]); 
            }
        }
    }
}

int main(){
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    permute(str, 0, str.length() - 1);
    cout << counter << endl;
    for(int i = 0; i < counter; i++){
        cout << vec[i] << endl;
    }
    return 0;
}
