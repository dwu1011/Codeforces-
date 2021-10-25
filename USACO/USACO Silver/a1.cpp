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


class cowClass{
  public:
    vector<int[1000]> cows(1000);
    void initCows();
    int comf = 0;
    void check(int x, int y);
    void init(int x, int y);
};
void cowClass::initCows(){
  for(int i = 0; i< 1000 ;i++){
    for(int j = 0; j< 1000; j++){
      cowObj.cows[i][j] = -1;
    }
  }
}
void cowClass::check(int x, int y){
  comf++;
  if(x-1 >= 0 && this->cows[x-1][y] == -1){//Check To the Left
    init(x-1,y);
  }
  if(y-1 >= 0 && cows[x][y-1] == -1){//Check Down
    init(x,y-1);
  }
  if(x+1 <= 999 && cows[x+1][y] == -1){//Check right
    init(x+1,y);
  }
  if(y+1 <= 999 && cows[x][y+1] == -1){//Check up
    init(x,y+1);
  }
  return;
}
void cowClass::init(int x,int y){
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
      check(x,y+1);
    }
    left = true;
    adj++;
  }
  if(y-1 >= 0 && cows[x][y-1] != -1){//Check Down
    cows[x][y-1] += 1;
    if(cows[x][y-1] == 3){
      check(x,y+1);
    }
    down = true;
    adj++;
  }
  if(x+1 <= 999 && cows[x+1][y] != -1){//Check right
    cows[x+1][y] += 1;
    if(cows[x+1][y] == 3){
      check(x,y+1);
    }
    right = true;
    adj++;
  }
  if(y+1 <= 999 && cows[x][y+1] != -1){//Check up
    cows[x][y+1] += 1;
    if(cows[x][y+1] == 3){
      check(x,y+1);
    }
    up = true;
    adj++;
  }
  cows[x][y] = adj;
  if(adj == 3){
    if(!left){
      check(x-1,y);
    }else if(!right){
      check(x+1,y);
    }else if(!up){
      check(x,y+1);
    }else if(!down){
      check(x,y-1);
    }
  }
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

  cowClass cowObj;
  cowObj.initCows();
  int n;
  cin >> n;

  for(int i = 0; i< n; i++){
    int x,y;
    cin >> x >> y;
    cowObj.init(x,y);
    cout << cowObj.comf << endl;
  }
}
