// parking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string vehicle, license;
    double timeParked, price;

    cout << setprecision(2) << fixed;

    cout << "Input vehicle type (C for car, T for truck, B for bus): ";
    cin >> vehicle;

    if (vehicle == "C") {
        cout << "Input number of hours parked: ";
        cin >> timeParked;

        cout << "Input license plate: ";
        getline(cin, license);
        getline(cin, license);

        cout << endl << "Vehicle type: Car" << endl;
        cout << "Time: " << ceil(timeParked) << " hours" << endl;
        cout << "License Plate: " << license;

        price = 2.50 + (1.50 * (ceil(timeParked) - 2));
        cout << "\nAmount Due ($): " << price;
    }
    else if (vehicle == "T") {
        cout << "Input number of hours parked: ";
        cin >> timeParked;

        cout << "Input license plate: ";
        getline(cin, license);
        getline(cin, license);

        cout << endl << "Vehicle type: Truck" << endl;
        cout << "Time: " << ceil(timeParked) << " hours" << endl;
        cout << "License Plate: " << license;

        price = 5.50 + (3.75 * (ceil(timeParked) - 2));
        cout << "\nAmount Due ($): " << price;
    }
    else if (vehicle == "B") {
        cout << "Input number of hours parked: ";
        cin >> timeParked;

        cout << "Input license plate: ";
        getline(cin, license);
        getline(cin, license);

        cout << endl << "Vehicle type: Bus" << endl;
        cout << "Time: " << ceil(timeParked) << " hours" << endl;
        cout << "License Plate: " << license;

        price = 9.50 + (6.75 * (ceil(timeParked) - 1));
        cout << "\nAmount Due ($): " << price;
    }
    else
        cout << "Invalid vehicle type";
}

/*
Input vehicle type (C for car, T for truck, B for bus): F
Invalid vehicle type
*/

/*
Input vehicle type (C for car, T for truck, B for bus): C
Input number of hours parked: 12.4
Input license plate: AEL 5627

Vehicle type: Car
Time: 13.00 hours
License Plate: AEL 5627
Amount Due ($): 19.00
*/

/*
Input vehicle type (C for car, T for truck, B for bus): T
Input number of hours parked: 2.6
Input license plate: TXE 6723

Vehicle type: Truck
Time: 3.00 hours
License Plate: TXE 6723
Amount Due ($): 9.25
*/

/*
Input vehicle type (C for car, T for truck, B for bus): B
Input number of hours parked: 5.7
Input license plate: LSB 3030

Vehicle type: Bus
Time: 6.00 hours
License Plate: LSB 3030
Amount Due ($): 43.25
*/
