#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    switch(a + 1)
    {
        case 1:
            cout << "a+1は1です" << endl;
            break;
        case 2:
            cout << "a+1は2です" << endl;
            break;
        default:
            cout << "なんでもない" << endl;
            break;
        case 3:
            cout << "a+1は3です" << endl;
            break;
    }
}