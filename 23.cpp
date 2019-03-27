#include <iostream>
#include <string>
using namespace std;
const int maxn=110;

int main(){
    string temp,ans="";
    while(cin >> temp){
        ans=ans+temp+' ';
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}