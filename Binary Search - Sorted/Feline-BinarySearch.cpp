#include <iostream>

using namespace std;

int d[100000];

int lowerbound(int lf, int rg, int tgt){
    int mid;
    while (rg - lf > 1){
        mid = (lf+rg) / 2;
        if (d[mid] < tgt){
            lf = mid;
        }
        else{
            rg = mid;
        }
    }
    if (d[rg] == tgt){
        return rg;
    }
    else{
        return -1;
    }
}

int main(){
    int n, q, a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> d[i];
    }

    cin >> q;
    for(int i=0;i<q;i++){
        cin >> a;
        cout << lowerbound(-1, n, a) << "\n";
    }
}
