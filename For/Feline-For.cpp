#include <iostream>

using namespace std;

int main(){
    int n, b, i, a;
    cin >> n;
    a = 0;
    for(i=1;i<=n;i++){
        cin >> b;
        a = a + b;
    }
    cout << a << "\n";
    return 0;
}
