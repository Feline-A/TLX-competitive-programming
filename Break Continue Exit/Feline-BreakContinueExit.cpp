#include <iostream>

using namespace std;

int main(){
    int n, i;
    cin >> n;
    for(i=1;i<=n;i++){
        if (i % 10 == 0){
            continue;
        }
        else if (i == 42){
            cout << "ERROR\n";
            break;
        }
        else{
            cout << i << "\n";
        }
    }
    return 0;
}
