#include <iostream>

using namespace std;

int main(){
    int n, i, a, b;
    cin >> n;
    a = 0;
    b = 0;
    for(i=n;i>=1;i--){
        a = i * i;
        b += a;
    }
    cout << b << "\n";
    return 0;
}
