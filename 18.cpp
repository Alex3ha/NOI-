#include <iostream>
using namespace std;
const int maxn=220;
bool is_substring(char* s1,char* s2);

int main(){
    char s1[maxn],s2[maxn];
    cin.getline(s1,maxn);
    cin.getline(s2,maxn);
    if(is_substring(s2,s1)) cout << s1 << " is substring of "<< s2 << endl;
    else if(is_substring(s1,s2)) cout << s2 << " is substring of " << s1 << endl;
    else cout << "No substring\n";
    return 0;
}

bool is_substring(char* buff1,char* buff2){
    char* temp=buff1,*i,*j;
    bool flag;
    for(i=buff1,j=buff2;*i && *j;i++,j++){
        flag=true;
        if(*i!=*j){
            flag = false;
            j=buff2-1;
            i=++temp-1;
        }
    }
    return flag;
}