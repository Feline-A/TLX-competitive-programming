#include <iostream>

using namespace std;

int main(){
    int a, b, c, k;
    int kecil, besar, tengah;
    cin >> a >> b >> c >> k;
    besar = max(a, max(b, c));
    kecil = min(a, min(b, c));
    tengah = (a + b + c) - besar - kecil;
    if (k == 0){
        cout << besar << " " << tengah << " " << kecil << "\n";
    }
    else if(k == 1){
        cout << kecil << " " << tengah << " " << besar << "\n";
    }
    return 0;
}
