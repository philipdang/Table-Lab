#include <iostream>
using namespace std;

class lamp
{
	private:
	color lampColor;
	int length, width;
	int area;

	public:
	bool isOn(string answer);
	void lamp_light();

	cout << "What is the length of the lamp?";
	cin >> length;

	cout << "What is the width of the lamp?";
	cin >> width;

	int area() {return length * width};
}

bool lamp::isOn(string answer)
{
	if (answer == "Yes" || answer == "yes")
		return true;
	else if (answer == "No" || answer == "no")
		return false;
}

void lamp::lamp_color()
{
	string color;

	cout << "Would you like the lamp to be White, Blue, Black, or Purple?"
	cin >> color

	if (color == "White" || color == "white")
	{
		cout << "You have chosen a white lamp." << break;
	}
	else if (color == "Blue" || color == "blue")
	{
		cout << "You have chosen a blue lamp." << break;
	}
	else if (color == "Black" || color == "black")
	{
		cout << "You have chosen a black lamp." << break;
	}
	else if (color == "Purple" || color == "purple")
	{
		cout << "You have chosen a purple lamp." << break;
	}
	else
	{
		cout << "Please choose the according colors from the list." << continue;
	}
}

void lamp::lamp_light()
{
	string answer;

	cout << "Would you like the lamp to be on?";
	cin >> answer;

	bool isItOn == isOn(answer);

	if (isItOn == true)
		cout << "The lamp is turned on." << endl;
	else
		cout << "The lamp is turned off." << endl;
}

int main()
{
	return 0;
}
