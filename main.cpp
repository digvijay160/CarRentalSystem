#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//global declarations
int carNo=0,rentDays;                   //carNo stores type of car of the available 9 cars
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
                cout<<"\n\tPlease enter customer details\n\n";
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

//intializing the number of each cars 
int Car::nSwift=2;          //carNo:1
int Car::nBaleno=4;         //carNo:2
int Car::nI20=2;            //carNo:3
int Car::nCity=1;           //carNo:4
int Car::nVerna=3;          //carNo:5
int Car::nCiaz=3;           //carNo:6
int Car::nCreta=4;          //carNO:7
int Car::nCompass=2;        //carNo:8
int Car::nThar=3;           //carNo:9

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
            cout<<<"\t\t19kmpl";
            cout<<<"\t\t16kmpl";
            cout<<<"\t\t11kmpl";

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

        void rentCar(){             //if user chooses hatchback

            cout<<"\tDO you want to rent a Hatchback Car? Enter 'Y' for yes or 'N' for no: ";
            cin>>reply;

            if(reply=='N'||reply=='y'){
                return;
            }
            else{

                customerDetails();
                cout<<"\tEnter 1/2/3 to rent:\n\t1. SWIFT\n\t2.BALENO\n\t3. i20\n\t";
                cin>>carType;
                cout<<"\tEnter number of days you want to rent car for: ";
                cin>>rentDays;
                cout<<"\n";

                switch(carType){
                    case 1: if(nSwift==0){
                                cout<<"\tSorry, Swift is not available at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=1;
                                cout<<"\tTotal Rent= "<<1800*rentDays<<endl;
                                totalRent+=1000*rentDays;
                                nSwift--;
                            }
                            break;
                    case 2: if(nBaleno==0){
                                cout<<"\tSorry, Baleno is not available at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=2;
                                cout<<"\tTotal Rent= "<<1600*rentDays<<endl;
                                totalRent+=1000*rentDays;
                                nBaleno--;
                            }
                            break;
                    case 3: if(nI20==0){
                                cout<<"\tSorry, i20 is not available at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=3;
                                cout<<"\tTotal Rent= "<<1400*rentDays<<endl;
                                totalRent+=1000*rentDays;
                                nI20--;
                            }
                            break;
                    default: cout<<"\tPlease Enter a valid input\n";
                }
            }
        }
};

class SUV:public Car
{

};