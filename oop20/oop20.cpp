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

class Car : public Transport {
protected:
	string model;
	int year;
	string bodyType;
	string engineType;
	string transmission;
	string driveType;
public:
	Car() {}
	Car(string n, int s, string c, int se, string m, int y, string bt, string et, string tr, string dt)
		: Transport(n, s, c, se), model(m), year(y), bodyType(bt), engineType(et), transmission(tr), driveType(dt) {
	}
	
	string GetModel() { return model; }
	void SetModel(string m) { model = m; }
	int GetYear() { return year; }
	void SetYear(int y) { year = y; }
	string GetBodyType() { return bodyType; }
	void SetBodyType(string bt) { bodyType = bt; }
	string GetEngineType() { return engineType; }
	void SetEngineType(string et) { engineType = et; }
	string GetTransmission() { return transmission; }
	void SetTransmission(string tr) { transmission = tr; }
	string GetDriveType() { return driveType; }
	void SetDriveType(string dt) { driveType = dt; }

	void Print()
	{
		Transport::Print();
		cout << "Model: " << model << endl;
		cout << "Year: " << year << endl;
		cout << "Body Type: " << bodyType << endl;
		cout << "Engine Type: " << engineType << endl;
		cout << "Transmission: " << transmission << endl;
		cout << "Drive Type: " << driveType << endl;
	}
};

class Bicycle : public Transport {
protected:
	string type;
	int gearCount;
	string frameMaterial;
	string brakeType;
	double wheelSize;
	double weight;
public:
	Bicycle() {}
	Bicycle(string n, int s, string c, int se, string t, int gc, string fm, string bt, double ws, double w)
		: Transport(n, s, c, se), type(t), gearCount(gc), frameMaterial(fm), brakeType(bt), wheelSize(ws), weight(w) {
	}

	string GetType() { return type; }
	void SetType(string t) { type = t; }
	int GetGearCount() { return gearCount; }
	void SetGearCount(int gc) { gearCount = gc; }
	string GetFrameMaterial() { return frameMaterial; }
	void SetFrameMaterial(string fm) { frameMaterial = fm; }
	string GetBrakeType() { return brakeType; }
	void SetBrakeType(string bt) { brakeType = bt; }
	double GetWheelSize() { return wheelSize; }
	void SetWheelSize(double ws) { wheelSize = ws; }
	double GetWeight() { return weight; }
	void SetWeight(double w) { weight = w; }

	void Print()
	{
		Transport::Print();
		cout << "Type: " << type << endl;
		cout << "Gear Count: " << gearCount << endl;
		cout << "Frame Material: " << frameMaterial << endl;
		cout << "Brake Type: " << brakeType << endl;
		cout << "Wheel Size: " << wheelSize << " inches" << endl;
		cout << "Weight: " << weight << " kg" << endl;
	}
};

class Tank : public Transport {
protected:
	string armorType;
	int gunCaliber;
	int crewSize;
	double weight;
	double mainGunCaliber;
public:
	Tank() {}
	Tank(string n, int s, string c, int se, string at, int gc, int cs, double w, double mgc)
		: Transport(n, s, c, se), armorType(at), gunCaliber(gc), crewSize(cs), weight(w), mainGunCaliber(mgc) {
	}

	string GetArmorType() { return armorType; }
	void SetArmorType(string at) { armorType = at; }
	int GetGunCaliber() { return gunCaliber; }
	void SetGunCaliber(int gc) { gunCaliber = gc; }
	int GetCrewSize() { return crewSize; }
	void SetCrewSize(int cs) { crewSize = cs; }
	double GetWeight() { return weight; }
	void SetWeight(double w) { weight = w; }
	double GetMainGunCaliber() { return mainGunCaliber; }
	void SetMainGunCaliber(double mgc) { mainGunCaliber = mgc; }

	void Print()
	{
		Transport::Print();
		cout << "Armor Type: " << armorType << endl;
		cout << "Gun Caliber: " << gunCaliber << " mm" << endl;
		cout << "Crew Size: " << crewSize << endl;
		cout << "Weight: " << weight << " tons" << endl;
		cout << "Main Gun Caliber: " << mainGunCaliber << " mm" << endl;
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
	cout << endl;
	Car c1("Sedan", 160, "Black", 5, "Model S", 2020, "Sedan", "Electric", "Automatic", "RWD");
	c1.Print();
	cout << endl;
	Bicycle b1("Mountain Bike", 30, "Green", 1, "Mountain", 21, "Aluminum", "Disc", 27.5, 14.5);
	b1.Print();
	cout << endl;
	Tank tk1("Battle Tank", 60, "Camouflage", 4, "Composite", 120, 3, 50.0, 120.0);
	tk1.Print();
	return 0;

}