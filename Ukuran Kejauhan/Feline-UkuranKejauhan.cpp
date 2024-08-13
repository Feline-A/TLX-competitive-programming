#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, num, ans;
    cin >> n;
    while(n--){
        cin >> num;
        ans = (int) sqrtl(num);
        cout << ans << "^2 = " << ans*ans << "\n";
    }
    return 0;
}
