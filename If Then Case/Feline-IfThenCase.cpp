#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n < 10){
        cout << "satuan\n";
    }else if (n < 100){
        cout << "puluhan\n";
    }else if (n < 1000){
        cout << "ratusan\n";
    }else if (n < 10000){
        cout << "ribuan\n";
    }else if (n < 100000){
        cout << "puluhribuan\n";
    }
    return 0;
}
