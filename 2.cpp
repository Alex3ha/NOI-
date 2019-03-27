#include <iostream>
#include <memory.h>
using namespace std;
const int maxn = 1000000;

int main(){
    char buff[maxn],*i,*j;
    bool flag=true;
    cin >> buff;
    for(i=buff;*i;i++){
        for(j=buff;*j;j++){
            if(j==i) continue;
            else if(*j==*i) break;
        }
        if(*j=='\0') {
            cout << *i << endl;
            flag = false;
            break;
        }
    }
    if(flag) cout << "no\n";
    return 0;
}