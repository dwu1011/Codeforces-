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
int pasture[500][500];
int tot = 0;
set<ll> been;

void flood_fill_rect(int x, int y,int lenX, int lenY){

  tot++;

  int x2 = x+lenX;
  int y2 = y+lenY;
  //cout << x << " " << y << " " << x2 << " " << y2 << endl;
  //cout << tot << endl;
  //check top
  bool valid = true;
  for(int i = x; i <= x2; i++){
    if(pasture[i][y2+1] < 100 && y2+1 < 500){
      valid = false;
    }
  }
  if(valid && y2+1 < 500){
    ll temp = (x*1000000000)+(y*1000000)+(x2*1000)+y2+1;
    if(!been.count(temp)){
      been.insert(temp);
      flood_fill_rect(x,y,lenX,lenY+1);
    }
  }
  //check bottom
  valid = true;
  for(int i = x; i <= x2; i++){
    if(pasture[i][y-1] < 100 && y-1 >= 0){
      valid = false;
    }
  }
  if(valid && y-1 >= 0){
    ll temp = (x*1000000000)+((y-1)*1000000)+(x2*1000)+y2;
    if(!been.count(temp)){
      been.insert(temp);
      flood_fill_rect(x,y-1,lenX,lenY+1);
    }
  }
  //check right
  valid = true;
  for(int i = y; i <= y2; i++){
    if(pasture[x2+1][i] < 100 && x2+1 < 500){
      valid = false;
    }
  }
  if(valid && x2+1 < 500){
    ll temp = (x*1000000000)+(y*1000000)+((x2+1)*1000)+y2;
    if(!been.count(temp)){
      been.insert(temp);
      flood_fill_rect(x,y,lenX+ 1,lenY);
    }
  }
  //check Left
  valid = true;
  for(int i = y; i <= y2; i++){

    if(pasture[x-1][i] < 100 && x-1 >= 0){
      valid = false;
    }
  }
  if(valid && x-1 >= 0){
    ll temp = ((x-1)*1000000000)+(y*1000000)+((x2)*1000)+y2;
    if(!been.count(temp)){
      been.insert(temp);
      flood_fill_rect(x-1,y,lenX+1,lenY);
    }
  }
  return;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
  int n;
  cin >> n;
  vector<pair<int,int>> hundred;
  for(int i = 0; i< n; i++){
    for(int j =0 ;j < n; j++){
      cin >> pasture[i][j];
      if(pasture[i][j] == 100){
        hundred.pb({i,j});
      }
    }
  }
  for(auto i: hundred){
    flood_fill_rect(i.first,i.second,0,0);
  }
  cout << tot << endl;
}
