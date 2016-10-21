<<<<<<< HEAD
#include<iostream>
#include<list>
#include<string>

using namespace std;

enum color {black, blue, purple, white};
enum material {wood, steel, plastic};

class table;
class book;
class tissueBox;
class lamp;

/* 
-----
Main
-----
*/
int main(void)
{

}

/*
-----
Table Class
-----
*/
class table
{
private:
    color tableColor;
    material tableMadeOf;
    int length, width;
    int freeSpace;
    int area = get_area();
    
public:
    int available() {return freeSpace;}
    
    void get_length()
    {
        cout << "What is the length of the table? ";
        cin >> length;
    }
    void get_width()
    {
        cout << "What is the width of the table? ";
        cin >> width;
    }
    
    void add_book(book aBook, bool huh);
    void remove_book(book aBook, bool huh);
    
    void add_tissueBox(tissueBox box, bool huh);
    void remove_tissueBox(tissueBox box, bool huh);
    
    void add_lamp(lamp aLamp, bool huh);
    void remove_lamp(lamp aLamp, bool huh);
    
    int get_area()
    {
        freeSpace = length * width;
        return length * width;
    }
    void get_color();
    void get_material();
    void output_areas(book aBook, tissueBox box, lamp aLamp, bool huhBook, bool huhBox, bool huhLamp);
};

/*
-----
Book Class
-----
*/
class book
{
private:
    enum isOpen {open, closed};
    
    isOpen isItOpen;
    int numPages, length, width;
    int area = get_area();
    string title;
    
public:
    int number_of_pages() const{return numPages;}
    string get_title() const{return title;}
    
    void get_length()
    {
        cout << "What is the length of the book? ";
        cin >> length;
    }
    void get_width()
    {
        cout << "What is the width of the book? ";
        cin >> width;
    }
    int get_area() {return length * width;}
    
    void is_book_open();
};

/*
-----
Tissue Box Class
-----
*/
class tissueBox
{
private:
    int numTissues, currentTissues = 100 /* max */, maxTissues = 100, length, width;
    int area = get_area();

public:
    int number_of_tissues() const{return numTissues;}
    int current_tissues() const{return currentTissues;}
    
    void get_length()
    {
        cout << "What is the length of the tissue box? ";
        cin >> length;
    }
    void get_width()
    {
        cout << "What is the width of the tissue box? ";
        cin >> width;
    }
    void use_tissue()
    {
        currentTissues = currentTissues - 1;
    }
    void wanna_use_tissue(tissueBox box);
    
    int get_area() {return length * width;}
};

/*
-----
Functions From Table Class
-----
*/
void table::add_book(book aBook, bool huh)
{
    char response;
    while(true)
    {
        cout << "Would you like to place a book on the table(y/n)? ";
        cin >> response;
        cout << endl;
        
        if (response == 'Y' || response == 'y')
        {
            aBook.get_length();
            aBook.get_width();
            aBook.is_book_open();
            aBook.get_area();
            break;
       }
        else if (response == 'N' || response == 'n')
        {
            break;
        }
        else
            cout << "Please answer Y or N only." << endl;
    }
    if (freeSpace >= aBook.get_area())
    {
        huh = true;
        freeSpace = freeSpace - aBook.get_area();
    }
    else
    {
        huh = false;
        cout << "The book doesn't fit on the table." << endl;
    }
}
void table::remove_book(book aBook, bool huh)
{
    while(true)
    {
        char response;
        cout << "Would you like to remove the book from the table(y/n)? ";
        cin >> response;
        cout << endl;
        
        if (response == 'Y' || response == 'y')
        {
            huh = false;
            freeSpace = freeSpace + aBook.get_area();
            break;
        }
        else if (response == 'N' || response == 'n')
        {
            break;
        }
        else
            cout << "Please answer Y or N only." << endl;
    }
}

void table::add_tissueBox(tissueBox box, bool huh)
{
    while(true)
    {
        char response;
        cout << "Would you like to place a tissue box on the table(y/n)? ";
        cin >> response;
        cout << endl;
        
        if (response == 'Y' || response == 'y')
        {
            box.get_length();
            box.get_width();
            box.get_area();
            box.wanna_use_tissue(box);
            break;
        }
        else if (response == 'N' || response == 'n')
        {
            break;
        }
        else
            cout << "Please answer Y or N only." << endl;
    }

    if (freeSpace >= box.get_area())
    {
        huh = true;
        freeSpace = freeSpace - box.get_area();
    }
    else
    {
        huh = false;
        cout << "The tissue box doesn't fit on the table." << endl;
    }
}
void table::remove_tissueBox(tissueBox box, bool huh)
{
    while(true)
    {
        char response;
        cout << "Would you like to remove the tissue box from the table(y/n)? ";
        cin >> response;
        cout << endl;
        
        if (response == 'Y' || response == 'y')
        {
            huh = false;
            freeSpace = freeSpace + box.get_area();
            break;
        }
        else if (response == 'N' || response == 'n')
        {
            break;
        }
        else
            cout << "Please answer Y or N only." << endl;
    }
}

void table::add_lamp(lamp aLamp, bool huh)
{
    while(true)
    {
        char response;
        cout << "Would you like to place a lamp on the table(y/n)? ";
        cin >> response;
        cout << endl;
        
        if (response == 'Y' || response == 'y')
        {
            aLamp.get_width();
            aLamp.get_length();
            aLamp.get_area();
            aLamp.lamp_light();
            break;
        }
        else if (response == 'N' || response == 'n')
        {
            break;
        }
        else
            cout << "Please answer Y or N only." << endl;
    }
    
    if (freeSpace >= aLamp.get_area())
    {
        huh = true;
        freeSpace = freeSpace - aLamp.get_area();
    }
    else
    {
        huh = false;
        cout << "The lamp doesn't fit on the table." << endl;
    }
}
void table::remove_lamp(lamp aLamp, bool huh)
{
    while(true)
    {
        char response;
        cout << "Would you like to remove the lamp from the table(y/n)? ";
        cin >> response;
        cout << endl;
        
        if (response == 'Y' || response == 'y')
        {
            huh = false;
            freeSpace = freeSpace + aLamp.get_area();
            break;
        }
        else if (response == 'N' || response == 'n')
        {
            break;
        }
        else
            cout << "Please answer Y or N only." << endl;
    }
}

void table::get_color()
{
    string answer;
    while(true)
    {
        cout << "Would you like a BLACK, BLUE, PURPLE, or WHITE table? ";
        cin >> answer;
        if (answer == "Black" || answer == "black")
        {
            tableColor = black;
            break;
        }
        else if (answer == "Blue" || answer == "blue")
        {
            tableColor = blue;
            break;
        }
        else if (answer == "Purple" || answer == "purple")
        {
            tableColor = purple;
            break;
        }
        else if (answer == "White" || answer == "white")
        {
            tableColor = white;
            break;
        }
        else
        {
            cout << "Please choose only one of the available colors." << endl;
            continue;
        }
    }
}
void table::get_material()
{
    string answer;
    while(true)
    {
        cout << "Would you like your table made out of WOOD, STEEL, or PLASTIC? ";
        cin >> answer;
        if (answer == "Wood" || answer == "wood")
        {
            tableMadeOf = wood;
            break;
        }
        else if (answer == "Steel" || answer == "steel")
        {
            tableMadeOf = steel;
            break;
        }
        else if (answer == "Plastic" || answer == "plastic")
        {
            tableMadeOf = plastic;
            break;
        }
        else
        {
            cout << "Please choose only one of the available materials." << endl;
            continue;
        }
    }
}
void book::is_book_open()
{
    string temp;
    while(true)
    {
        cout << "Is the book open or closed? ";
        cin >> temp;
        
        if (temp == "Open" || temp == "open")
        {
            isItOpen = open; break;
            
        }
        else if (temp == "Closed" || temp == "closed")
        {
            isItOpen = closed;
            break;
        }
        else
            cout << "Please answer only 'open' or 'closed.'" << endl; continue;
    }
    
    if (isItOpen == open)
    {
        length = length * 2;
    }
}
void table::output_areas(book aBook, tissueBox box, lamp aLamp, bool huhBook, bool huhBox, bool huhLamp)
{
    cout << "There is currently " << available()
    << " available space on the table." << endl;

    if (huhBook == true)
    {
        cout << "The book is using " << aBook.get_area() << " space." << endl;
    }
    
    if (huhBox == true)
    {
        cout << "The tissue box is using " << box.get_area() << " space." << endl;
    }
    
    if (huhLamp == true)
    {
        cout << "The lamp is using " << aLamp.get_area() << " space." << endl;
    }
}

/*
-----
Functions From Book Class
-----
*/
void book::is_book_open()
{
    string temp;
    while(true)
    {
        cout << "Is the book open or closed? ";
        cin >> temp;
        
        if (temp == "Open" || temp == "open")
        {
            isItOpen = open; break;
            
        }
        else if (temp == "Closed" || temp == "closed")
        {
            isItOpen = closed;
            break;
        }
        else
            cout << "Please answer only 'open' or 'closed.'" << endl; continue;
    }
    
    if (isItOpen == open)
    {
        length = length * 2;
    }
}

/*
-----
Functions From Tissue Box Class
-----
*/
void tissueBox::wanna_use_tissue(tissueBox box)
{
    if (currentTissues > 0)
    {
        while(true)
        {
            char temp;
            cout << "Wanna use a tissue(y/n)? ";
            cin >> temp;
            cout << endl;
            
            if (temp == 'Y' || temp == 'y')
            {
                box.use_tissue();
            }
            else if (temp == 'N' || temp == 'n')
            {
                break;
            }
            else
                cout << "Please answer Y or N only." << endl;
            
        }
        while(true)
        {
            char temp;
            cout << "Wanna use a another tissue(y/n)? ";
            cin >> temp;
            cout << endl;
            
            if (temp == 'Y' || temp == 'y')
            {
                box.use_tissue();
            }
            else if (temp == 'N' || temp == 'n')
            {
                break;
            }
            else
                cout << "Please answer Y or N only." << endl;
            
        }
        
    }
    else
        cout << "You have run out of tissues." << endl;
}


