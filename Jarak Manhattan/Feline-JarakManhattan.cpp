#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x1, y1, x2, y2, n, m;
    cin >> x1 >> y1 >> x2 >> y2;
    n = abs(x1 - x2);
    m = abs(y1 - y2);
    cout << n + m << "\n";
    return 0;
}
