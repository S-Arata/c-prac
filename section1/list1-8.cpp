#include <iostream>

using namespace std;

void show_message(int value)
{
    if(10 <= value && value < 20)
    {
        cout << "10<=x<20" << endl;
    }
    else
    {
        cout << "not10<=x<20" << endl;
    }
}

int main()
{
    show_message(9);
    show_message(15);
    show_message(20);
}