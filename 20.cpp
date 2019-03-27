#include <iostream>
#include <cstring>
using namespace std;
const int maxn=100;

int main(){
    char buff[maxn],*i;
    cin >> buff;
    for(i=buff;*i;i++);
    if(i-buff>=2){
        if(*(i-1)=='r' && *(i-2)=='e'){
            *(i-2)='\0';
        }
        if(*(i-1)=='y' && *(i-2)=='l'){
            *(i-2)='\0';
        }
    }
    if(i-buff>=3){
        if(*(i-1)=='g' && *(i-2)=='n' && *(i-3)=='i'){
            *(i-3)='\0';
        }
    }
    cout << buff << endl;
    return 0;
}