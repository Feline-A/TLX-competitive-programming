#include <iostream>

using namespace std;

string dt[510];
int n;

void bubbleSort(){
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (dt[j].size() < dt[j-1].size()){
                swap(dt[j], dt[j-1]);
            }
            else if (dt[j-1].size() == dt[j].size() && dt[j] < dt[j-1]){
                swap(dt[j], dt[j-1]);
            }
        }
    }
}

void selectionSort(){
    int idx;
    for (int i = 1; i <= n; ++i) {
        idx = i;
        for (int j = i+1; j <= n; ++j) {
            if (dt[idx].size() > dt[j].size()){
                idx = j;
            }
            else if (dt[idx].size() == dt[j].size() &&
                     dt[idx] > dt[j]){
                idx = j;
            }
        }
        swap(dt[i], dt[idx]);
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
//    bubbleSort();
    selectionSort();
    for(int i=1;i<=n;i++){
        cout << dt[i] << "\n";
    }
    return 0;
}
