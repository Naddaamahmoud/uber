#pragma once

#include<string>
#include<vector>
#include<unordered_map>

using namespace std;

class user {
public:
	string name;
	string phone_num;
	string location;
	string dest;
	user();

};

class Driver
{

public:
	Driver();
	string driverName, phoneNumber, carName, carNumber, carModel, carColor, preferredDestination, pickup_street_name;
	bool ordered = false;
	int id;
	Driver signup();

private:

};
class node
{
public:
	string name;
	vector<Driver> driver_n;
	float distance = -1;
	node* next = NULL;
	int indx = -1;



};

class graph
{

	vector<node*> v;
	unordered_map<string, node> map;



public:
	graph();
	user custmer;
	int driver_no = 0;
	vector<Driver> driver_database;
	void add_node(string stname);
	void add_edge(string street1, string street2, float dist);
	void printGraph();
	void shortest_path(string location);
	string get_min(unordered_map<string, float>);
	unordered_map<string, float> unvisited;
	unordered_map<string, float> visted;
	unordered_map<string, string> parent;
	unordered_map<string, int> indx;
	float ssd[100][100];
	void addDriver();
	void addDriverInfo(string, Driver);
	void printPath(string);
	void delete_node(string);
	Driver find_driver();
	void floyd();
	void delete_graph();
	void printPath_driver(string st);
	string path;
	string updateDriverLoc(int id, string newloc);
	string updateDriverDestination(int id, string newdes);
	string path_driver;
	~graph();
};



