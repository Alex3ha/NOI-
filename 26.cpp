#include <iostream>
#include <string>
using namespace std;
const int maxn=350;
int lcontain(char* father,char* son);
int rcontain(char* father,char* son);

int main(){
    char s[maxn],s1[15],s2[15],*ps1;
    int ls1,ls2,flag=1;
    cin.getline(s,maxn);
    for(char* i=s;*i;i++){
        if(*i==',' && flag==1){
            flag=2;
            *i='\0';
            strcpy(s1,i+1);
        }
        if(*i==',' && flag==2){
            *i='\0';
            strcpy(s2,i+1);
        }
    }
    for(ps1=s1;*ps1;ps1++);
    int ls1=lcontain(s,s1);
    int ls2=rcontain(s,s2);
    if(ls1==-1 || ls2==-1 || ls1+(ps1-s1)>=ls2){
        cout << -1 << endl;
        return 0;
    }
    else cout << ls1+(ps1-s1)-ls2 << endl;
    return 0;
}

int lcontain(char* father,char* son){
    for(char* i=father;*i;i++){
        
    }
}

int rcontain(char* father,char* son){

}

//与18、19问有关