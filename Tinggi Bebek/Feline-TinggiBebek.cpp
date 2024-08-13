#include <iostream>

using namespace std;

int main(){
    int a, b, c, rendah, tinggi, menengah;
    cin >> a;
    cin >> b;
    cin >> c;
    rendah = min(a, min(b, c));
    tinggi = max(a, max(b, c));
    menengah = (a + b + c) - rendah - tinggi;
    cout << rendah << "\n" << tinggi << "\n" << menengah << "\n";
    return 0;
}
