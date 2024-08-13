#include <iostream>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string name[1010];

int insertionSort(int idx){
    while(idx > 1 && name[idx-1] > name[idx]){
        swap(name[idx-1], name[idx]);
        idx--;
    }
    return idx;
}

int main(){
    FASTIO
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> name[i];
        cout << insertionSort(i) << "\n";
    }
    return 0;
}
