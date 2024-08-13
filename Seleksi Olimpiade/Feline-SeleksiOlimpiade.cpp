#include <iostream>

using namespace std;

string id[90];
int sesi1[90];
int sesi2[90];
int sesi3[90];

int main(){
    int t, m, n, ct;
    int lulus;
    string x;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> n >> m;
        cin >> x;
        lulus = 1;
        for(int j=1;j<=n;j++){
            cin >> id[j] >> sesi1[j] >> sesi2[j] >> sesi3[j];
            if(id[j] == x){
                ct = j;
            }
        }
        for(int z=1;z<=n;z++){
            if (sesi3[ct] < sesi3[z]){
                lulus++;
            }
            else if (sesi3[ct] == sesi3[z] && z != ct){
                if (sesi2[ct] < sesi2[z]){
                    lulus++;
                }
                else if (sesi2[ct] == sesi2[z]){
                    if (sesi1[ct] < sesi1[z]){
                        lulus++;
                    }
                }
            }
        }
        if (lulus <= m){
            cout << "YA\n";
        }
        else{
            cout << "TIDAK\n";
        }
    }
    return 0;
}
