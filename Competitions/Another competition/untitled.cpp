// 9/19/2020 #671 Div 2
//A

#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define ar array

#define pb push_back
#define vt vector
#define REP(i,a,b) for(int i = a; i <= b; i++)


using namespace std;

void WIN(){
	int n;
	ll s;
	cin >> n >> s;
	
	vector<int> breach,raze;
	bool yes = true;
	if(n%2 == 0){
		yes = false;
	}else{
		yes = true;
	}
	for(int i = 0; i< n; i++){
		if(yes){
			raze.pb(s%10);
			s =s/10;
			yes = false;
		}else{
			breach.pb(s%10);
			s = s/10;
			yes = true;
		}
	}/*
	for(int i = 0; i < raze.size(); i++){
		cout << raze[i] << endl;
	}
	for(int i = 0; i < breach.size(); i++){
		cout << breach[i] << endl;
	}
	*/
	int ans = 2;
	if(n % 2 != 0){
		for(int i = 0; i< raze.size(); i++){
			if(raze[i] % 2 != 0){
				ans = 1;
				break;
			}
		}
	}else{
		ans = 1;
		for(int i = 0; i< breach.size(); i++){
			if(breach[i] % 2 == 0){
				ans = 2;
				break;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int Match;
	cin >> Match;
	for(int i = 0; i< Match; i++){
		WIN();
	}
}
