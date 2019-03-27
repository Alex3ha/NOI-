#include <iostream>
using namespace std;
const int maxn = 550;

int main(){
    char buff1[maxn],buff2[maxn],*i,*j;
    double rate;
    int cnt=0;
    cin >> rate;
    cin >> buff1;
    cin >> buff2;
    for(i=buff1,j=buff2;*i;i++,j++){
        if(*i==*j) cnt++;
    }
    double ans = cnt/(double) (i-buff1);
    if(ans >= rate) cout << "yes\n";
    else cout << "no\n";
    return 0;
}