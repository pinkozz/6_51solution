#include <iostream>
using namespace std;

int main(){
	cout << "Frank's carpet service" << endl;
	//cout << "Charges: " << endl;
	int smallRooms {0};
	int largeRooms {0};
	const double smallRoomPrice {25.0};
	const double largeRoomPrice {35.0};
	const double taxRate {0.06};
	const int estimatesValid {30};

	cout << "How many small rooms would you like cleaned?: ";
	cin >>  smallRooms;
	cout << "How many large rooms would you like cleaned?: ";
	cin >> largeRooms;

	cout << "\n\nEstimate for carpet cleaning service:" << endl;
	cout << "\n===============================================" << endl;
	cout << "\nNumber of small rooms: " << smallRooms << endl;
	cout << "Number of large rooms: " << largeRooms << endl;
	cout << "Price per small room: $" << smallRoomPrice << endl;
	cout << "Price per large room: $" << largeRoomPrice << endl;

	cout << "Cost: $" << smallRooms*smallRoomPrice + largeRooms*largeRoomPrice << endl;
	cout << "Tax: $" << (smallRooms*smallRoomPrice + largeRooms*largeRoomPrice) * 0.06 << endl;

	cout << "\n===============================================" << endl;
	cout << "Total estimate: $" << ((smallRooms*smallRoomPrice + largeRooms*largeRoomPrice) + ((smallRooms*smallRoomPrice + largeRooms*largeRoomPrice) * 0.06)) << endl;
	cout << "This estimate is valid for " << estimatesValid << " days \n" << endl;
}
