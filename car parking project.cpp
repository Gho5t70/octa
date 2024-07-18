#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Car {
private:
    string licensePlate;
    string owner;

public:
    Car(const string& lp, const string& o) : licensePlate(lp), owner(o) {}

    string getLicensePlate() const {
        return licensePlate;
    }

    void setLicensePlate(const string& lp) {
        licensePlate = lp;
    }

    string getOwner() const {
        return owner;
    }

    void setOwner(const string& o) {
        owner = o;
    }

    void display() const {
        cout << "License Plate: " << licensePlate << ", Owner: " << owner << endl;
    }
};

class Booking {
private:
    string username;
    Car car;

public:
    Booking(const string& user, const Car& c) : username(user), car(c) {}

    string getUsername() const {
        return username;
    }

    Car getCar() const {
        return car;
    }

    void display() const {
        cout << "Username: " << username << ", ";
        car.display();
    }
};

class ParkingLot {
private:
    vector<Car> parkedCars;
    vector<Booking> bookings;
    int capacity;

public:
    ParkingLot(int cap) : capacity(cap) {}

    bool parkCar(const Car& car) {
        if (parkedCars.size() < capacity) {
            parkedCars.push_back(car);
            return true;
        } else {
            cout << "Parking lot is full!" << endl;
            return false;
        }
    }

    bool bookSpot(const string& username, const Car& car) {
        if (parkedCars.size() + bookings.size() < capacity) {
            bookings.push_back(Booking(username, car));
            return true;
        } else {
            cout << "Parking lot is full!" << endl;
            return false;
        }
    }

    void displayParkedCars() const {
        cout << "Parked Cars:\n";
        for (const auto& car : parkedCars) {
            car.display();
        }
    }

    void displayBookings() const {
        cout << "Bookings:\n";
        for (const auto& booking : bookings) {
            booking.display();
        }
    }
};

int main() {
    ParkingLot myParkingLot(3);

    Car car1("BC123", "Sanjay Gore");
    Car car2("YZ457", "Janvi Manse");

    myParkingLot.bookSpot("regularUser1", car1);
    myParkingLot.bookSpot("regularUser2", car2);

    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);

    myParkingLot.displayParkedCars();
    myParkingLot.displayBookings();

    return 0;
}

