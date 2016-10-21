class lamp
{
private:
	color lampColor;
	int length, width;
	int area = get_area();

public:
	int get_area() {return length * wdith;}

	void get_length()
	{
		cout << "What is the length of the lamp? ";
		cin >> length;
	}
	void get_width()
	{
		cout << "What is the width of the lamp? ";
		cin >> width;
	}

	void get_color();
	void lamp_light();
	bool isOn();
};

void lamp::get_color()
{
	string answer;
	while(true)
	{
		cout << "Would you like a BLACK, BLUE, PURPLE, OR WHITE table? ";
		cin >> answer;
		if (answer == "Black" || answer == "black")
		{
			lampColor = black;
			break;
		}
		else if (answer == "Blue" || answer == "blue")
		{
			lampColor = blue;
			break;
		}
		else if (answer == "Purple" || answer == "purple")
		{
			lampColor = purple;
			break;
		}
		else if (answer == "White" || answer == "white")
		{
			lampColor = white;
			break;
		}
		else
		{
			cout << "Please choose only one of the available colors." << endl;
			continue;
		}
	}
}

bool lamp::isOn()
{
	bool temp;
	while(true)
	{
		char answer;

		cout << "Would you like the lamp to be on(y/n)? ";
		cin >> answer;
		if (answer == 'Y' || answer == 'y')
		{
			temp = true; // lamp is on
			return temp;
			break;
		}
		else if (answer == 'N' || answer == 'n')
		{
			temp = false; // lamp is off
			return temp;
			break;
		}
		else
		{
			cout << "Please answer y or n only." << endl;
		}
	}
}

void lamp::lamp_light()
{
	bool isItOn = isOn();

	if (isItOn == true)
		cout << "The lamp is turned on." << endl;
	else
		cout << "The lamp is turned off." << endl;
}
