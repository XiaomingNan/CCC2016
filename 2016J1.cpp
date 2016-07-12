#include <bits/stdc++.h>
using namespace std;
int cnt; char ch;
int main(){
    for(int i=0; i<6; i++){
        scanf(" %c", ch);
        if(ch=='W') cnt++;
    }
    if(cnt >= 5) printf("1\n");
    else if(cnt >= 3) printf("2\n");
    else if(cnt >= 1) printf("3\n");
    else printf("-1\n");
}
