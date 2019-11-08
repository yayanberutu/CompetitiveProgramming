#include<bits/stdc++.h>
using namespace std;
typedef pair<string, int> tim;
typedef vector<tim> v; 
bool sortbysecdes(const tim &a,const tim &b) { 
	if(a.second != b.second)
    	return (a.second > b.second);
    return a.first < b.first;
}
v olah(v vec, string name);
int main(){
	string nama;
	v vec;
	for(int i=0; i<8; i++){
		string nama;
		cin >> nama;
		vec.push_back(make_pair(nama, 0));
	}
	for(int i=0; i<28;i++){
		string tim1, tim2;
		int h1, h2;
		string c;
		cin >> tim1 >> h1 >> c >>  h2 >> tim2;
		if(h1 > h2){
			vec = olah(vec, tim1);
		}
		else {
			vec = olah(vec, tim2);
		}
		
	}
	sort(vec.begin(), vec.end(), sortbysecdes);
	for(int i=0; i<vec.size(); i++){
		cout << vec.at(i).first << " " << vec.at(i).second << endl;
	}
	return 0;
}

v olah(v vec, string name){
	for(int i=0; i<vec.size(); i++){
		if(vec.at(i).first == name){
			++vec.at(i).second;
			return vec;
		}
	}
	return vec;
}

