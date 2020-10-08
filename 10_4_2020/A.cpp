//
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
	vector<int> sides(3);
	for(int i = 0;i < 3; i++){
		cin >> sides[i];
	}
	sort(sides.begin(), sides.end());
	cout << sides[2] << endl;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; 
	cin>>T;
	for(int i = 0; i < T; i++){
		TEST();
	}
}
