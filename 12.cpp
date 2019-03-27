#include <iostream>
using namespace std;
const int maxn=60;

int main(){
    char buff[maxn],*i,*j;
    cin >> buff;
    for(i=buff;*i;i++){
        if(*i<='z' && *i>='a') *i=*i-32;
        else if(*i<='Z' && *i>='A') *i=*i+32;
    }
    i--;
    for(j=buff;j<i;j++,i--){
        char temp=*i;
        *i=*j;
        *j=temp;
    }
    for(i=buff;*i;i++){
        if(*i=='x') *i='a';
        else if(*i=='y') *i='b';
        else if(*i=='z') *i='c';
        else if(*i=='X') *i='A';
        else if(*i=='Y') *i='B';
        else if(*i=='Z') *i='C';
        else {
            *i=*i+3;
        }
    }
    cout << buff << endl;
    return 0;
}