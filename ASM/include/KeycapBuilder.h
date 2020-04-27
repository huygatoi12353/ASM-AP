#ifndef KEYCAPBUILDER_H
#define KEYCAPBUILDER_H
#include<Keyboard.h>
#include<KeyboardBuild.h>
#include<string>

class KeycapBuilder : public KeycapBuilder
{
    public:
        void build();
    private:
       string Keycap();
       string _Keycap;
};

class SwitchBuilder : public KeycapBuilder
{
    public:
        void build();
    private:
        string Switch();
        string _Switch;
};

class PlateBuilder  : public KeycapBuilder
{
    public:
        void build();
    private:
        string Plate();
        string _Plate;
};

#endif // KEYCAPBUILDER_H
