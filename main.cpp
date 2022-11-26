#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//global declarations
int totalCars=0,rentDays;
float totalRent=0;
string firstName,lastName;
long int contactNo,licenseNo;

class Car
{
    public:
        int carType;       //for 1/2/3 Car type
        char reply;         //for yes/no

        static int nSwift,nBaleno,nI20,nCity,nVerna,nCiaz,nCreta,nCompass,nThar;        //stores number of available Cars

        void customerDetails(){
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

int Car::nSwift=2;
int Car::nBaleno=4;
int Car::nI20=2;
int Car::nCity=1;
int Car::nVerna=3;
int Car::nCiaz=3;
int Car::nCreta=4;
int Car::nCompass=2;
int Car::nThar=3;

class HatchBack:public Car
{
    public:
        void carDetails(){          //displays hatchback-Car details and cost
            
            cout<<"\n\n\t\tSWIFT";
            cout<<"\tBALENO";
            cout<<"\ti20";

            cout<<"\nVEHICLE NO";
            cout<<"\t\t2290";
            cout<<"\t\t7822";
            cout<<"\t\t9814";

            cout<<"\nCOLOR";
            cout<<<"\t\tWHITE";
            cout<<<"\t\tBLACK";
            cout<<<"\t\tBLUE";

            cout<<"\nMILEAGE";
            cout<<<"\t\t19";
            cout<<<"\t\t16";
            cout<<<"\t\t11";

            cout<<"\nCOST";
            cout<<<"\t\t1800/day";
            cout<<<"\t\t1600/day";
            cout<<<"\t\t1400/day";
        }

        void carAvailable(){        //displays name of each hatchback-car available
            cout<<"\t\tHATCHBACK CARS AVAILABLE\n\n";

            for(int i=1;i<=nSwift;i++)
                cout<<"\tSWIFT\n";
            
            for(int i=1;i<=nBaleno;i++)
                cout<<"\tBALENO\n";
            
            for(int i=1;i<=nI20;i++)
                cout<<"\ti20\n";
        }

};