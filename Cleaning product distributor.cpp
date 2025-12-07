//Write a program for a cleaning products distributor. Read N orders and price per order. If price < 700 mark “Small Order”, otherwise mark “Large Order”.
//Print total revenue and number of large orders. Use variables, input/output, loops and if/else.
#include<iostream>
using namespace std;
int main()
{
	int orders;
	float price;
	float totalRevenue = 0;
	int largeCount = 0;
	cout << "Enter number of orders: ";
	cin >> orders;
	for(int i=1; i<=orders; i++)
	{
		cout << "Enter price of orders" << i << ":";
		cin >> price
	;
	totalRevenue += price;
	if(price < 700)
	{
	cout << "Small order" << endl;

	}
	else 
	{	
	cout << "Large order" << endl;
	largeCount++;
}
	}	
    cout << "Tota Revenue " << totalRevenue <<  endl;
    cout << "Number of large order " << largeCount << endl;
return 0;
}

