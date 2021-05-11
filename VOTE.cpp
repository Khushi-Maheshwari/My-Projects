#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"Enter age of Candidate : ";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You are able for Voting.....";
	}
	else
	{
		cout<<"You are not able for Voting....";
	}
	return 0;
}
