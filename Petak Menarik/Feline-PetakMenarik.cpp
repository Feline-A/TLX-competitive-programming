#include <iostream>
#include <cstring>

using namespace std;

int dt[110][110];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, k, resX, resY;
    bool found;
    cin >> n >> m >> k;
    memset(dt, -1, sizeof(dt));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> dt[i][j];
        }
    }
    resX = resY = 0;
    found = false;
    for (int j = 1; j <= m && !found; ++j) {
        for (int i = 1; i <= n && !found; ++i) {
            if (abs(dt[i-1][j]*dt[i][j+1]*dt[i+1][j]*dt[i][j-1])
                == k){
                resX = i; resY = j;
                found = true;
            }
        }
    }
    cout << resX << " " << resY << "\n";
    return 0;
}
