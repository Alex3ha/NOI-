#include <iostream>
using namespace std;
const int maxn = 110;

int main() {
	char buff[maxn], *i, c;
	cin.getline(buff,maxn);
	c = buff[0];
	for (i = buff; *(i + 1); i++) {
		*i = *i + *(i + 1);
	}
	*i = *i + c;
	cout << buff << endl;
	return 0;
}