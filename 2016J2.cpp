#include <bits/stdc++.h>
using namespace std;
int a[5][5], sum, tmp; bool flag=1;
int main(){
    for(int i=1; i<=4; i++){
        tmp = 0;
        for(int j=1; j<=4; j++){
            cin >> a[i][j];
            if(i==1) sum += a[i][j];
            tmp += a[i][j];
        }
        if(tmp != sum) flag=0;
    }
    for(int j=1; j<=4; j++){
        tmp = 0;
        for(int i=1; i<=4; i++)
            tmp += a[i][j];
        if(tmp!=sum) flag=0;
    }
    if(flag) cout << "magic" << endl;
    else cout << "not magic" << endl;
}
