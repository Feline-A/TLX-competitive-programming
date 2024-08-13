#include <iostream>

using namespace std;

int main(){
    int n, num, res;
    cin >> n;
    while (n--){
        res = 0;
        cin >> num;
        while(num>0){
            res = (res * 10) + (num % 10);
            num /= 10;
        }
        cout << res << "\n";
    }
    return 0;
}
