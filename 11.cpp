//9分
#include <iostream>
#include <memory.h>
using namespace std;
const int maxn = 110;

int main(){
    int vis[26];
    char code[maxn],raw[maxn],map[maxn],*i,*j,target[maxn];
    cin >> code >> raw >> target;
    memset(vis,0,sizeof(vis));
    for(i=code,j=raw;*i;i++,j++){
        if(!vis[*i-'A']){
            vis[*i-'A']=1;
            map[*i-'A']=*j;
        }
        else if(vis[*i-'A']){
            if(map[*i-'A']!=*j){
                cout << "Failed\n";
                return 0;
            }
        }
    }
    for(int k=0;k<26;k++){
        if(!vis[k]){
            cout << "Failed\n";
            return 0;
        } 
    }
    for(i=target;*i;i++){
        *i=map[*i-'A'];
        cout << *i;
    }
    cout << endl;
    return 0;
}