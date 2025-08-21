#include <iostream>
#include <cctype>
using namespace std;

struct Person {
	string name;
	int age;
};

void verify(string name, int age) {
	char ans;
	cout << "VERIFICATION\n";

	cout << "Is your name " << name << "?[y/n] ";
	cin >> ans;

	switch (ans) {
	case 'y':
		cout << "Then we are correct\n";
		break;
	case 'n':
		cout << "Then what is your name? ";
		cin >> name;
		break;
	default:
		cout << "Only `y` and `n` are accepted.\n";
		break;
	}

	cout << "Is your age " << age << "?[y/n] ";
	cin >> ans;

	switch (ans) {
	case 'y':
		cout << "Then we are correct\n";
		break;
	case 'n':
		cout << "Then how old are you? ";
		cin >> age;
		break;
	default:
		cout << "Only `y` and `n` are accepted.\n";
		break;
	}
	cout << "Now your name is " << name << " and your age is " << age << endl;
}

Person askInfo(Person p) {
	cout << "What is your name? ";
	cin >> p.name;
	cout << "How old are you? ";
	cin >> p.age;

	cout << "Okay, your name is " << p.name << " and you are " << p.age << " years old.\n";
	return {p.name, p.age};
}

int main() {
	Person p;
	Person res = askInfo(p);
	
	verify(res.name, res.age);

	return 0;
}