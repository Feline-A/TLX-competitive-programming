#include <iostream>
#include <climits>

using namespace std;

int freq[1000010];

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
    for (int i = 0; i <= maxx; i++) {
        while(freq[i] > 0){
            cout << i << "\n";
            freq[i]--;
        }
    }
    return 0;
}
