#include<iostream>
#include<string>
#include<list>

using namespace std;

enum color {black, blue, purple, white};
enum material {wood, steel, plastic};

class table
{
private:
    color tableColor;
    material tableMadeOf;
    int length, width;
    int freeSpace = area();
    
public:
    int add_book(int area);
    int remove_book(int area);
    
    int add_tissueBox(int area);
    int remove_tissueBox(int area);
    
    int add_lamp(int area);
    int remove_lamp(int area);
    
    int area() {return length * width;}
};

// Function Definitions

int table::add_book(int area)
{
    freeSpace = freeSpace - area;
    return freeSpace;
}
int table::remove_book(int area)
{
    freeSpace = freeSpace + area;
    return freeSpace;
}

int table::add_tissueBox(int area)
{
    freeSpace = freeSpace - area;
    return freeSpace;
}
int table::remove_tissueBox(int area)
{
    freeSpace = freeSpace - area;
    return freeSpace;
}

int table::add_lamp(int area)
{
    freeSpace = freeSpace - area;
    return freeSpace;
}
int table::remove_lamp(int area)
{
    freeSpace = freeSpace - area;
    return freeSpace;
}


