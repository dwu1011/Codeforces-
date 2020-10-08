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

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int num;
	cin >> num;
	map<int,int> lengths;
	int temp;
	REP(i,0,num){
		cin >> temp;
		if(lengths.count(temp)){
			map[temp] = map[temp] + 1;
		}else{
			
		}
	}
}
