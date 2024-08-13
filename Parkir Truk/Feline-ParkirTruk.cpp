#include <iostream>

using namespace std;

int timee[110];

int main(){
    int a, b, c, x, y;
    int maxY = 0, res = 0;
    cin >> a >> b >> c;
    for (int i=1;i<=3;i++){
        cin >> x >> y;
        for (int j=x;j<y;j++){
            timee[j]++;
        }
        maxY = max(y, maxY);
    }
    /*See The Data Structure
    for (int i=1;i<=10;i++){
        printf("Time-%d: %d\n", i, timee[i]);
    }
    */
    for (int i=1;i<=maxY;i++){
        switch (timee[i]){
            case 1:
                res += (timee[i]*a); break;
            case 2:
                res += (timee[i]*b); break;
            default:
                res += (timee[i]*c);
        }
    }
    cout << res << "\n";
    return 0;
}
