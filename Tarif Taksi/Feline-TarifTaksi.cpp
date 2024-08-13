#include <iostream>

using namespace std;

int main(){
    int t, a, b, l, i, total;
    cin >> t;
    for(i=1;i<=t;i++){
        cin >> a >> b >> l;
        if (l < 2000){
            l = 2000;
        }
        total = a + (b * (l-2000)/100);
        cout << total << "\n";
    }
    return 0;
}
