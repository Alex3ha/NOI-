#include <iostream>
using namespace std;
const int maxn=90;

int main(){
    char buff[maxn],*i;
    cin.getline(buff,maxn);
    for(i=buff;*i;i++){
        if(*i>='a' && *i<='z')
            *i=*i-32;
        else if(*i>='A' && *i<='Z')
            *i=*i+32;
    }
    for(i=buff;*i;i++)
        cout << *i;
    cout << endl;
    return 0;
}