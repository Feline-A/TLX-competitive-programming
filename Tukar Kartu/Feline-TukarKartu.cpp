#include <iostream>

using namespace std;

int dt[1010];
int n;
int ans = 0;

void bubbleSort(){
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n-i; ++j) {
            if (dt[j] > dt[j+1]){
                swap(dt[j], dt[j+1]);
                ans++;
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    bubbleSort();
    cout << ans << "\n";
    return 0;
}

