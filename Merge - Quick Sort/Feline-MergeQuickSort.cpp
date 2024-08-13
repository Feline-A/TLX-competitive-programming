#include <iostream>
#include <cstdlib>
#include <ctime>

#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int dt[100100];

void quickSort(int lf, int rg){
    if (lf >= rg) {} //Base Case
    else{ //Recurrence Relation
        int idx;
        int pvt = (rand() % (rg-lf+1)) + lf; //Choose Random Pivot
        swap(dt[pvt], dt[lf]); //Bring The Pivot To Front
        idx = lf+1;
        for (int i = lf+1; i <= rg; ++i) {
            if (dt[i] < dt[lf]){
                swap(dt[i], dt[idx]);
                idx++;
            }
        }
        swap(dt[lf], dt[idx-1]); //Bring The Pivot To The Middle
        quickSort(lf, idx-2); //Sort The Left Part
        quickSort(idx, rg); //Sort The Right Part
    }
}

int main(){
    FASTIO
    srand(time(NULL));
    int n;
    cin >> n;
    //INPUT
    for (int i = 1; i <= n; ++i) {
        cin >> dt[i];
    }
    quickSort(1, n);
    //OUTPUT
    for (int i = 1; i <= n; ++i) {
        cout << dt[i] << "\n";
    }
    return 0;
}
