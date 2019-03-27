#include <iostream>
using namespace std;
const int maxn=85;

int main(){
    char buff[maxn],*i;
    cin.getline(buff,maxn);
    for(i=buff;*i;i++){
        if((*i>='a' && *i<='y') || (*i>='A' && *i<='Y')){
            *i=*i+1;
        }
        else if(*i=='z') *i='a';
        else if(*i=='Z') *i='A';
    }
    for(i=buff;*i;i++)
        cout << *i;
    cout << endl;
    return 0;
}