#include <iostream>
#include <climits>

using namespace std;

int freq[100100];
int p[100100];

int main(){
    int n, inp;
    cin >> n;
    int maxx = INT_MIN;
    for(int i=1;i<=n;i++){
        cin >> inp;
        freq[inp]++;
        maxx = max(maxx, inp);
    }
    int a = 1;
    for(int i=0;i<=maxx;i++){
        while(freq[i] > 0){
            p[a] = i;
            a++;
            freq[i]--;
        }
    }
    int ans = 0;
    int x = n;
    for(int i=n;i>=1&&x>0;i--){
        x -= (p[i]+1);
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
