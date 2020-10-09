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
	int n,m;
	cin >> n>> m;
	int mat[n][m];
	for(int i = 0;i < n; i++){
		for(int j = 0; j< m; j++){
			cin >> mat[i][j];
		}
	}
	ll answer= 0;
	vector<int> tmp(4);
	for(int i = 0; i< (n/2); i++){
		for(int j = 0; j< (m/2); j++){
			tmp[0] = mat[i][j];
			
			tmp[1] = mat[i][m-j-1];
			
			tmp[2] = mat[n-i-1][j];
			tmp[3] = mat[n-i-1][m-j-1];
			
			sort(tmp.begin(), tmp.end());
			
			answer = answer + (tmp[1] - tmp[0]);
			answer = answer +  (tmp[2] - tmp[1]);
			answer = answer +  (tmp[3] - tmp[1]);
		}
	}
	
	if(n%2 != 0){
		int mid = ((n+1)/2)-1;
		for(int j = 0; j<m/2; j++){
			answer = answer + abs(mat[mid][j] - mat[mid][m-j-1]);
		}
	}
	if(m%2 != 0){
		for(int i = 0; i<n/2; i++){
			answer = answer + abs(mat[i][(m-1)/2] - mat[n-i-1][(m-1)/2]);
		}
	}
	cout << answer << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	for(int i = 0;i < T;i++){
		TEST();
	}
}
