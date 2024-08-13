#include <iostream>

using namespace std;

int x[1010], y[1010];
//int student[1010][2]; //0 = X | 1 = Y

int power(int num, int d){
    int res = num;
    for(int i=1;i<d;i++){
        res *= num;
    }
    return res;
}

int matchs(int i, int j, int d){
    return power(abs(x[j] - x[i]), d) + power(abs(y[j] - y[i]), d);
}

int main(){
    int n, d, minn, maxx, temp;
    cin >> n >> d;
    for(int i=1;i<=n;i++){
        cin >> x[i] >> y[i];
    }
    minn = maxx = matchs(1, 2, d);
    for (int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            //cout << i << " MATCH " << j << "\n";
            temp = matchs(i, j, d);
            minn = min(minn, temp);
            maxx = max(maxx, temp);
        }
    }
    cout << minn << " " << maxx << "\n";

    return 0;
}
