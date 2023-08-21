#include <bits/stdc++.h>

using namespace std;


//~ class Centre {
	//~ public:
	//~ int x;
	//~ int y;
	//~ public:
	//~ Centre operator-(Centre b);
	
//~ };
//~ Centre Centre::operator -(Centre b){
		//~ Centre c;
		//~ c.x=(x+b.x)/2;
		//~ c.y=(y+b.y)/2;
		//~ return c;
//~ }
//~ // object pointer
//~ class Rectangle{
	//~ private:
		//~ int width;
		//~ int height;
	//~ public:
		//~ Rectangle(int w,int h){
			//~ height=h;
			//~ width=w;
		//~ }
		//~ void set(int w,int h);
		//~ int area();
//~ };
//~ void Rectangle::set(int w,int h){
	//~ height = h;
	//~ width = w;
//~ }
//~ int Rectangle::area(){
	//~ return (height*width);
//~ }
class Rectangle{
	public:int length,width;
	public: int id;
	public: static int cnt;
	
	Rectangle(int l,int w){
		length = l;
		width = w;
		id = ++cnt;
		
	}
	public:void set(int l,int w){
		length=l;
		width=w;
	}
	public:int getArea(){
		return (width*length);
	}
	public:static int multi(int x,int y){
		return x*y;
	}
};

int Rectangle::cnt=0;

int main(){
	//~ Centre o;
	//~ o.x=1;
	//~ o.y=1;
	//~ Centre o1;
	//~ o1.x=3;
	//~ o1.y=1;
	//~ Centre o2;
	//~ o2=o-o1;
	//~ cout << "mid point: "<<o2.x<<","<<o2.y;
	//~ Rectangle r3;
	//~ r3.set(2,4);
	//~ cout << r3.area();
	//~ Rectangle *r;
	//~ r=new Rectangle();
	//~ r->set(3,4);
	//~ delete r;
	//~ r=NULL;
	//~ cout << r->area();
	//~ Rectangle a(9,0);
	//~ Rectangle * b;
	//~ b=&a;
	//~ b->set(9,9);
	//~ cout << a.area()<< " "<< b->area();
	Rectangle s1(1,1);
	Rectangle s2(2,2);
	Rectangle s3(3,3);
	cout << s3.id;
	
	
	
}
