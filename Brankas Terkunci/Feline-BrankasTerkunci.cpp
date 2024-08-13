#include <iostream>

using namespace std;

int n, k;
int num[15];

void permute(int digit){
    if (digit >= k){
        for(int i=0;i<k;i++){
            cout << num[i] << " ";
        }
        cout << "\n";
    }
    else{
        for(int i=num[digit-1]+1;i<=n;i++){
            num[digit] = i;
            permute(digit+1);
        }
    }
}

int main(){
    cin >> n >> k;
    permute(0);
    return 0;
}
