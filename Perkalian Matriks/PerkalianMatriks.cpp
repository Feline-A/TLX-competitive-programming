#include <iostream>

using namespace std;

int mat1[110][110], mat2[110][110], mat3[110][110];

int main(){
    int n, m, p;

    cin >> n >> m >> p;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> mat1[i][j];
        }
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=p;j++){
            cin >> mat2[i][j];
        }
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            for (int k=1;k<=p;k++){
                mat3[i][k] += mat1[i][j] * mat2[j][k];
            }
        }
    }


    for (int i=1;i<=n;i++){
        for (int k=1;k<=p;k++){
           cout << mat3[i][k];
           if (k < p){
                cout << " ";
           }
        }
        cout << "\n";
    }

    return 0;
}
