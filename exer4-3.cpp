#include <iostream.h>
void main()
{
	int n;
	cout<<"请输入一个正整数："<<endl;
	cin>>n;
	for (n;n!=1;)
	{
		if (n%2==0)
		{	
			n=n/2;
			cout<<n<<" ";
		}
		else
		{	
			n=n*3+1;
			cout<<n<<" ";
		}
	}
}
			


