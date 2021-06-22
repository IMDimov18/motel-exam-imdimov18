#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ROOM_PRICING
{
    int sRoomPrice;
    int dRoomPrice;
    int maisonettePrice;
};

struct BOOKING
{
    string clientNames;
    string roomTypes;
    int nights;
    int rentNumber;
};

class Motel
{
public:

    Motel(string name,int capacity)
    {
        getline(cin, name);
        cin >> capacity;
    }

    ROOM_PRICING getRoomPricing()
    {
        ROOM_PRICING pr;
        pr.sRoomPrice = 50;
        pr.dRoomPrice = 90;
        pr.maisonettePrice = 135;
        return pr;
    }

    string rentRoom(string clientName, string roomType, int numberOfNights)
    {
        cin >> clientName;
        cin >> roomType;
        cin >> numberOfNights;

    }

    int checkOut(int bookingNumber)
    {

    }

private:
    string name;
    int capacity;
    vector<int> bookings;
    int currentBookingNumber = 1;
};

int main()
{

}