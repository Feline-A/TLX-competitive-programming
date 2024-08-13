#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); //I/O Optimization

    int n, inp, bound, ct;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> inp;
        ct = 0;
        if (inp % 2 == 0){ //Optimisasi
            bound = inp/2;
        }
        else{
            bound = inp/3;
        }
        for(int j=2;j<=bound;j++){
            if (inp % j == 0){
                ct++;
            }
            if (ct > 2){break;} //Optimisasi
        }
        if (ct <= 2){
            cout << "YA\n";
        }
        else{
            cout << "BUKAN\n";
        }
    }
    return 0;
}
