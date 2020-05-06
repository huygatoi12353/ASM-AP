#pragma once
#include <string>
#include <iostream>
using namespace std;

class Keyboard
{
	public:
		Keyboard();
		virtual ~Keyboard();
		void setSwitch(string switch_);
		void setKeycap(string keycap_);
		void setPlate(string plate_);
		void showKeyboard(Keyboard& KB);
		void setType(string type_);
	private:
		string _switch;
		string _keycap;
		string _plate;
		string _type;
};

