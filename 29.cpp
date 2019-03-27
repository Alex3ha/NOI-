#include <iostream>
using namespace std;

int main(){
    char buff[15],*i;
    int sum=0,cnt=1;
    cin>>buff;
    for(i=buff;*i && cnt<=9;i++){
        if(*i>=0 && *i<='9'){
            sum+=cnt*(*i-'0');
            cnt++;
        }
    }
    int ans=sum%11;
    if(ans==10){
        if(*(i+3)=='X') {
            cout << "Right\n";
            return 0;
        }
        else{
            *(i+3)='X';
            cout << buff << endl;
            return 0;
        }
    }
    else{
        if(*(i+3)-'0'==ans){
            cout << "Right\n";
            return 0;
        }
        else {
            *(i+3)=ans+'0';
            cout << buff << endl;
            return 0;
        }
    }
}