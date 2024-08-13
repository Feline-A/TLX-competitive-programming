#include <iostream>

using namespace std;

int main(){
    int s, n, d, i;
    cin >> s >> n >> d;
    for(i=s;i<=s+(d*n-1);i=i+d){
        cout << i << "\n";
    }
    return 0;
}
