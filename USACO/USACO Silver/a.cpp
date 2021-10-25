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
vector<int[3003]> cows(3003);
ll comf = 0;



void checkCow(int x, int y, bool check){
  if(check){
    comf++;
    if(x-1 >= 0 && cows[x-1][y] == -1){//Check To the Left
      checkCow(x-1,y,false);
    }
    if(y-1 >= 0 && cows[x][y-1] == -1){//Check Down
      checkCow(x,y-1,false);
    }
    if(x+1 <= 3002 && cows[x+1][y] == -1){//Check right
      checkCow(x+1,y,false);
    }
    if(y+1 <= 3002 && cows[x][y+1] == -1){//Check up
      checkCow(x,y+1,false);
    }
  }else{
    if(cows[x][y] != -1){
      comf--;
      return;
    }
    cows[x][y] = 0;
    int adj = 0;
    bool left = false;
    bool right = false;
    bool up = false;
    bool down = false;
    if(x-1 >= 0 && cows[x-1][y] != -1){//Check To the Left
      cows[x-1][y] += 1;
      if(cows[x-1][y] == 3){
        checkCow(x-1,y,true);
      }
      left = true;
      adj++;
    }
    if(y-1 >= 0 && cows[x][y-1] != -1){//Check Down
      cows[x][y-1] += 1;
      if(cows[x][y-1] == 3){
        checkCow(x,y-1,true);
      }
      down = true;
      adj++;
    }
    if(x+1 <= 3002 && cows[x+1][y] != -1){//Check right
      cows[x+1][y] += 1;
      if(cows[x+1][y] == 3){
        checkCow(x+1,y,true);
      }
      right = true;
      adj++;
    }
    if(y+1 <= 3002 && cows[x][y+1] != -1){//Check up
      cows[x][y+1] += 1;
      if(cows[x][y+1] == 3){
        checkCow(x,y+1,true);
      }
      up = true;
      adj++;
    }
    cows[x][y] = adj;
    if(adj == 3){
      if(!left){
        checkCow(x-1,y,true);
      }else if(!right){
        checkCow(x+1,y,true);
      }else if(!up){
        checkCow(x,y+1,true);
      }else if(!down){
        checkCow(x,y-1,true);
      }
    }
  }
  return;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  for(int i = 0; i< 3003 ;i++){
    for(int j = 0; j< 3003; j++){
      cows[i][j] = -1;
    }
  }
  ll n;
  cin >> n;

  for(int i = 0; i< n; i++){
    int x,y;
    cin >> x >> y;
    checkCow(x+1000,y+1000,false);
    cout << comf << endl;
  }
}
