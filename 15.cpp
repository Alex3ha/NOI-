#include <iostream>
using namespace std;
const int maxn = 100;

int main(){
    int n;
    char buff[maxn],*i;
    cin >> n;
    while(n--){
        cin >> buff;
        if(buff[0]>='a' && buff[0]<='z')
            buff[0]=buff[0]-32;
        for(i=buff+1;*i;i++){
            if(*i>='A' && *i<='Z')
                *i=*i+32;
        }
        for(i=buff;*i;i++)
            cout << *i;
        cout << endl;
    }
    return 0;
}