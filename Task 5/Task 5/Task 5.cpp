#include <iostream>
#include <string>

using namespace std;

class Airline;

class Airplane
{
	friend class Airline;
public:
	Airplane(string name, int maxSpeed, int time);

private:
	string name;
	int maxSpeed;
	int time;
};

class Helicopter
{
	friend class Airline;
public:
	Helicopter(string name, int maxSpeed, int time);

private:
	string name;
	int maxSpeed;
	int time;
};

class Rocket
{
	friend class Airline;
public:
	Rocket(string name, int maxSpeed, int time);

private:
	string name;
	int maxSpeed;
	int time;
};

class Airline 
{
public:
	void infoAirplane(const Airplane &airplane) {
		cout << "Название " << airplane.name << endl;
		cout << "Максимальная скорость " << airplane.maxSpeed << endl;
		cout << "Время в пути " << airplane.time << endl;
	}

	void infoHelicopter(const Helicopter &helicopter) {
		cout << "Название " << helicopter.name << endl;
		cout << "Максимальная скорость " << helicopter.maxSpeed << endl;
		cout << "Время в пути " << helicopter.time << endl;
	}

	void infoRocket(const Rocket &rocket) {
		cout << "Название " << rocket.name << endl;
		cout << "Максимальная скорость " << rocket.maxSpeed << endl;
		cout << "Время в пути " << rocket.time << endl;
	}
};

Airplane::Airplane(string name, int maxSpeed, int time) : name(name), maxSpeed(maxSpeed), time(time)
{
}

Helicopter::Helicopter(string name, int maxSpeed, int time) : name(name), maxSpeed(maxSpeed), time(time)
{
}

Rocket::Rocket(string name, int maxSpeed, int time) : name(name), maxSpeed(maxSpeed), time(time)
{
}

int main() {
    setlocale(LC_ALL, "rus");

	Airplane airplane("Боинг G300", 750, 50);
	Helicopter helicopter("HJ600", 100, 200);
	Rocket rocket("KKK03", 300, 100);

	Airline airline;

	airline.infoAirplane(airplane);
	airline.infoHelicopter(helicopter);
	airline.infoRocket(rocket);

    return 0;
}