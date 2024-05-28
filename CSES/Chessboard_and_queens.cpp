#include <iostream>

using namespace std;
char board[8][8];
int ans = 0;
bool cols[8] = {true, true, true, true, true, true, true, true};
bool diags1[15] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true};
bool diags2[15] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true};

void solver(int i, int &ans){
    if(i==8){
        ans++;
        return;
    }
    for(int j=0;j<8;j++){
        if(board[i][j] == '.' && diags1[i+j] && diags2[i-j+7] && cols[j]){
            cols[j] = diags1[i+j] = diags2[i-j+7] = false;
            solver(i+1,ans);
            cols[j] = diags1[i+j] = diags2[i-j+7] = true;
        }
    }

}

int main(){

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>board[i][j];
        }
    }
    solver(0,ans);
    cout<<ans;
    return 0;
}