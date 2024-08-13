#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    int x[110];
    b = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        x[i] = a;
        b++;
    }
    for(int i=b;i>=1;i--){
        cout << x[i];
        if (i != 1){
            cout << ",";
        }
    }
    cout << "\n";
    return 0;
}
