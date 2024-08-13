#include <iostream>

using namespace std;

int main(){
    int n;
    int jam, menit, detik;
    cin >> n;
    jam = n / 3600;
    menit = (n % 3600) / 60;
    detik = (n % 3600) % 60;
    cout << jam << "\n";
    cout << menit << "\n";
    cout << detik << "\n";
    return 0;
}
