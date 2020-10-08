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
	int n;
	string s;
	cin >> n >> s;
	int ans = 2;
	if(n % 2 != 0){
		for(int i = 0; i< n; i += 2){
			if((s[i] - '0') % 2 != 0){
				ans = 1;
			}
		}
	}else{
		ans = 1;
		for(int i = 1; i< n; i+= 2){
			if((s[i] - '0') % 2 == 0){
				ans = 2;
			}
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int matches;
	cin >> matches;
	for(int i = 0; i< matches ;i++){
		TEST();
	}
}
