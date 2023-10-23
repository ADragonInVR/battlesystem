#include<iostream>
using namespace std;

void battlesystem();
int monstergen();
int playerhealth = 100;

int main() {
	int room = 1;
	char input = 'a';
	while (playerhealth >= 0 && input != 'q') {
		switch (room) {
		case 1:
			cout << "your in room 1 you can go (s)outh" << endl;
			cin >> input;
			if (input == 's')
				room = 2;
			break;
		case 2:
			battlesystem();
			cout << "your in room 2 you can go (n)orth" << endl;
			cin >> input;
			if (input == 'n')
				room = 1;
			break;
		}
	}
}

int monstergen() {
	int num = rand() % 100;
	if (num < 50) {
		cout << "a gus is here" << end; 1
			return 1;
	}
	else {
		cout << "a dragon is here" << endl;
		return 2;
	}
}

void battlesystem() {
	int monstertype = monstergen();
	int monsterhealth = 0;

	if (monstertype == 1)
		monsterhealth = 100
	else if (monstertype == 2) {
	    monsterhealth = 1000
	}

	while (monsterhealth > 0 && playerhealth > 0) {
		if (monstertype == 1)
			monsteratk = () % 25;
		else if
	}
	while (monsterhealth > 0 && playerhealth > 0) {
		cout << "the monster attacks you for 12 dmg!" << endl;
		playerhealth -= 10;
		cout << "you attack the monster for 10 dmg!" << endl;
		system(pause);
		cout << "your health is now" << ", and the monsters health is" << monsterhealth << endl;

}
}
