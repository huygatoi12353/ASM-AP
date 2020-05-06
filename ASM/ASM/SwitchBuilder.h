#include "KeyboardBuilder.h"
#include <iostream>
#include "Keyboard.h"
#pragma once
using namespace std;

class SwitchBuilder : public KeyboardBuilder
{
	public:
		void build();
		SwitchBuilder(Keyboard* KB);
};

class PlateBuilder : public KeyboardBuilder 
{
public:
	void build();
	PlateBuilder(Keyboard* KB);
};

class KeycapBuilder : public KeyboardBuilder
{
public:
	void build();
	KeycapBuilder(Keyboard* KB);
};

class TypeBuilder : public KeyboardBuilder
{
public:
	void build();
	TypeBuilder(Keyboard* KB);
	
};