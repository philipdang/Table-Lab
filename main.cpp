#include <iostream>
#include <string>

using namespace std;

class lamp
{

enum color{yellow, white}

cout << "What color is the lamp?  << endl;
cin >> color
cout << "The lamp is " << color << ".\n"

cout << "Do you want the lamp to turn on or off?" << endl;

bool isOn = false;
void ButtonPress()
{
	isOn = !isOn;
	if(isOn)
		TurnLampOn();
	if(!isOn)
		TurnLampOff();
}

}
