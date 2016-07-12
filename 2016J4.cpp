#include <bits/stdc++.h>
using namespace std;
int h, m, t; char ch;
int main(){
    cin >> h >> ch >> m;
    t = h*60+m;
    for(int i=240; i>0; t++)
        if(t>=7*60 && t<10*60) i--;
        else if(t>=15*60 && t<19*60) i--;
        else i-=2;
    printf("%02d:%02d\n", t/60%24, t%60);
}
