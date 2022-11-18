#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//global declarations
int totalCars=0,rentDays;
float totalRent=0;
string firstName,lastName;
long int contactNo,licenseNo;

class car
{
    public:
        int carType;       //for 1/2/3 car type
        char reply;         //for yes/no

        static int nSwift,nBaleno,nI20,nCity,nVerna,nCiaz,nCreta,nCompass,nThar;        //stores number of available cars

        void customer_details(){
            if(totalRent==0){
                cout<<"\tPlease enter customer details\n\n";
                cout<<"\tFirst Name: ";
                cin>>firstName;
                cout<<"\n\tLast Name: ";
                cin>>lastName;
                cout<<"\n\tContact Number: ";
                cin>>contactNo;
                cout<<"\n\tLicense Number: ";
                cin>>licenseNo;
                cout<<"\n";
            }
        }
};

int car::nSwift=2;
int car::nBaleno=4;
int car::nI20=2;
int car::nCity=1;
int car::nVerna=3;
int car::nCiaz=3;
int car::nCreta=4;
int car::nCompass=2;
int car::nThar=3;

class hatchback:public car
{
    public:
        void carDetails(){
            
        }
};