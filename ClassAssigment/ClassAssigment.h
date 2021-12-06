#pragma once
using namespace std;

//I would have liked to create classes for this but I don't know perfectly how they work in C++, so I choose to go with structs.
struct Customer;
struct Room; //Instead of making a hotel struct, I made a Room, which is also a good struct, and the hotel can be just a vector of rooms.

//Here are all my functions for this program.
int choose_option(); //This function returns the selected option from the user
void start(vector<Room>&, vector<Customer>&); //Starts the program with a loop, which exits either when customer enters 0 or all rooms are full.
void option_handler(vector<Room>&, vector<Customer>&, int , int);
void reserve_room(vector<Room>&, vector<Customer>&, int ); //main function that reserves rooms
bool is_room_available(vector<Room> , int); //room checker, returns true if the room is free
bool is_hotel_empty(vector<Room>); //returns true if all the rooms are free
int select_room_type(); //returns the type of room 1(single) or 2(double).
void checkout(vector<Room>&, vector<Customer>&); //checks out the customer, prints invoice and sets the room free.
int checkHotelAvailability(vector<Room>); //checks at the beginning of the program if there is any room available
void check_room(vector<Room>); //returns true if the specific room is available.
void print_invoice(vector<Room>, vector<Customer>, int); //prints an invoice with all the information of the reservation.
float check_discount(Room, Customer); //returns a discount of 0, 10, 15 or 20% if it matches the criteria.
float price_calculator(float, int, float); //returns the net price (I believe there is no need for a gross price function since it's so basic).


