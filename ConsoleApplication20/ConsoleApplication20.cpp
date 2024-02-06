#include <iostream>
#include<string>
#include<cassert>
using namespace std;

class Admin {
	string _name;
	string _surname;
	string _password;
	string _username;
public:
	void Menu() {
		string menu = R"(
		1.Sing In
		2.Sing Up
	)";
		cout << menu << endl;
		int choice;
		cout << "Enter choice: ";
		cin >> choice;
		if (choice == 1) {
			string username;
			string password;
			cout << "Enter name: ";
			cin >> username;
			cout << "Enter password: ";
			cin >> password;

			if (username == "admin" && password == "admin123") {
				cout << "~~~~~~~~~~~~~~~~~Welcome " << username << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			}
			else { assert(!"Invalid username or password!"); }
		}
		else if (choice == 2) {
			string name;
			string surname;
			string password;
			string username;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter surname: ";
			cin >> surname;
			cout << "Enter password: ";
			cin >> password;
			cout << "Enter username : ";
			cin >> username;
			Admin admin(name, surname, password, username);
			cout << endl;

			cout << "~~~~~~~~~~~~~~~~~Welcome " << name << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		}
	}
	Admin() {
		_name = "";
		_surname = "";
		_password = "";
		_username = "";
	}

	Admin(string name, string surname, string password, string username) {
		SetName(name);
		SetSurname(surname);
		SetPassword(password);
		SetUsername(username);
	}
	string GetName() { return _name; }
	string GetSurname() { return _surname; }
	string GetPassword() { return _password; }
	string Username() { return _username; }

	void SetName(string name) {
		if (name.length() >= 3 && name.length() <= 20) {
			_name = name;
		}
		else { assert(!"Name can be minimum 3 and maximum 20"); }
	}
	void SetSurname(string surname) {
		if (surname.length() >= 3 && surname.length() <= 20) {
			_surname = surname;
		}
		else { assert(!"Surname can be minimum 3 and maximum 20"); }
	}
	void SetUsername(string username) {
		if (username.length() >= 3 && username.length() <= 20) {
			_username = username;
		}
		else { assert(!"Username can be minimum 3 and maximum 20"); }
	}
	void SetPassword(string password) {
		if (password.length() >= 3 && password.length() <= 20) {
			_password = password;
		}
		else { assert(!"Password can be minimum 3 and maximum 20"); }
	}
};

void main()
{
	Admin admin;
	admin.Menu();
}
