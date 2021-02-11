#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//find out the area of your room!

int main() {
    
    int RoomWidth{0};
    cout << "Enter the width of the room: ";
    cin >> RoomWidth;
    
    int RoomLength{0};
    cout << "Enter the length of the room: ";
    cin >> RoomLength;
    cout << "The area of the room is: " << RoomWidth * RoomLength << " square feet" << endl;
    
    return 0;
}
