#include <iostream>
using namespace std;
const int maxn=1000;
void to_upper(char* buff);

int main(){
    char buff[maxn],*pi;
    int cnt=1;
    cin >> buff;
    to_upper(buff);
    for(pi=buff;*pi;pi++){
        if(*pi!=*(pi+1)){
            cout << '(' << *pi << ',' << cnt << ')';
            cnt=1;
        }
        else cnt++;
    }
    cout << endl;
    return 0;
}

void to_upper(char* buff){
    for(char* i=buff;*i;i++){
        if(*i>='a' && *i<='z'){
            *i-=32;
        }
    }
}