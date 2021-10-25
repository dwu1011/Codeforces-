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
  int N, K;
  cin>> N >> K;
  K--;
  ll ans = 0;

  vector<int> years(N);
  for(int i = 0; i< N; i++){
    cin >> years[i];
  }
  sort(years.begin(),years.end(),greater<int>());
  /*
  for(int i = 0; i< N; i++){
    cout << years[i] << endl;
  }*/

  int preMax = ((years[0]/12)+1) * 12;
  set<int,greater<int>> inter;
  for(int i = 0; i< years.size(); i++){
    inter.insert((years[i]/12)+1);
  }
  map<int,int,greater<int>> jumps;
  int prev = -1;
  for(auto i: inter){
    if(prev == -1){
      prev = i;
      jumps.insert(make_pair(prev,1));
    }
    if(prev == i + 1){
      jumps[prev] ++;
    }else{
      prev = i;
      jumps.insert(make_pair(prev,1));
    }
  }
  jumps.insert(make_pair(0,0));
  /*
  for(auto i:jumps){
    cout<< i.first << " "<< i.second<< endl;
  }*/
  for(auto i:jumps){
    ans += i.second*12;
  }
  vector<int> cowDiff;
  int temp1, temp2;
  temp1 = -1;
  temp2 = -1;

  for(auto i: jumps){
    if(temp1 == -1){
      temp1 =  i.first;
      temp2 = i.second;
    }else{
      cowDiff.pb((temp1-temp2)-i.first);
      temp1 = i.first;
      temp2 = i.second;
    }
  }
  sort(cowDiff.begin(),cowDiff.end());
  for(int i = 0; i< cowDiff.size()-K; i++){
    ans += cowDiff[i]*12;
  }
  cout << ans << endl;
}
