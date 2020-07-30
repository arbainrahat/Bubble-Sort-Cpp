#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter Array of 5 Numbers\n";
	int a[5];
	int i,j,swap;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	i=4;
	while(i>0)
	{
		j=0;
		while(j<i)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
			j=j+1;
		}
		i=i-1;
	}
	cout<<"Bubble Sort(Ascending Order)\n";
	for(i=0;i<5;i++){
		cout<<a[i]<<"	";
	}
	cin.get();
	system("pause");
}
