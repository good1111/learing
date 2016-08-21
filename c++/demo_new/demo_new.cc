#include <iostream>
using namespace std;
class myclass
{
public:
	myclass()
	{
		cout<<"this is construct!!!"<<endl;
	}
	~myclass()
	{
		cout<<"destruct ...."<<endl;
	}

};
int main()
{
	myclass * pcla=new myclass;
	pcla->~myclass();
	delete pcla;
}
