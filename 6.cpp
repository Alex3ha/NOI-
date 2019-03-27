#include <iostream>
using namespace std;

int main(){
    char buff[25],*i;
    cin >> buff;
    if(buff[0]>='0' && buff[0]<='9'){
        cout << "no\n";
        return 0;
    }
    else{
        for(i=buff;*i;i++){
            if((*i>='0' && *i<='9') || (*i>='a' && *i<='z') || (*i>='A' && *i<='Z') || *i=='_');
            else {
                cout << "no\n";
                return 0;
            }
        }
    }
    cout << "yes\n";
    return 0;
}