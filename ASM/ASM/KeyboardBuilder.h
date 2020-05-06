#include "Keyboard.h"
#pragma once
class KeyboardBuilder
{
	public:
		KeyboardBuilder();
		virtual ~KeyboardBuilder();
		virtual void build() = 0;
		KeyboardBuilder(Keyboard* KB);
	protected:
		Keyboard* _keyboard;
};

