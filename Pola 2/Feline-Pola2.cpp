#include <iostream>

using namespace std;

int main(){
    int n, i, j, z;
    cin >> n;
    for (i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            cout << " ";
        }
        for(z=1;z<=i;z++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
