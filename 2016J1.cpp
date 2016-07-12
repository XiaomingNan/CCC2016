#include <bits/stdc++.h>
using namespace std;
int cnt; char ch;
int main(){
    for(int i=0; i<6; i++){
        cin >> ch;
        if(ch=='W') cnt++;
    }
    if(cnt >= 5) cout << 1 << endl;
    else if(cnt >= 3) cout << 2 << endl;
    else if(cnt >= 1) cout << 3 << endl;
    else cout << -1 << endl;
}
