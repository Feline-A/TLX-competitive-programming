#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long long n;
    double sum;
    cin >> n;
    sum = (n*(n-1))/4.0;
    cout << fixed << setprecision(2) << sum << "\n";
    return 0;
}
