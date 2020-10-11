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
	int z;
	cin>>z;
	vector<int> a(z);
	for(int i = 0; i< z; i++){
		cin >> a[i];
	}
	int max = 0; 
	for(int i = 0; i< z; i++){
		max += a[i];
	}
	if(max == 0){
		cout << "NO" << endl;
	}else{
		cout << "YES" << endl;
		sort(a.begin(), a.end(), greater<int>());
		vector<int> negative;
		vector<int> positive;
		int zero = 0;
		int negSum= 0;
		int posSum = 0;
		for(int i = 0;i < z; i++){
			if(a[i] < 0){
				negative.pb(a[i]);
				negSum += a[i];
			}else if(a[i] > 0){
				positive.pb(a[i]);
				posSum += a[i];
			}else{
				zero ++;
			}
		}
		if((0-negSum) > posSum){
			for(int i = 0;i < negative.size();i++){
				cout << negative[i] << " ";
			}
			for(int i = 0;i < positive.size();i++){
				cout << positive[i] << " ";
			}
			for(int i = 0; i< zero ; i++){
				cout << 0 << " ";
			}
		}else{
			for(int i = 0;i < positive.size();i++){
				cout << positive[i] << " ";
			}
			for(int i = 0;i < negative.size();i++){
				cout << negative[i] << " ";
			}
			for(int i = 0; i< zero ; i++){
				cout << 0 << " ";
			}

		}
		cout << endl;
	}
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
