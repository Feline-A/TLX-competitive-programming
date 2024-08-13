#include <iostream>

using namespace std;

int freq[100100];
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
}

int main(){
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, inp, maxx, q, l, r, ct;
    cin >> n;
    maxx = INT_MIN;
    for (int i = 1; i <= n; ++i) {
        cin >> inp;
        freq[inp]++;
        maxx = max(maxx, inp);
    }
    ct = 0;
    for (int i = 0; i <= maxx; ++i) {
        while (freq[i] > 0){
           dt[ct] = i;
           ct++;
           freq[i]--;
        }
    }
    cin >> q;
    for(int i=1;i<=q;i++){
        cin >> l >> r;
        int ans = upperbound(-1, n,r) - lowerbound(-1, n,l) + 1;
//        cout << upperbound(-1, n,r) << " " << lowerbound(-1, n,l) << "\n";
        cout << ans << "\n";
    }
    return 0;
}
