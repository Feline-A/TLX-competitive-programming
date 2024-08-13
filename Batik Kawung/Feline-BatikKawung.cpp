#include <iostream>

using namespace std;

int main(){
    int k, a, i, j;
    char c;
    cin >> k >> c >> a;
    for(i=0;i<=k-1;i++){
        for(j=0;j<=k-1;j++){
            if(j == i || i + j == k - 1){
                cout << a;
            }
            else{
                cout << c;
            }
        }
    cout << "\n";
    }
    return 0;
}
