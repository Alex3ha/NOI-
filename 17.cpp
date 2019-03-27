#include <iostream>
using namespace std;
const int maxn = 100;
//9'

void sort(char* buff){
    char *i;
    for(i=buff;*i;i++){
        if(*i>='A' && *i<='Z')
            *i=*i+32;
    }
}

int main(){
    char buff1[maxn],buff2[maxn],*i,*j;
    cin.getline(buff1,maxn);
    cin.getline(buff2,maxn);
    sort(buff1);
    sort(buff2);
    for(i=buff1,j=buff2;(*i) && (*j);i++,j++){
        if(*i==' ') i++;
        if(*j==' ') j++;
        if(*i!=*j){
            cout << "NO\n";
            return 0;
        }
    }
    if(*i=='\0' && *j=='\0'){
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}