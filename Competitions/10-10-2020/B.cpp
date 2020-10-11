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
	int n, k;
	cin >> n >> k;
	string games;
	cin >> games;
	vector<int> L;
	int cur = 0;
	int lastW = -1;
	int beg = 0;
	int end = 0;
	for(int i = 0; i< n ;i++){
		if(games[i] == 'L' && lastW == -1){
			beg++;
		}else if(games[i] == 'W'){
			if(games[i-1] == 'W'){
				cur += 2;
			}else{
				if(lastW == -1){
					lastW = i;
				}else{
					L.pb(i-lastW -1);
				}
				cur += 1;
			}
			lastW = i;
		}
	}
	if(lastW != -1&&  lastW != n-1){
		end = n-1-lastW;
	}
	sort(L.begin(), L.end());
	//for(int i = 0; i< L.size(); i++){ cout << L[i] << endl;}
	int plus = 0;
	if(lastW == -1 && k>0){
		plus += 2*min(k,beg)-1;
		k = 0;
	}
	for(int i = 0; i< L.size(); i++){
		if( k<=0){
			break;
		}else if( k < L[i]){
			plus = plus + 2*k;
			k = 0;
		}else{
			plus += 2*(L[i])+1;
			k = k - L[i];
		}
		//cout << k << endl;
	}
	if(k > 0 && beg > 0){
		plus += 2*(min(k,beg));
		k = k - min(k,beg);
	}
	//cout << plus << endl;
	if(k>0 && end > 0){
		plus += 2*(min(k,end));
		k = k - min(k,end);
	}
	//cout << plus << endl;
	//cout << cur << endl;
	cout << plus + cur << endl;
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
