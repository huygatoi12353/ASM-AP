#ifndef CUSTOMERREQUIREMENT_H
#define CUSTOMERREQUIREMENT_H
#include<Keyboard.h>
#include<KeyboardBuild.h>
#include<KeycapBuilder.h>
#include<vector>
#include<iostream>
using namespace std

class CustomerRequirement
{
    public:
        CustomerRequirement();
        virtual ~CustomerRequirement();
        void addBuild(vector<KBBuild*> Builder);
        void building();
    private:
        vector<KBBuild*> KeyboardBuilder;
};

#endif // CUSTOMERREQUIREMENT_H
