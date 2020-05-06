#include "SwitchBuilder.h"


SwitchBuilder::SwitchBuilder(Keyboard* KB) : KeyboardBuilder(KB)
{

};

KeycapBuilder::KeycapBuilder(Keyboard* KB) : KeyboardBuilder(KB)
{

};
PlateBuilder::PlateBuilder(Keyboard* KB) : KeyboardBuilder(KB)
{
	
};

TypeBuilder::TypeBuilder(Keyboard* KB) : KeyboardBuilder(KB)
{

}

void TypeBuilder::build()
{
	int choice;
	string type_ = "";
	cout << "Select switch type: " << endl;
	cout << "1. Fake" << endl;
	cout << "2. Auth" << endl;
	cin >> choice;
	if (choice == 1)
	{
		type_ = "Fake";
	}
	if (choice == 2)
	{
		type_ = "Auth";
	}
	this->_keyboard->setType(type_);
}

void SwitchBuilder::build()
{
	int choice;
	string switch_ = "";
	cout << "Select switch type: " << endl;
	cout << "1. Red" << endl;
	cout << "2. Blue" << endl;
	cout << "3. Brown" << endl;
	cin >> choice;
	if (choice == 1)
	{
		switch_ = "Red";
	}
	if (choice == 2)
	{
		switch_ = "Blue";
	}
	if (choice == 3)
	{
		switch_ = "Borwn";
	}

	this->_keyboard->setSwitch(switch_);
};


void PlateBuilder::build()
{
	int choice;
	string plate_ = "";
	cout << "Select plate type: " << endl;
	cout << "1. MX" << endl;
	cout << "2. MX-Plus" << endl;
	cout << "3. MXT" << endl;
	cin >> choice;
	if (choice == 1)
	{
		plate_ = "MX";
	}
	if (choice == 2)
	{
		plate_ = "MX-Plus";
	}
	if (choice == 3)
	{
		plate_ = "MXT";
	}
	this->_keyboard->setPlate(plate_);
};


void KeycapBuilder::build()
{
	int choice;
	string keycap_ = "";
	cout << "Select keycap type: " << endl;
	cout << "1. ABS" << endl;
	cout << "2. PC" << endl;
	cout << "3. PBT" << endl;
	cin >> choice;
	if (choice == 1)
	{
		keycap_ = "ABS";
	}
	if (choice == 2)
	{
		keycap_ = "PC";
	}
	if (choice == 3)
	{
		keycap_ = "PBT";
	}
	this->_keyboard->setKeycap(keycap_);
};


