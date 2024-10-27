#include<iostream> //search garbage value:
using namespace std;
int main ()
{
	int password,i;
	i=1;
	
		
	while (i>0)
	{
		cout<<"Enter your password"<<endl;
	cin>>password;
		i++;
		if (password==12345)
		{
		
			cout<<"Login successful"<<endl;
		}
		else 
		{
			break;
		}
	}
	return 0;
}