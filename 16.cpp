#include <iostream>
#include <cstring>
using namespace std;
const int maxn=100;
void sort(char* buff);

int main(){
    char buff1[maxn],buff2[maxn];
    cin.getline(buff1,maxn);
    cin.getline(buff2,maxn);
    sort(buff1);
    sort(buff2);
    int flag = strcmp(buff1,buff2);
    if(flag==0) cout << "=\n";
    else if(flag==1) cout << ">\n";
    else if(flag==-1) cout << "<\n";
    return 0;
}

void sort(char* buff){
    char *i;
    for(i=buff;*i;i++){
        if(*i>='A' && *i<='Z')
            *i=*i+32;
    }
}