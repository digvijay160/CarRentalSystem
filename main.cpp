#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//global declarations
int total_cars=0;
int rent_days;
float total_rent=0;
string first_name;
string last_name;
long int contact_no;

class car
{
    public:
        int car_type;
        char reply;
};