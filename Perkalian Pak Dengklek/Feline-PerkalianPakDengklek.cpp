#include <iostream>

using namespace std;

int main(){
    int num1[15], num2[15];
    int sz1, sz2, a, b, res;
    cin >> a >> b;
    sz1 = 0;
    while (a > 0){
        sz1++;
        num1[sz1] = a % 10;
        a /= 10;
    }
    sz2 = 0;
    while (b > 0){
        sz2++;
        num2[sz2] = b % 10;
        b /= 10;
    }
    res = 0;
    for (int i=1;i<=sz1;i++){
        for (int j=1;j<=sz2;j++){
            res += num1[i] * num2[j];
        }
    }
    cout << res << "\n";
    return 0;
}
