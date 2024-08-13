#include <iostream>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int m, n, b, k;
int res;
int mapp[30][30];
bool visit[30][30] = {};
int pathX[] = {-1, 0, 1, 0};
int pathY[] = {0, 1, 0, -1};


void dfs(int x, int y){
    if (mapp[x][y] == mapp[b][k]){
        int newX, newY;
        res++;
        visit[x][y] = true;
        for (int i = 0; i < 4; ++i) {
            newX = x+pathX[i]; newY = y+pathY[i];
            if (newX >= 0 && newX < m && newY >= 0 && newY < n
                && !visit[newX][newY]){
                dfs(newX, newY);
            }
        }
        /*
        //TOP
        if (x-1 >= 0 && !visit[x-1][y]){
            dfs(x-1, y);
        }
        //RIGHT
        if (y+1 < n && !visit[x][y+1]){
            dfs(x, y+1);
        }
        //BOTTOM
        if (x+1 < m && !visit[x+1][y]){
            dfs(x+1, y);
        }
        //LEFT
        if (y-1 >= 0 && !visit[x][y-1]){
            dfs(x, y-1);
        }
         */
    }
}

int main(){
    FASTIO
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mapp[i][j];
        }
    }
    cin >> b >> k;
    res = 0;
    dfs(b, k);
    cout << res*(res-1) << "\n";
    return 0;
}
