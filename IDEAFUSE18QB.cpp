#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	cin >> str;
	int w=0,e=0, n=0, s=0; 
	for(int i=0; i < str.length(); i++){
		if(str.at(i) == 'W'){
			w++;
		}
		else if(str.at(i) == 'E' ){
			e++;
		}
		else if(str.at(i) == 'N'){
			n++;
		}
		else {
			s++;
		}
	}
	int a = abs(e-w);
	int b = abs(n-s);
	cout << a+b << endl;
	return 0;
}