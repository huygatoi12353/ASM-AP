#include "KeycapBuilder.h"

KeycapBuilder::KeycapBuilder()
{

}

KeycapBuilder::~KeycapBuilder()
{

}

KeycapBuilder::Keycap()
{
    int choice;
    cout << "Input your choice: " << endl;
    cin >> choice;
    if (choice == 1)
    {
        string x = "ABS";
        return x;
    }
    if (choice == 2)
    {
        string x = "PBT";
        return x;
    }
    if (choice == 3)
    {
        string x = "PC";
        return x;
    }
    if (choice != 1 && choice != 2 && choice !=3)
    {
        cout << "Invalid choice" << endl;
    }
}

SwitchBuilder::Switch()
{
    int choice;
    cout << "Input your choice: " << endl;
    switch(choice)
    {
        case 1: cout << "Red";
        break;
        case 2: cout << "Green";
        break;
        case 3: cout << "Borwn";
        break;
        default: cout << "Invalid choice";
        break;
    }
    if (choice == 1)
    {
        return "RED";
    }
    if (choice == 2)
    {
        return "GREEN";
    }
    if (choice == 3)
    {
        return "BROWN";
    }
    if (choice != 1 && choice != 2 && choice != 3)
    {
        cout << "Invalid choice" << endl;
    }
}

PlateBuilder::Plate()
{
    int choice;
    cout << "Input your choice: " << endl;
    cin >> choice;
    if (choice == 1)
    {
        return "MX";
    }
    if (choice == 2)
    {
        return "MXPLUS";
    }
    if (choice == 3)
    {
        return "ALPS";
    }
    if (choice != 1 && choice != 2 && choice != 3)
    {
        cout << "Invalid choice" << endl;
        return null;
    }
}

KeycapBuilder::build()
{
    this._KB.setkeycap();
}

SwitchBuilder::build()
{
    this._KB.setswitch();
}

PlateBuilder::build()
{
    this.KB.setplate();
}


