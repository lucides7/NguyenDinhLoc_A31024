# include <iostream>
using namespace std;
int main()
{
	char y;
	do
	{
	int a;
	cout<<"nhap so nam: ";
	cin>>a;
	if ((a%100!=0) && (a%4==0) || (a%400==0))
		cout<<"la nam nhuan"<<endl;
	else
		cout<<"khong la nam nhuan"<<endl;
	cout<<"tiep tuc (y/n): ";
	cin>>y;
	}
	while(y!='n');
	return 0;

}