#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int maxn=300;

int main(){
    vector<int> a;
    string temp;
    while(cin>>temp){
        a.push_back(temp.size());
    }
    int l=a.size();
    for(int i=0;i<l;i++){
        cout << a[i];
        if(i!=l-1)
            cout << ',';
    }
    cout << endl;
    return 0;
}