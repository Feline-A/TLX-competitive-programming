#include <iostream>

using namespace std;

int main(){
    int n, k, i;
    cin >> n >> k;
    for(i=1; i<=n; i++){
        if (i % k == 0){
            cout << "*";
        }
        else{
            cout << i;
        }
        if (i < n){
            cout << " ";
        }

    }
    cout << "\n";
    return 0;
}
