//
//

#include <bits/stdc++.h>
using namespace std;

void TEST(){
	int a,b,x,y,n;
	long long aa,ab;
	cin >> a >> b >> x >> y >> n;
	long long one, two;
	int back = n;
	aa = a - min(a-x, n);
	n = n - (a-x);
	if( n > 0){
		ab = b - min(b-y, n);
	}else{
		ab = b;
	}
	one = aa*ab;
	
	ab = b - min(b-y, back);
	back = back - (b-y);
	if( back > 0){
		aa = a - min(a-x, back);
	}else{
		aa = a;
	}
	two = aa*ab;
	
	long long ans = min(one,two);
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	for(int i = 0; i< T;i++){
		TEST();
	}
}
