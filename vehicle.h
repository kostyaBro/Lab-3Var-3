#pragma once
using namespace std;

/// ///////////////////////////////////////////////////////////////////////////////
/// ������������ ����� ������������ �������

enum VehicleType
{
    UNKNOWN,
    CAR,
    AUTOBUS,
    AEROPLANE,
    STEAMBOAT
};

class Vehicle
{
public:

/// ///////////////////////////////////////////////////////////////////////////////
/// ������

    void virtual print() const = 0;
    void virtual showMenuActions() const = 0;
    static int const defaultMovementSpeed = 0;
    static unsigned int const defaultPlaceCount = 1;
    void setMovementSpeed(int const movementSpeed);
    void setMovementSpeed(short int const movementSpeed);
    void setMovementSpeed(unsigned int const movementSpeed);
    void setMovementSpeed(unsigned short int const movementSpeed);
    int getMovementSpeed() const;
    void setPlaceCount(unsigned int const placeCount);
    void setPlaceCount(unsigned short int const placeCount);
    unsigned int getPlaceCount() const;
    VehicleType getVehicleType()const;

/// ///////////////////////////////////////////////////////////////////////////////
/// ������������� ���������

    Vehicle& operator ++();
    Vehicle& operator ++(int);
    Vehicle& operator --();
    Vehicle& operator --(int);

protected:
    VehicleType type;
    int movementSpeed;
    unsigned int placeCount;
};
