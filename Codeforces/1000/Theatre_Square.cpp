//Theatre Square 1A
//1000

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,a,width,height;
	cin >> n >> m >> a;
	width = n/a;
	if(n%a > 0){
		width = width + 1;
	}
	height = m/a;
	if(m%a>0){
		height = height + 1;
	}
	cout << height * width << endl;

}
