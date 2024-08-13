#include <iostream>
#include <cmath>

using namespace std;

const double eps = 1e-9;

int main(){
    double c;;
    int n, i;
    string b;
    cin >> n;
    b = "bukan\n";
    for (i=0; i<= 16;i++){
            c = powl(2, i);
        if (abs(c-n) < eps){
            b = "ya\n";
            break;
        }
    }
    cout << b;

    return 0;
}
