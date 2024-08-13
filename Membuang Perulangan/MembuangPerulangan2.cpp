#include <iostream>
#include <unordered_set>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

unordered_set <int> st;

int main(){
    FASTIO
    int n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (st.count(num) == 0){
            cout << num << "\n";
            st.insert(num);
        }
    }
    return 0;
}

