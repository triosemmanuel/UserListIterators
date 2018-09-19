// AnotherProject2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <string>
#include <iostream>
#include <list>

using namespace std;


class User
{
	string Username;
	string Password;

public:

	User(string username, string password)
	{
		Username = username;
		Password = password;
	}

	string getUsername() // Read only!!!
	{
		return Username;
	}

	string getPassword()
	{
		return Password;
	}

	void setPassword(string password)
	{
		Password = password;

	}
};


int main()
{
	list<User> user_list = list<User>();

	User my_user = User("con", "brew");
	user_list.push_back(my_user);

	my_user = User("vik", "mur");
	user_list.push_back(my_user);

	my_user = User("alex", "tav00");
	user_list.push_back(my_user);
	
	/*
	int i;
	for (i = 0; i < userCount; i++)
	{

	}*/

	list<User>::iterator it;
	for (it = user_list.begin(); it != user_list.end(); it++)
	{
		cout << (*it).getUsername() << endl;
	}


	system("PAUSE");
    return 0;
}

