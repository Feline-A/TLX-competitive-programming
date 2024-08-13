#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, t, i, j;
    bool prime;
    cin >> t;
    for(i=1;i<=t;i++){
        prime = true;
        cin >> n;
        for(j=2;j<=trunc(sqrtl(n));++j){
            if (n%j == 0){
                prime = false;
                break;
            }
        }
        if (n <= 1){
            prime = false;
        }

        if (prime == true){
            cout << "YA\n";
        }
        else{
            cout << "BUKAN\n";
            }
        }

    return 0;
}

