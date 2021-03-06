#ifndef ROOM_H
#define ROOM_H

#include <string>
#include <vector>
#include "item.h"
#include "critter.h"


using namespace std;

class Room
{
private:
	string roomName;
	string roomDescription;
	
	int roomID;
	int critter;
	int north;
	int south;
	int east;
	int west;
	int up;
	int down;
	bool indoor; // is the room inside or outside?
	bool dark;	// is the room dark when you enter?
	bool visited;
	bool locked;

	vector<int> roomItems;
	

public:
	
	Room(){};
	Room(string name, string roomDescription, int id, int north, int south, int east, int west, bool indoor, bool dark);
	~Room(){};

	void setName(string name) { roomName = name; }
	string getName() { return roomName; }

	void setRoomDescription(string description) { roomDescription = description; }
	string getRoomDescription() { return roomDescription; }

	void setRoomId(int room) { roomID = room;}
	int getRoomId() { return roomID; }

	void setCritter(int critter) { this->critter = critter; }
	int getCritter() { return critter; }

	void setNorth(int n) {north = n;}
	int getNorth() { return north;}

	void setSouth(int s) {south = s;}
	int getSouth() { return south; }

	void setEast(int e) {east = e;}
	int getEast() { return east; }

	void setWest(int w) {west = w;}
	int getWest() { return west; }

	void setUp(int up) { this->up = up; }
	int getUp() { return up; }

	void setDown(int down) { this->down = down; }
	int getDown() { return down; }

	void setIndoor(bool in) { indoor = in; }
	bool getIndoor() { return indoor; }

	void setDark(bool dk) { this->dark = dk; }
	bool getDark() { return dark; }

	void setLocked(bool locked) { this->locked = locked; }
	bool getLocked() { return locked; }

	void setVisited(bool visited) {this->visited = visited;}
	bool getVisited() { return visited; }

	void addItem(int itemId) { roomItems.push_back(itemId); }
	void addItem(vector<Room> &roomStorage, int itemId);

	void removeItem(vector<Room> &roomStorage, int item);
	void getItems(vector<Item> &itemStorage, vector<string> &roomItems);
	void getKeywords(vector<Item> &itemStorage, vector<string> &words);

	void displayDesc();
	void displayName();
	void displayCritter(vector<Critter> &critterStorage);
	void getItemsVector(vector<int>&items) { items = this->roomItems; }
	
	void displayRoomItems(vector<Item> &itemStorage);
	void displayDirections();
	int move(string direction);
	bool hasItem(int id);
};

#endif


