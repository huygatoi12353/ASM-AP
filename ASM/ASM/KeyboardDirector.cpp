#include "KeyboardDirector.h"

KeyboardDirector::KeyboardDirector()
{
	
}

KeyboardDirector::~KeyboardDirector()
{
	for (int i = 0; i < this->_builders.size(); i++)
	{
		delete this->_builders[i];
	}
}

void KeyboardDirector::setBuilder(vector <KeyboardBuilder*> builders)
{
	this->_builders = builders;
}

void KeyboardDirector::contructKeyboard()
{
	for (int i = 0; i < this->_builders.size(); i++)
	{
		this->_builders[i]->build();
	}
}