#pragma once
using namespace std;

//I would have liked to create classes for this but I don't know perfectly how they work in C++, so I choose to go with structs.
struct Customer;
struct Room; //Instead of making a hotel struct, I made a Room, which is also a good struct, and the hotel can be just a vector of rooms.

//Here are all my functions for this program.
int chooseOption(); //This function returns the selected option from the user
void start(vector<Room>&, vector<Customer>&); //Starts the program with a loop, which exits either when customer enters 0 or all rooms are full.
void optionHandler(vector<Room>&, vector<Customer>&, int , int);
void reserveRoom(vector<Room>&, vector<Customer>&, int ); //main function that reserves rooms
bool isRoomAvailable(vector<Room> , int); //room checker, returns true if the room is free
bool isRoomTypeAvailable(vector<Room>, int); //returns true if there is at least 1 free room from the room type.
bool isHotelEmpty(vector<Room>); //returns true if all the rooms are free
int selectRoomType(vector<Room>); //returns the type of room 1(single) or 2(double).
void checkout(vector<Room>&, vector<Customer>&); //checks out the customer, prints invoice and sets the room free.
int checkHotelAvailability(vector<Room>); //checks at the beginning of the program if there is any room available
void checkRoom(vector<Room>); //returns true if the specific room is available.
void printInvoice(vector<Room>, vector<Customer>, int); //prints an invoice with all the information of the reservation.
float checkDiscount(Room, Customer); //returns a discount of 0, 10, 15 or 20% if it matches the criteria.
float priceCalculator(float, int, float); //returns the net price (I believe there is no need for a gross price function since it's so basic).
int roomSelectionOption(); // asks the user to select either to chose a room manually or let the computer decide.
int randomRoomSelector(vector<Room>&, int); // returns an random integer between 1 and the size of the hotel and according if its single or double.
int manualRoomSelector(vector<Room>&, int); //returns a room number chosen by the user.
