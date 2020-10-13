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

vector<int> time;
map <int, pair<int,int>> cel;
vector<int> comp;

bool related(int x, int y){
	int distance = abs(cel[x].first - cel[y].first) + abs(cel[x].second - cel[y].second);
	if(distance >= abs(y-x)){
		return true;
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int r,n;
	cin >> r >> n;
	int x, y , t;
	for(int i = 0; i< n; i++){
		cin >> x >> y >> t;
		time.pb(t);
		cel.insert({t,{x,y}});
	}
	//insert start
	time.pb(0);
	cel.insert({0,{1,1}});
	sort(time.begin(), time.end());
	//variables
	comp.pb(0);
	int cpb = -1; //compatible 
	for(int i = 1;i < n; i++){
		for(int j = 0; j<i;j++){
			if(related(time[j], time[i])){
				cpb = max(0,comp[j]);
			}
		}
		if(cpb != -1){
			comp.pb(cpb+1);
		}else{
			comp.pb(-1);
		}
		cpb = -1;
	}
	int ans = 0;
	for(int i = 0; i< comp.size(); i++){
		ans = max(ans,comp[i]);
	}
	cout << ans << endl;
}
