#include <iostream>

using namespace std;

int dt[100010];

int lowerbound(int lf, int rg, int tgt){
    int mid;
    while(rg-lf > 1){
        mid = (lf+rg)/2;
        if (dt[mid] < tgt){
            lf = mid;
        }
        else{
            rg = mid;
        }
    }
    return rg;
    //if (dt[rg] >= tgt) { return rg; }
    //else { return -1; }
}

int upperbound(int lf, int rg, int tgt){
    int mid;
    while(rg-lf > 1){
        mid = (lf+rg)/2;
        if (dt[mid] <= tgt){
            lf = mid;
        }
        else{
            rg = mid;
        }
    }
    return lf;
    //if (dt[lf] <= tgt) { return lf; }
    //else { return -1; }
}

int main(){
    int n, q, x, y;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    cin >> q;
    for(int i=1;i<=q;i++){
        cin >> x >> y;
        int ans = upperbound(0, n+1, y) - upperbound(0, n+1, x);
        cout << ans << "\n";
    }
    return 0;
}
