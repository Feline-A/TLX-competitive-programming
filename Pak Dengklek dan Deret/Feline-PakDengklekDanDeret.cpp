#include <iostream>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    for (i=1; i<=n; i++){
        cout << i;
        if (i < n){
            cout << "+";
        }
    }
    cout << "\n";
    return 0;
}
