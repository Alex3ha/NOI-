#include <iostream>
using namespace std;
const int maxn=210;

int main(){
    char buff[maxn],map[]={'V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U'},*i;
    cin.getline(buff,maxn);
    for(i=buff;*i;i++){
        if(*i-'A'>=0 && *i-'A'<=25) *i=map[*i-'A'];
    }
    for(i=buff;*i;i++)
        cout << *i;
    cout << endl;
    return 0;
}