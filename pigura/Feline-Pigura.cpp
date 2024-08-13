#include <iostream>

using namespace std;

int main(){
    int k, d, n, i, j;
    char c;

    cin >> k >> c >> d;
    if (k % 2 != 0){
        n = (k-1) / 2;
    }
    for(i=0;i<=k-1;i++){
        for(j=0;j<=k-1;j++){
            if(i == 0 || j == 0 || i == k-1 || j == k-1){
                cout << d;
            }
            else if (i == n && j == n){
                cout << "*";
            }
            else{
                cout << c;
            }
        }
        cout << "\n";
    }
    return 0;
}
