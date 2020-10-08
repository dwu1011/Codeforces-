//
//

#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define ar array

#define pb push_back
#define vt vector
#define REP(i,a,b) for(int i = a; i <= b; i++)


using namespace std;

void TEST(){
	ll x;
	cin >> x; 
	ll cur,max;
	
	cur = 1;
	max = 0;
	while(max < x){
		max = max + cur;
		cur ++;
	}
	int ans = 0;
	int temp;
	for(int i = cur; i >=0; i = i / 2){
		temp = (cur + 1) * (cur/2);
		if(temp <= x ){
			x = x - temp;
			ans ++;
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int i = 0; i< T; i++){
		TEST();
	}
}
