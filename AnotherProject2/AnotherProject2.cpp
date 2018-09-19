// AnotherProject2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

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


	std::cout << "hey." << std::endl;

	User my_user = User("con", "brew");

	my_user.setPassword("newpass111");

    return 0;
}

