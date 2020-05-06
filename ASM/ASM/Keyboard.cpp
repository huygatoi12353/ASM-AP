#include "Keyboard.h"

Keyboard::Keyboard()
{
	this->_switch = "";
	this->_keycap = "";
	this->_plate = ""; 
}
Keyboard::~Keyboard()
{

}
void Keyboard::setSwitch(string switch_)
{
	this->_switch = switch_;
}
void Keyboard::setKeycap(string keycap_)
{
	this->_keycap = keycap_;
}
void Keyboard::setPlate(string plate_)
{
	this->_plate = plate_;
}
void Keyboard::setType(string type_)
{
	this->_type = type_;
}
void Keyboard::showKeyboard(Keyboard& KB)
{
	cout << "Your keyboard is: " << KB._keycap << ", " << KB._plate << ", " << KB._switch << " ," <<  KB._type << endl;
}