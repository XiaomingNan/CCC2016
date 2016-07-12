#include <bits/stdc++.h>
using namespace std;
string s, t; int ans=1;
int main(){
    cin >> s; t=s;
    reverse(t.begin(), t.end());
    if(t==s) { cout<<s.size()<<endl; return 0;}
    for(int l=s.size()-1; l>1; l--){
        for(int i=0; i+l <= s.size(); i++){
            string tmp = s.substr(i, l);
            t = tmp; reverse(t.begin(), t.end());
            if(tmp==t) ans = max(ans, l);
        }
    }
    cout << ans << endl;
}
