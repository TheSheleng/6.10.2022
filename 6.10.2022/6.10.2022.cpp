#include <iostream>
#include <conio.h>

#include "Transport.h"

using namespace std;

int main()
{
    Transport* transports = nullptr;

    cout << "1-Airplane\n2-Bike\n3-Jeep\n4-Vessel\n5-Truck\n" << endl;
    char butt = _getch();
    switch (butt)
    {
    case '1': transports = new Airplane("Boston-Kiev", 40); break;
    case '2': transports = new Bike("Blue"); break;
    case '3': transports = new Jeep("Audi"); break;
    case '4': transports = new Vessel("Pacific Ocean"); break;
    case '5': transports = new Truck("For ice cream"); break;
    }

    transports->Print();
    delete transports;
}