#include <bits/stdc++.h>
using namespace std;
int N, type, a[102], b[102], ans;
int main(){
    cin >> type >> N;
    for(int i=0; i<N; i++)
        cin >> a[i];
    for(int i=0; i<N; i++)
        cin >> b[i];
    sort(a, a+N); sort(b, b+N);
    if(type == 1){  //find minimum total speed
        for(int i=0; i<N; i++)
            ans += max(a[i], b[i]);
    }else{
        for(int i=0; i<N; i++)
            ans += max(a[i], b[N-i-1]);
    }
    cout << ans << endl;
}
