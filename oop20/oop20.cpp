#include <iostream>
#include<string>
using namespace std;

class Transport {
protected:
	string name;
	int speed;
	string color;
	int seats;
public:
	Transport(){}
	Transport(string n, int s, string c, int se) : name(n), speed(s), color(c), seats(se) {}

	string GetName() { return name; }
	void SetName(string n) { name = n; }
	string GetColor() { return color; }
	void SetColor(string c) { color = c; }
	int GetSpeed() { return speed; }
	void SetSpeed(int s) { speed = s; }
	int GetSeats() { return seats; }
	void SetSeats(int se) { seats = se; }

	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Speed: " << speed << " km/h" << endl;
		cout << "Color: " << color << endl;
		cout << "Seats: " << seats << endl;
	}
};

class Truck : public Transport {
protected:
	int loadCapacity;
	int wheels;
	int axles;
	int liftingcapacity;
public:
	Truck() {}
	Truck(string n, int s, string c, int se, int lc, int w, int a, int lp)
		: Transport(n, s, c, se), loadCapacity(lc), wheels(w), axles(a), liftingcapacity(lp) {}

	int GetLoadCapacity() { return loadCapacity; }
	void SetLoadCapacity(int lc) { loadCapacity = lc; }
	int GetWheels() { return wheels; }
	void SetWheels(int w) { wheels = w; }
	int GetAxles() { return axles; }
	void SetAxles(int a) { axles = a; }
	int GetLiftingCapacity() { return liftingcapacity; }
	void SetLiftingCapacity(int lp) { liftingcapacity = lp; }

	void Print()
	{
		Transport::Print();
		cout << "Load Capacity: " << loadCapacity << " tons" << endl;
		cout << "Wheels: " << wheels << endl;
		cout << "Axles: " << axles << endl;
		cout << "Lifting Capacity: " << liftingcapacity << " tons" << endl;
	}
};

class Airplane : public Transport {
	protected:
	string flightRange;
	int wingspan;
	int engines;
	int wingspanLength;

}

int main() {
	Transport t1("Car", 120, "Red", 5);
	t1.Print();
	cout << endl;
	Truck tr1("Big Truck", 80, "Blue", 2, 20, 18, 3, 15);
	tr1.Print();

}