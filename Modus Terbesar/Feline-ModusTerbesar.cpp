#include <iostream>
#include <cstring>

using namespace std;

int freq[1010];

int main(){
    int n, num, mod, freqmod;

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> num;
        freq[num]++;
    }
    mod = -1;
    freqmod = 0;
    for (int i=1;i<=1000;i++){
        if (freq[i] >= freqmod){
            freqmod = freq[i];
            mod = i;
        }
    }
    cout << mod << "\n";
    return 0;
}
