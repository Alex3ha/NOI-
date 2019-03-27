#include <iostream>
using namespace std;
const int maxn = 110;

int main(){
    char buff[maxn],*i,*j;
    cin >> buff;
    for(j=buff;*j;j++);
    j--;
    for(i=buff;i<j;i++,j--){
        if(*i!=*j){
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    return 0;
}