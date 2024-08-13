#include <iostream>
#include <string>
#include <cstring>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int n, m;
char mapp[100][100];

void floodFill(int x, int y){
	if (mapp[x][y] == ' '){
		mapp[x][y] = '.';
		if (x-1 >= 0){
			floodFill(x-1, y);
		}
		if (y+1 <= n+1){
			floodFill(x, y+1);
		}
		if (x+1 <= m+1){
			floodFill(x+1, y);
		}
		if (y-1 >= 0){
			floodFill(x, y-1);
		}
	}
}

int main(){
    FASTIO
    int t;
    string inp;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
		memset(mapp, ' ', sizeof(mapp));
        cin >> n >> m;
        //INPUT
        cin.ignore();
        for (int j = 1; j <= n; ++j) {
            getline(cin, inp);
            for (int k = 1; k <= m; ++k) {
                mapp[j][k] = inp[k-1];
            }
        }
        floodFill(0, 0);
		/*
        //OUTPUT
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= m; ++k) {
                cout << mapp[j][k];
            }
            cout << "\n";
        }
        */
        bool check = false;
        for(int j=1;j<=n && !check;j++){
            for(int k=1;k<=m;k++){
                if (mapp[j][k] == ' '){
                    check = true;
                }
            }
        }

        if (check == false){
            cout << "TIDAK\n";
        }
        else{
            cout << "YA\n";
        }
    }
    return 0;
}

