#include<bits/stdc++.h>

using namespace std;

class P{
  public:
    virtual void show() = 0;
};

class d : public P{
  public:
    void show(){
      cout << "d"<<endl;
    }
};

int main(){
  
  d D;
  P* p=&D;
  p->show();
  return 0;
}
