#include <iostream>
#include <string>
using namespace std;
const int maxn=110;
char* upredown(char *buff);

int main(){
    string youremail,email,account;
    char code[maxn];
    int n;
    bool flag=false;
    cin >> youremail;
    cin >> n;
    while(n--){
        cin >> account >> code >> email;
        if(email!=youremail) continue;
        flag=true;
        cout << account << ' ' << upredown(code) << endl;
    }
    if(!flag) cout << "empty\n";
    return 0;
}

char* upredown(char *buff){
    for(char*i=buff;*i;i++){
        if(*i>='a' && *i<='z')
            *i-=32;
        else if(*i>='A' && *i<='Z')
            *i+=32;
    }
    return buff;
}