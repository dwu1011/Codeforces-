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
	cin >> n;
	vector<int> piles(n);
	for(int i = 0; i< n; i++){
		cin >> piles[i];
	}
	for(int i = 0; i<n;i++){
		if(piles[i] > 1){
			if(i%2!= 0){
				cout << "Second" << endl;
				break;
			}else{
				cout << "First"<<endl;
				break;
			}
		}
	}
	sort(piles.begin(),piles.end());
	if(piles[0] == piles[n-1] && piles[0] == 1){
		if(n % 2 == 0){
			cout << "Second" <<endl;
		}else{
			cout << "First" << endl;
		}
	}

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
