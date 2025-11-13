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
public:
	Airplane() {}
	Airplane(string n, int s, string c, int se, string fr, int w, int e, int wl)
		: Transport(n, s, c, se), flightRange(fr), wingspan(w), engines(e), wingspanLength(wl) {}

	string GetFlightRange() { return flightRange; }
	void SetFlightRange(string fr) { flightRange = fr; }
	int GetWingspan() { return wingspan; }
	void SetWingspan(int w) { wingspan = w; }
	int GetEngines() { return engines; }
	void SetEngines(int e) { engines = e; }
	int GetWingspanLength() { return wingspanLength; }
	void SetWingspanLength(int wl) { wingspanLength = wl; }

	void Print()
	{
		Transport::Print();
		cout << "Flight Range: " << flightRange << endl;
		cout << "Wingspan: " << wingspan << " meters" << endl;
		cout << "Engines: " << engines << endl;
		cout << "Wingspan Length: " << wingspanLength << " meters" << endl;
	}
};

class Ship : public Transport {
protected:
	string portOfRegistry;
	int displacement;
	int crewSize;
	string typefuel;
public:
	Ship() {}
	Ship(string n, int s, string c, int se, string por, int d, int cs, string tf)
		: Transport(n, s, c, se), portOfRegistry(por), displacement(d), crewSize(cs), typefuel(tf) {}

	string GetPortOfRegistry() { return portOfRegistry; }
	void SetPortOfRegistry(string por) { portOfRegistry = por; }
	int GetDisplacement() { return displacement; }
	void SetDisplacement(int d) { displacement = d; }
	int GetCrewSize() { return crewSize; }
	void SetCrewSize(int cs) { crewSize = cs; }
	string GetTypeFuel() { return typefuel; }
	void SetTypeFuel(string tf) { typefuel = tf; }

	void Print()
	{
		Transport::Print();
		cout << "Port of Registry: " << portOfRegistry << endl;
		cout << "Displacement: " << displacement << " tons" << endl;
		cout << "Crew Size: " << crewSize << endl;
		cout << "Type of Fuel: " << typefuel << endl;
	}
};

int main() {
	Transport t1("Car", 120, "Red", 5);
	t1.Print();
	cout << endl;
	Truck tr1("Big Truck", 80, "Blue", 2, 20, 18, 3, 15);
	tr1.Print();
	cout << endl;
	Airplane a1("Jet", 900, "White", 150, "5000 km", 35, 2, 30);
	a1.Print();
	cout << endl;
	Ship s1("Cargo Ship", 40, "Gray", 30, "New York", 50000, 20, "Diesel");
	s1.Print();
	return 0;

}