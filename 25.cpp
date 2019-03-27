#include <iostream>
#include <string>
using namespace std;
#define INF 0x3f3f3f3f
const int maxn = 110;

int main(){
    string temp,maxs,mins;
    int max=0,min=INF;
    while(cin>>temp){
        int l = temp.size();
        if(max<l){
            max=l;
            maxs=temp;
        }
        if(min>l){
            min=l;
            mins=temp;
        }
    }
    cout << maxs << endl;
    cout << mins << endl;
    return 0;
}