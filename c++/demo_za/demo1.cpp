#include <iostream>
using namespace std;

struct B{};
struct D1:public B{};
struct D2:public D1{};

template <class I>
void func(I&p,B)
{
	cout<<"B....."<<endl;
}
template <class I>
void func(I&p,D2)
{
	cout<<"D2..."<<endl;
}

int main()
{
	int *p=0;
	func(p,B());
	func(p,D1());
	func(p,D2());
}
