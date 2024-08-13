#include <iostream>

using namespace std;

int main(){
    int n, i, a;
    int kecil, besar;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a;
        if (i == 1){
            kecil = a;
            besar = a;
        }
        else if(a <= kecil){
            kecil = a;
        }
        else if(a >= besar){
            besar = a;
        }

    }
    cout << besar << " " << kecil << "\n";
    return 0;
}
