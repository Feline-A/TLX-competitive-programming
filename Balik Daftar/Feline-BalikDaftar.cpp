#include <iostream>

using namespace std;

int main(){
    int a, b;
    int x[110];
    b = 0;
    while(cin >> a){
        x[b] = a;
        b++;
    }
    for (int i=b-1;i>=0;i--){
        cout << x[i] << "\n";
    }

    return 0;
}
