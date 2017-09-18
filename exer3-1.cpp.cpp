#include<iostream.h>
void main()
{
	int x;
	cout<<"please input x:"<<endl;
    cin>>x;
	if(x>=1000)
	cout<<":其数值在1000以上"<<endl;
	else
		if(x>=100)
			cout<<":其数值在100~999"<<endl;
		else
			if(x>=10)
				cout<<":其数值在10~99"<<endl;
			else
				cout<<":其数值小于10"<<endl;
}