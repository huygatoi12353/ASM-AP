#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <iostream>
#include <string>
using namespace std


class Keyboard
{
    public:
        Keyboard();
        virtual ~Keyboard();
        void setswitch (string s);
        void setkeycap (string k);
        void setplate (string p);
    private:
        string _switch;
        string _keycap;
        string _plate;
};

#endif // KEYBOARD_H
