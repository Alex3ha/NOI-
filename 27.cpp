#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int maxn=500;


int main(){
    string ans="",temp;
    while(cin>>temp){
        reverse(temp.begin(),temp.end());
        ans=ans+temp+' ';
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}