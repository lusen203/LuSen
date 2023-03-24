#include<iostream>
using namespace std;
class A{
	int a,b;
	public:
		void set(){
			a=2;
			b=3;
		}
		friend void tinh(A dt);
};

void tinh( A dt){
	cout<<"Dien tich: "<<dt.a*dt.b;
}

int main(){
	A a;
	a.set();
	tinh(a);
}
