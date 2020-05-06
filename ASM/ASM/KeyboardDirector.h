#include <vector>
#include "Keyboard.h"
#include "KeyboardBuilder.h"
#include "SwitchBuilder.h"
#include <string>
#include <iostream>
#pragma once
using namespace std;

class KeyboardDirector
{
	public:
		KeyboardDirector();
		virtual ~KeyboardDirector();
		void setBuilder(vector <KeyboardBuilder*> builders);
		void contructKeyboard();
	private:
		vector<KeyboardBuilder*> _builders;
};

