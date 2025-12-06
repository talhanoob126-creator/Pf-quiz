//Write a program that simulates online course subscriptions. Read N users, read subscription price.
//If price > 1500 mark as Premium Subscriber. Print total income and count of premium. Use variables, IO, loops, if/else.
#include<iostream>
using namespace std;
int main()
{
	int users, i, premiumcount = 0;
	double price, totalIncome = 0;
	cout << "Enter the number of users: " ;
	cin >> users;
	for(i =1; i <=users ; i++)
	{
		cout << " Enter subscription price for user " << i << ":";
		cin >> price;
		totalIncome += price;
		if(price>1500)
		{
			cout << "User " << i << "is a premium subscriber" << endl;
			premiumcount++;
		}
		else 
		cout << "User " << i << "is a regular subscriber" << endl;
	}
	cout << "\nTotal Income: " << totalIncome << endl;
		cout << "Total premium users: " << premiumcount << endl;
		return 0;
	
}
 
