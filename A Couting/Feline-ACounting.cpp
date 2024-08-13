#include <iostream>

using namespace std;

int main(){
    int t;
    long long x, y, n, res;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> x >> y;

        n = (y-x+12);

        cout << "Case #" << i << ": ";
        if ( (x > y) || (n % 12 != 0)){
            cout << "impossible\n";
        }
        else{
            n = n/12;
            res = x + (n-1)*7;
            cout << res << "\n";
        }
    }
    return 0;
}
