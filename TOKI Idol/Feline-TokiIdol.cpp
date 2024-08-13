#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a >= 50 && b >= 50 && c >= 50 && a + b + c >= 200){
        cout << "Lolos\n";
    }
    else{
        cout << "Tidak Lolos\n";
    }
    return 0;
}
