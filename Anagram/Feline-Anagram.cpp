#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

vector <string> inp;
vector < vector<string> > vi;

int findKey(string s){
    for (int i = 0; i < vi.size(); ++i) {
        if (s == vi[i][0]){
            return i;
        }
    }
    return -1;
}

void insertData(string s){
    int idx;
    string key = s;
    sort(key.begin(), key.end());
    idx = findKey(key);
    if (idx == -1){
        vector <string> temp;
        temp.emplace_back(key);
        temp.emplace_back(s);

        vi.emplace_back(temp);
    }
    else{
        vi[idx].emplace_back(s);
    }
}

int findLargestDS(){
    int res = 2, idx = 0;
    for (int i = 0; i < vi.size(); ++i) {
        if (vi[i].size() > res){
            res = vi[i].size();
            idx = i;
        }
    }
    return idx;
}

int main(){
    FASTIO
    int n, ans;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        inp.emplace_back(s);
    }
    sort(inp.begin(), inp.end());
    for (int i = 0; i < n; ++i) {
        insertData(inp[i]);
    }
    ans = findLargestDS();
    if (vi[ans].size() == 2){
        cout << "TIDAK ADA\n";
    }
    else{
        cout << vi[ans].size()-1 << "\n";
        for (int i = 1; i < vi[ans].size(); ++i) {
            cout << vi[ans][i] << "\n";
        }
    }
    return 0;
}

