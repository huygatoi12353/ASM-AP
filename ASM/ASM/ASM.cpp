#include <iostream>
using namespace std;
#include "KeyboardBuilder.h"
#include "Keyboard.h"
#include "KeyboardDirector.h"
#include <string>
#include <vector>

int main()
{
    Keyboard* KB = new Keyboard();
    SwitchBuilder* switchB = new SwitchBuilder(KB);
    KeycapBuilder* keycapB = new KeycapBuilder(KB);
    PlateBuilder* plateB = new PlateBuilder(KB);
    TypeBuilder* typeB = new TypeBuilder(KB);

    vector <KeyboardBuilder*> builders;
    builders.push_back(keycapB);
    builders.push_back(plateB);
    builders.push_back(switchB);
    builders.push_back(typeB);
    
    KeyboardDirector director;
    director.setBuilder(builders);
    director.contructKeyboard();

    KB->showKeyboard(*KB);
}

