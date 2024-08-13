/*#include <iostream>

using namespace std;

int n;
int dt[8010];

bool check(int lf, int rg, int tgt){
    while(lf < rg){
        if (dt[lf] + dt[rg] == tgt){
            return true;
        }
        else if (dt[lf] + dt[rg] < tgt){
            lf++;
        }
        else{
            rg--;
        }
    }
    return false;
}
void insertionSort(){
    int idx;
    for(int i=2;i<=n;i++){
        idx = i;
        while(idx > 1 && dt[idx-1] > dt[idx]){
            swap(dt[idx-1], dt[idx]);
            idx--;
        }
    }
}

int main(){
    int t, inp;
    cin >> n >> t;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    insertionSort();

    for(int i=1;i<=t;i++){
        cin >> inp;
        if (check(1, n, inp) == true){
            cout << "YA\n";
        }
        else{
            cout << "TIDAK\n";
        }
    }
    return 0;
}
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n;
int dt[8010];

bool check(int lf, int rg, int tgt){
    while(lf < rg){
        if (dt[lf] + dt[rg] == tgt){
            return true;
        }
        else if (dt[lf] + dt[rg] < tgt){
            lf++;
        }
        else{
            rg--;
        }
    }
    return false;
}

int main(){
    int t, inp;
    cin >> n >> t;
    for(int i=1;i<=n;i++){
        cin >> dt[i];
    }
    sort(dt+1, dt+n+1);
    for(int i=1;i<=t;i++){
        cin >> inp;
        if (check(1, n, inp) == true){
            cout << "YA\n";
        }
        else{
            cout << "TIDAK\n";
        }
    }
    return 0;
}
