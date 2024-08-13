#include <iostream>

using namespace std;

int n;
int num[15];
bool numUse[15];

bool checkPermute(int x, int y, int z){
    if ((y > x && y > z) || (y < x && y < z)){
        return true;
    }
    return false;
}

void permute(int digit){
    if (digit > n){
        for(int i=1;i<=n;i++){
            cout << num[i];
        }
        cout << "\n";
    }
    else{
        for (int i = 1; i <= n; ++i) {
            if (numUse[i] == false){
                num[digit] = i;
                if (digit > 2 && !checkPermute(num[digit-2], num[digit-1], num[digit])){
                    continue;
                }
                numUse[i] = true;
                permute(digit+1);
                numUse[i] = false;
            }
        }
    }
}

int main(){
    cin >> n;
    permute(1);
    return 0;
}
