#include <iostream>
#include <algorithm>
#include <vector>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

vector < pair<int, int> > inp, res;

int main(){
    FASTIO
    int n, num, prev;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        inp.emplace_back(make_pair(num, i));
    }
    sort(inp.begin(), inp.end());
    res.emplace_back(make_pair(inp[0].second, inp[0].first));
    prev = inp[0].first;
    for (int i = 0; i < inp.size(); ++i) {
        if (inp[i].first != prev){
            res.emplace_back(make_pair(inp[i].second, inp[i].first));
            prev = inp[i].first;
        }
    }
    sort(res.begin(), res.end());
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i].second << '\n';
    }
    return 0;
}
