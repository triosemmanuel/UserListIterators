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

User* search(list<User> *user_list, string username)
{
	list<User>::iterator it;
	for (it = (*user_list).begin(); it != (*user_list).end(); it++)
	{
		if ((*it).getUsername() == username) {
			// Found!!
			cout << (*it).getUsername() << endl;
			//cout << **it << endl;
			system("PAUSE");
			return &(*it);
			//return it;
		}
	}

	return NULL;
}

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

	// Print out every user / password
	list<User>::iterator it;
	for (it = user_list.begin(); it != user_list.end(); it++)
	{
		cout << (*it).getUsername() << "\t\t" << (*it).getPassword() << endl;
	}


	string chosen_username;
	cout << "Enter a username to search for: ";
	cin >> chosen_username;

	User* found;
	found = search(&user_list, chosen_username);

	if (found != NULL)
	{
		cout << "Found" << endl;
		//cout << found << endl;

		cout << (*found).getPassword() << endl;
	}
	else
		cout << "Not found";

	system("PAUSE");
    return 0;
}

