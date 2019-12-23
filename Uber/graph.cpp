#include "graph.h"
#include<iostream>
using namespace std;



Driver::Driver()
{
}
user::user() {

}

Driver Driver::signup()
{

	Driver x;
	cout << "Enter your name \n";
	cin >> x.driverName;


	cout << "Enter your phonenumber \n";
	cin >> x.phoneNumber;

	cout << "Enter your car name \n";
	cin >> x.carName;

	cout << "Enter your car number \n";
	cin >> x.carNumber;

	cout << "Enter your car model \n";
	cin >> x.carModel;

	cout << "Enter your car color \n";
	cin >> x.carColor;

	cout << "Enter your preferred destination \n";
	cin >> x.preferredDestination;

	cout << "Enter your location \n";
	cin >> x.pickup_street_name;

	return x;

}



graph::graph()
{
	add_node("6th of October City");
	add_node("Ring Road");
	add_node("Suez Road");
	add_node("Heliopolis");
	add_node("5th Settlement");
	add_node("Abbasseya");
	add_node("Shoubra");
	add_node("Nasr City");
	add_node("6th of October Bridge");
	add_node("Zamalek");

	unvisited["6th of October City"] = 100000;
	unvisited["Ring Road"] = 100000;
	unvisited["Suez Road"] = 100000;
	unvisited["Heliopolis"] = 100000;
	unvisited["5th Settlement"] = 100000;
	unvisited["Abbasseya"] = 100000;
	unvisited["Shoubra"] = 100000;
	unvisited["Nasr City"] = 100000;
	unvisited["6th of October Bridge"] = 100000;
	unvisited["Zamalek"] = 100000;


	add_edge("6th of October City", "Ring Road", 15);
	add_edge("Ring Road", "Suez Road", 35);
	add_edge("Heliopolis", "Suez Road", 10);
	add_edge("Suez Road", "5th Settlement", 17);
	add_edge("Abbasseya", "Heliopolis", 6);
	add_edge("Shoubra", "Abbasseya", 5);
	add_edge("Suez Road", "Nasr City", 4);
	add_edge("6th of October City", "6th of October Bridge", 40);
	add_edge("6th of October Bridge", "Heliopolis", 7);
	add_edge("Zamalek", "6th of October Bridge", 5);
	add_edge("6th of October Bridge", "Nasr City", 8);
	add_edge("6th of October City", "Zamalek", 27);
	add_edge("Ring Road", "5th Settlement", 43);

	Driver x;

	x.driverName = "Ahmed";
	x.phoneNumber = "01201233445";
	x.carName = "BYD";
	x.carNumber = "232355";
	x.carModel = "2019";
	x.carColor = "Black";
	x.preferredDestination = "Heliopolis";
	x.pickup_street_name = "Abbasseya";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);

	x.driverName = "Abdallah Ahmed";
	x.phoneNumber = "012734554665";
	x.carNumber = "8942374";
	x.carModel = "2008";
	x.carColor = "White";
	x.preferredDestination = "Ring Road";
	x.pickup_street_name = "Zamalek";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);

	x.driverName = "Ashraf Abdallah";
	x.phoneNumber = "011133354532";
	x.carName = "KIA";
	x.carNumber = "1123430";
	x.carModel = "2019";
	x.carColor = "Grey";
	x.preferredDestination = "5th Settlement";
	x.pickup_street_name = "Shoubra";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);

	x.driverName = "Sherif Adel";
	x.phoneNumber = "010023254653";
	x.carName = "Skoda";
	x.carNumber = "9922345";
	x.carModel = "2012";
	x.carColor = "Black";
	x.preferredDestination = "Suez Road";
	x.pickup_street_name = "5th Settlement";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);

	x.driverName = "Shady Aziz";
	x.phoneNumber = "0133445678987";
	x.carName = "Suzuki";
	x.carNumber = "4455788";
	x.carModel = "2013";
	x.carColor = "Blue";
	x.preferredDestination = "Heliopolis";
	x.pickup_street_name = "6th of October City";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);

	x.driverName = "Ramy Nabil";
	x.phoneNumber = "0133452218987";
	x.carName = "Renault";
	x.carNumber = "91123";
	x.carModel = "2019";
	x.carColor = "White";
	x.preferredDestination = "Nasr City";
	x.pickup_street_name = "6th of October Bridge";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);

	x.driverName = "Youssef Rizk";
	x.phoneNumber = "0123448987";
	x.carName = "Hyundai";
	x.carNumber = "91123";
	x.carModel = "2019";
	x.carColor = "White";
	x.preferredDestination = "6th of October Bridge";
	x.pickup_street_name = "6th of October City";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);


	x.driverName = "Ashraf";
	x.phoneNumber = "01039393838";
	x.carName = "Geely";
	x.carNumber = "123445";
	x.carModel = "2016";
	x.carColor = "Grey";
	x.preferredDestination = "Nasr City";
	x.pickup_street_name = "Heliopolis";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);


	x.driverName = "Fathy";
	x.phoneNumber = "01567357352";
	x.carName = "Nissan";
	x.carNumber = "345424";
	x.carModel = "2013";
	x.carColor = "White";
	x.preferredDestination = "Zamalek";
	x.pickup_street_name = "6th of October City";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);


	addDriverInfo(x.pickup_street_name, x);
	x.driverName = "mohamed ali";
	x.phoneNumber = "0127355668";
	x.carName = "Nissan";
	x.carNumber = "345424";
	x.carModel = "2013";
	x.carColor = "White";
	x.preferredDestination = "Zamalek";
	x.pickup_street_name = "6th of October City";
	x.id = driver_no;
	driver_no++;
	driver_database.push_back(x);
	addDriverInfo(x.pickup_street_name, x);




}
void graph::add_node(string stname)
{

	map[stname].next = NULL;
	map[stname].name = stname;
}
void graph::add_edge(string street1, string street2, float dist) {


	node* temp = new node;
	temp->distance = dist;
	temp->name = street2;
	temp->next = NULL;
	node* temp2 = new node;
	temp2->distance = dist;
	temp2->name = street1;
	temp2->next = NULL;

	node* temp1;
	temp1 = &map[street1];
	while (temp1->next != NULL)
		temp1 = temp1->next;
	temp1->next = temp;

	temp1 = &map[street2];
	while (temp1->next != NULL)
		temp1 = temp1->next;
	temp1->next = temp2;
}
void graph::delete_node(string stname) {

	node* ptr = map[stname].next;
	while (ptr != NULL)
	{

		string del = ptr->name;
		node* tmp = &map[del];
		node* tmp1 = &map[del];
		while (tmp != NULL)
		{
			tmp = tmp->next;
			if (tmp->name == stname) {
				if (tmp->next != NULL)
					tmp1->next = tmp->next;
				else
					tmp1->next = NULL;
				delete tmp;
				break;
			}
			tmp1 = tmp1->next;
		}
		ptr = ptr->next;
	}
	map.erase(stname);

}
void graph::printGraph()
{
	float dist;
	string stname;
	for (std::unordered_map<string, node>::iterator it = map.begin(); it != map.end(); ++it)
	{
		string street = it->first; //for simplicity
		cout << "Node " << street << " makes an edge with \n";
		node* tmp;
		tmp = it->second.next;
		if (tmp == NULL)
			cout << "\tNONE.";
		else {
			while (tmp != NULL)
			{
				dist = tmp->distance;
				stname = tmp->name;
				cout << "\tNode " << stname << " with edge weight =" << dist << "\n";
				tmp = tmp->next;
			}
		}
		cout << "\n";
		if (it->second.driver_n.size() != 0)
		{
			int size = it->second.driver_n.size();
			for (int i = 0; i < size; i++)
			{
				cout << "Driver: " << it->second.driver_n[i].driverName << endl;
			}
		}
		else
		{
			cout << "no drivers found \n";
		}
		cout << "\n";
	}
}

void graph::addDriver()
{
	Driver driver;

	driver = driver.signup();
	driver.id = driver_no;
	driver_database.push_back(driver);
	driver_no++;
	addDriverInfo(driver.pickup_street_name, driver);
}
void graph::addDriverInfo(string stname, Driver driver)
{
	map[stname].driver_n.push_back(driver);
}



string graph::get_min(unordered_map<string, float> x)
{
	float min = 100000;
	string min_name;
	for (std::unordered_map<string, float>::iterator it = x.begin(); it != x.end(); ++it)
	{
		if (it->second < min)
		{
			min = it->second;
			min_name = it->first;
		}


	}
	return min_name;

}
void graph::shortest_path(string location)
{

	visted.clear();
	unvisited.clear();

	for (auto it = map.begin(); it != map.end(); it++)
	{
		unvisited[it->second.name] = 100000;
	}


	string live_locatiion = location;
	visted[location] = 0;
	unvisited.erase(location);
	parent[location] = 'x';


	while (!unvisited.empty())
	{

		node* ptr = map[live_locatiion].next;
		while (ptr != 0)
		{
			if (unvisited.find(ptr->name) != unvisited.end() && ptr->distance + visted[live_locatiion] < unvisited[ptr->name])
			{
				unvisited[ptr->name] = ptr->distance + visted[live_locatiion];
				parent[ptr->name] = live_locatiion;
			}
			ptr = ptr->next;
		}



		live_locatiion = get_min(unvisited);
		visted[live_locatiion] = unvisited[live_locatiion];
		unvisited.erase(live_locatiion);

	}



}
void graph::floyd() {
	const int s = map.size();
	int i = 0;
	for (auto it = map.begin(); it != map.end(); ++it) {
		indx[it->first] = i;
		i++;
	}
	for (int i = 0; i < s; i++) {
		for (int j = 0; j < s; j++) {
			if (i == j)
				ssd[i][j] = 0;
			else
			{
				ssd[i][j] = 999999999999;
			}

		}
	}


	for (auto it = map.begin(); it != map.end(); ++it)
	{
		int x = indx[it->first], y;
		node* tmp;
		tmp = it->second.next;
		ssd[x][x] = 0.0;
		while (tmp != NULL)
		{
			y = indx[tmp->name];
			ssd[x][y] = tmp->distance;
			tmp = tmp->next;
		}

	}


	for (int k = 0; k < s; k++)
	{
		for (int i = 0; i < s; i++)
		{
			for (int j = 0; j < s; j++)
			{
				if (ssd[i][k] + ssd[k][j] < ssd[i][j])
					ssd[i][j] = ssd[i][k] + ssd[k][j];

			}
		}
	}
}
string graph::updateDriverLoc(int id, string newloc)
{
	if (id > driver_no && id >= 0)
	{
		auto it = map[driver_database[id].pickup_street_name].driver_n.begin();
		for (it; it < map[driver_database[id].pickup_street_name].driver_n.end(); it++)
		{
			if (it->id == id)
				break;
		}
		map[driver_database[id].pickup_street_name].driver_n.erase(it);
		driver_database[id].pickup_street_name = newloc;
		map[newloc].driver_n.push_back(driver_database[id]);
		cout << "done";
		return "0";

	}
	else
	{
		cout << "driver not found \n";
		return "0";
	}
}
string graph::updateDriverDestination(int id, string newdes)
{
	if (id > driver_database.size() && id >= 0)
	{
		driver_database[id].preferredDestination = newdes;
		int i = 0;
		while (1)
		{
			if (map[driver_database[id].pickup_street_name].driver_n[i].id == id)
			{
				map[driver_database[id].pickup_street_name].driver_n[i].preferredDestination == newdes;
				break;
			}
			i++;
		}
		
		return "done";
	}
	else
	{
		return "driver not found";
	}
}
void graph::printPath(string st)
{
	if (parent[st] == "")
		return;
	printPath(parent[st]);
	cout << " -> " << st;
	path = path + st + " then \n";

}
void graph::printPath_driver(string st)
{
	if (parent[st] == "")
		return;
	cout << " -> " << st;
	path_driver = path_driver + st + " then \n";
	printPath_driver(parent[st]);



}
Driver graph::find_driver()
{
	float min = 100000;
	string min_name = "no driver";
	int driverid;
	for (std::unordered_map<string, float>::iterator it = visted.begin(); it != visted.end(); ++it)
	{

		if (it->second < min)
		{
			int size = map[it->first].driver_n.size();
			for (int i = 0; i < size; i++)
			{
				if (map[it->first].driver_n[i].preferredDestination == custmer.dest)
				{
					min = it->second;
					min_name = it->first;
					driverid = i;

				}
			}

		}


	}
	if (min_name == "no driver")
	{
		cout << "No Driver";
		Driver no_dri;
		no_dri.phoneNumber = "no driver";
		return no_dri;
	}
	else
	{
		int driver_id_database = map[min_name].driver_n[driverid].id;

		cout << "Your driver name is " << map[min_name].driver_n[driverid].driverName << endl;
		cout << "car color " << map[min_name].driver_n[driverid].carColor << endl;
		cout << "car model " << map[min_name].driver_n[driverid].carModel << endl;
		cout << "Your driver car is  " << map[min_name].driver_n[driverid].carName << endl;
		cout << "Your driver car number is " << map[min_name].driver_n[driverid].carNumber << endl;
		cout << "Your driver phone number " << map[min_name].driver_n[driverid].phoneNumber << endl;
		cout << "Your driver is " << visted[min_name] << " km away";
		map[min_name].driver_n[driverid].ordered = true;

		driver_database[driver_id_database].ordered = true;

		return driver_database[driver_id_database];
	}



}
void graph::delete_graph() {
	map.clear();
}

graph::~graph()
{
}
