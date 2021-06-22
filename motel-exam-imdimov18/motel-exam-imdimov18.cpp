#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ROOM_PRICING
{
    int sRoomPrice=50;
    int dRoomPrice=90;
    int maisonettePrice = 135;
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
        vector<int> prices;
        prices.push_back(pr.dRoomPrice);
        prices.push_back(pr.sRoomPrice);
        prices.push_back(pr.maisonettePrice);
        return prices;
    }

    string rentRoom(string clientName, string roomType, int numberOfNights)
    {
        
    }

    int checkOut(int bookingNumber)
    {

    }

private:
    string name;
    int capacity;
    vector<int> bookings;
    int currentBookingNumber = 1;
    int sRoomCount;
    int dRoomCount;
    int maisonetteCount;
    int d = 40;
    int s = 40;
    int m = 20;
};

int main()
{
    std::cout << "Hello World!\n";
}