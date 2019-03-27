#include <iostream>
#include <sstream>
#include <string>
using namespace std;
const int maxn=110;

int main(){
    string buff,target,sub,temp,ans="";
    getline(cin,buff);
    cin >> target >> sub;
    istringstream sin(buff);
    while(sin>>temp){
        if(temp==target) ans=ans+sub+' ';
        else ans=ans+temp+' ';
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}