#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
	auto_ptr<string> ps(new string("hello worold"));
	cout<<*ps<<endl;
	cout<<ps->size()<<endl;
}
