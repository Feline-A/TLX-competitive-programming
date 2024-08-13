#include <iostream>
#include <iomanip>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

double dt[1010];
int weight[1010];
int n;

void insertionSort(int idx){
    while(idx > 1 && dt[idx-1] < dt[idx]){
        swap(dt[idx-1], dt[idx]);
        swap(weight[idx-1], weight[idx]);
        idx--;
    }
}

int main(){
    FASTIO
    int x, c;
    cin >> n >> x;
    for(int i = 1;i <= n;i++){
        cin >> weight[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> c;
        dt[i] = (c*1.0)/weight[i];
        insertionSort(i);
    }
    int ct = 1;
    double money = 0.0;
    while(x > 0 && ct <= n){
        if(weight[ct] <= x){
            x -= weight[ct];
            money += weight[ct] * dt[ct];
        }
        else{
            money += x * dt[ct];
            x = 0; //Our Bag is Full
        }
        ct++;
    }
    cout << fixed << setprecision(5) << money << "\n";
    return 0;
}
