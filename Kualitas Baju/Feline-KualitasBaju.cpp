#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int freq[100010];
int nomor[100010];

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, inp, maxx;
    cin >> n;
    maxx = INT_MIN;
    for (int i = 1; i <= n; i++) {
        cin >> inp;
        freq[inp]++;
        maxx = max(maxx, inp);
    }
    int ct = 1;
    for (int i = 0; i <= maxx; i++) {
        while(freq[i] > 0){
            nomor[ct] = i;
            ct++;
            freq[i]--;
        }
    }
    double ans;
    if (n % 2 == 0){
        ans = ((nomor[n/2] + nomor[(n/2)+1]) / 2.0);
        cout << fixed << setprecision(1) << ans << "\n";
    }
    else{
        ans = nomor[n/2 + 1];
        cout << fixed << setprecision(1) << ans << "\n";
    }

    return 0;

}

