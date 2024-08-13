#include <iostream>

using namespace std;

int main(){
    int n, d, a;
    int ans = -1;
    cin >> n >> d;
    for(int i=0;i<n;i++){
        cin >> a;
        if (d == a && ans == -1){
            ans = i;
        }

    }
    cout << ans << "\n";
    return 0;
}
