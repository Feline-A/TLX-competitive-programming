#include <iostream>

using namespace std;

int angka[1010];

int main(){
    int n, x;
    cin >> n >> x;
    for (int i=1;i<=n;i++){
        cin >> angka[i];
    }

    int minn = abs(angka[1] - x);
    int ans = angka[1];
    for (int i=1;i<=n;i++){
        if (minn > abs(angka[i]-x)){
            minn = abs(angka[i]-x);
            ans = angka[i];
        }
        else if (minn == abs(angka[i]-x) && ans > angka[i]){
                minn = abs(angka[i]-x);
                ans = angka[i];
            }
    }
    cout << ans << "\n";
    return 0;
}
