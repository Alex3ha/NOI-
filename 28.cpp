#include <iostream>
using namespace std;
const int maxn=110;

int main(){
    char buff[maxn][maxn],cnt=0;
    while(cin>>buff[cnt])
        cnt++;
    for(int i=cnt-1;i>=0;i--){
        cout << buff[i];
        if(i!=0) cout << ' ';
    }
    cout << endl;
    return 0;
}