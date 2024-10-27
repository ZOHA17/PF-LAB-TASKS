#include<iostream> 
using namespace std;
int main ()
{
	float n;
	float sum=0;
	int i=1;
	do
	{
	cout<<"Enter a positive number"<<endl;
	cin>>n;
	sum=sum+n;
	i++;	
	}
	while (i<5);
	
	float average;
	average=sum/4;
	cout<<"Average is"<<average<<endl;
	return 0;
}