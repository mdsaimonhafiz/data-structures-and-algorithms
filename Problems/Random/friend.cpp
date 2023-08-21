#include <bits/stdc++.h>

using namespace std;

class Terminal{
  private:
    int cnt;
  public:
    Terminal(int c){
      cnt=c;
    }
    friend void show(Terminal a);
};
void show(Terminal a){
  cout << a.cnt << endl;
}
int main(){
  Terminal now(2);
  show(now);
  return 0;
}
