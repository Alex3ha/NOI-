#include <iostream>
using namespace std;
const int maxn=1000;

int main(){
    char buff[maxn],*pi;
    int cnt=1;
    cin >> buff;
    for(pi=buff;*pi;pi++){
        if(*pi!=*(pi+1)){
            cout << cnt << *pi;
            cnt=1;
        }
        else cnt++;
    }
    cout << endl;
    return 0;
}