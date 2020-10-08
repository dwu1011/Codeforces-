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

int min(vector<int> f, int a, int b){
	map<int, int> vals;
	vector<int> track;
	for(int i= 0; i< a-b; i++){
		int sec = i + b - 1;
		for(int j = i; j< sec; j++){
			if(vals.count(f[j])){
				vals[f[j]] = vals[f[j]] + 1;
			}else{
				track.pb(f[j]);
				vals.insert({f[j],1});
			}
		}
	}
	for(int i = 0;i < track.size(); i++){
		cout << vals[track[i]] << endl;
	}
	
	int ans = INT_MAX;
	for(int i = 0; i< track.size(); i++){
		if(vals[track[i]] == (a-(b-1))){
			cout << vals[track[i]] << endl;
			ans = min(track[i],ans);
		}
	}
	if(ans == INT_MAX){
		return -1;
	}else{
		return ans;
	}
	
}

void TEST(){
	int n;
	cin >> n;
	vector<int> vals(n);
	for(int i = 0;i < n ;i++){
		cin >> vals[i];
	}
	vector<int> ans(n);
	int k = 1;
	for(int i= 0; i< n; i++){
		ans[i] = min(ans,n,k);
		k++;
	}
	for(int i= 0; i< n; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
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
