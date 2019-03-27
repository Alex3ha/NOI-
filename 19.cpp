#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 100;
bool is_substring(char* buff1, char* buff2);

int main() {
	char s1[maxn], s2[maxn], *i, *j,temp[maxn];
	cin >> s1 >> s2;
    strcpy(temp,s1);
	for (i = temp; *i; i++) {
		strcpy(s1, s1 + 1);
		for (j = s1; *j; j++);
		*j = *i;
		*(j + 1) = '\0';
		if (is_substring(s2, s1)) {
			cout << "true\n";
			return 0;
		}
	}
	cout << "false\n";
	return 0;
}

bool is_substring(char* buff1,char* buff2){
    char* temp=buff1,*i,*j;
    bool flag;
    for(i=buff1,j=buff2;*i && *j;i++,j++){
        flag=true;
        if(*i!=*j){
            flag = false;
            j=buff2-1;
            i=++temp-1;
        }
    }
    return flag;
}