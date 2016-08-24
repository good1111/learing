#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> getGray(int n)
{
	vector<string> res;
	vector<string> getG;
	if(n==1)
	{
		getG.push_back("0");
		getG.push_back("1");
	}
	else
		res=getGray(n-1);
	for(auto it=res.begin();it!=res.end();it++)
	{
		getG.push_back("0"+*it);
	}
	for(auto cit=res.crbegin();cit!=res.crend();cit++)
	{
		getG.push_back("1"+*cit);
	}
		
	return getG;
}	

int main()
{
	int n;
	cin>>n;
	vector<string> res;
	res=getGray(n);
	for(auto it=res.begin();it!=res.end();it++)
		cout<<*it<<endl;
}
