#include <iostream>

using namespace std;

string dt[100100];
string angka[100100];

int binser(int lf, int rg, string tgt){
    int mid;
    while(lf <= rg){
        mid = (lf+rg)/2;
        if (dt[mid] == tgt){
            return mid;
        }
        else if (dt[mid] < tgt){
            lf = mid+1;
        }
        else{
            rg = mid-1;
        }
    }
    return -1;
}

int main(){
    int n, q;
    string a;
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> dt[i] >> angka[i];
    }

    for(int i=1;i<=q;i++){
        cin >> a;
        int ans = binser(1, n, a);
        if (ans == -1){
            cout << "NIHIL\n";
        }
        else{
            cout << angka[ans] << "\n";
        }
    }

    return 0;
}
