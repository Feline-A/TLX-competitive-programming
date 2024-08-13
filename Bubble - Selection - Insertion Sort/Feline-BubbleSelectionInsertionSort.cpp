#include <iostream>

using namespace std;

int dt[1010];
int n;

void selectionSort(){
    int smallIdx;
    for (int i = 1; i <= n; ++i) {
        smallIdx = i;
        for (int j = i+1; j <= n; ++j) { //Linear Search
            if (dt[smallIdx] > dt[j]){
                smallIdx = j;
            }
        }
        swap(dt[i], dt[smallIdx]);
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }

    selectionSort();

    for(int i=1;i<=n;i++){
        cout << dt[i] << "\n";
    }
    return 0;
}
