#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cout << "masing-masing " << trunc(n/m) << "\n";
    cout << "bersisa " << n%m << "\n";
    return 0;
}
