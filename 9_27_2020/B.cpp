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
	int n, T;
	cin >> n>> T;
	vector<int> vals(n);
	map<int, int> c;
	for(int i = 0;i < n; i++){
		cin >> vals[i];
		if(c.count(vals[i])){
			c[vals[i]] = c[vals[i]] + 1;
		}else{
			c.insert({vals[i],1});
		}
	}
	vector<int> ans(n);
	int cm = 0;
	for(int i = 0; i< n; i++){
		if(vals[i] <= (T-1)/2){
			ans[i] = 0;
		}else if(vals[i] > (T)/2){
			ans[i] = 1;
		}else{
			if(cm % 2 == 0){
				ans[i] = 0;
				
			}else{
				ans[i] = 1;
			}
			cm++;
		}
	}
	for(int i = 0;i< n; i++){
		cout << ans[i] << " ";
	}
	cout << endl;
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int i= 0;i < T;i++){
		TEST();
	}
}
