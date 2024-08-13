#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int idx[100010];
int freq[100100];
int dt[100010];

bool binarySearch(int lf, int rg, int tgt){
    int mid;
    while(lf <= rg){
        mid = (lf+rg)/2;
        if (dt[mid] == tgt){ return true; }
        else if (dt[mid] < tgt){
            lf = mid+1;
        }
        else{
            rg = mid-1;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, inp, q, d, ct, maxx;
    cin >> n;
    fill(idx, idx+100010, -1);
    maxx = INT_MIN;
    for (int i = 0; i < n; ++i) {
        cin >> inp;
        freq[inp]++;
        maxx = max(maxx, inp);
        if (idx[inp] == -1){
            idx[inp] = i;
        }
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
        cin >> d;
        if (binarySearch(0, n-1, d)){
            cout << idx[d] << "\n";
        }
        else{
            cout << "-1\n";
        }
//        cout << idx[d] << "\n";
    }
    return 0;
}
