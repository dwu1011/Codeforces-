//A
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
	int n,k;
	cin >> n >> k;
	vector<int> vals(n);
	for(int i = 0;i < n; i++){
		cin >> vals[i];
	}
	sort(vals.begin(), vals.end());
	int lowest = vals[0];
	int ans = 0;
	for(int i = 1; i< n; i++){
		while( vals[i] + lowest <= k){
			vals[i] = vals[i] + lowest;
			ans++;
		}
	}
	cout << ans << endl;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int i = 0;i<T;i++){
		TEST();
	}
}
