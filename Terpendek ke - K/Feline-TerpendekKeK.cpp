#include <iostream>

using namespace std;

int dt[1010];
int n;

void bubbleSort(){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            if (dt[j] > dt[j+1]){
                swap(dt[j], dt[j+1]);
            }
        }
    }
}

int main(){
    int k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }

    bubbleSort();

    cout << dt[k] << "\n";
    return 0;
}
