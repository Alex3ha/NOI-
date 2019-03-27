#include <iostream>
#include <string>
using namespace std;
const int maxn = 110;

int main(){
    int n;
    string s1,s2;
    cin >> n;
    while(n--){
        cin >> s1 >> s2;
        if(s1==s2) cout << "Tie\n";
        else if(s1=="Rock"){
            if(s2=="Scissors")
                cout << "Player1\n";
            else if(s2=="Paper")
                cout << "Player2\n";
        }
        else if(s1=="Paper"){
            if(s2=="Rock")
                cout << "Player1\n";
            else if(s2=="Scissors")
                cout << "Player2\n";
        }
        else if(s1=="Scissors"){
            if(s2=="Rock")
                cout << "Player2\n";
            else if(s2=="Paper")
                cout << "Player1\n";
        }
    }
    return 0;
}