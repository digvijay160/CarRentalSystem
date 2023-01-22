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

            if(reply=='N'||reply=='n'){
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

class Sedan:public Car
{
    public:
        void carDetails(){          //displays sedan car details and cost

            cout<<"\n\n\t\tCITY";
            cout<<"\tVERNA";
            cout<<"\tCIAZ";

            cout<<"\nVEHICLE NO";
            cout<<"\t\t4566";
            cout<<"\t\t1267";
            cout<<"\t\t9866";

            cout<<"\nCOLOR";
            cout<<"\t\tWHITE";
            cout<<"\t\tBLACK";
            cout<<"\t\tGREY";

            cout<<"\nMILEAGE";
            cout<<"\t\t19kmpl";
            cout<<"\t\t20kmpl";
            cout<<"\t\t19kmpl";

            cout<<"\nCOST";
            cout<<"\t\t1900/day";
            cout<<"\t\t2000/day";
            cout<<"\t\t1800/day";
        }

        void carAvailable(){           //displays name of each sedan available

            cout<<"\t\tSEDAN CARS AVAILABLE\n\n";

            for(int i=1;i<=nCity;i++)
                cout<<"\tCITY\n";

            for(int i=1;i<=nVerna;i++)
                cout<<"\tVERNA\n";

            for(int i=1;i<=nCiaz;i++)
                cout<<"\tCIAZ\n";
        }

        void rentCar(){                 //if user chooses sedan

            cout<<"\t Do you want to rent a Sedan Car? Enter 'Y' for yes or 'N' for no: ";
            cin>>reply;

            if(reply=='N'||reply=='n'){
                return;
            }
            else{

                customerDetails();
                cout<<"\tEnter 1/2/3 to rent:\n\t1.CITY\n\t2. VERNA\n\t3. CIAZ\n\t";
                cin>>carType;
                cout<<"\tEnter thr number of days oyu want to rent car for: ";
                cin>>rentDays;
                cout<<"\n";

                switch(carType){
                    case 1: if(nCity==0){
                                cout<<"\tSorry, City is not availablle at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=4;
                                cout<<"\tTotal Rent= "<<1900*rentDays<<endl;
                                totalRent+=1900*rentDays;
                                nCity--;
                            }
                            break;
                    case 2: if(nVerna==0){
                                cout<<"\tSorry, Verna is not availablle at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=5;
                                cout<<"\tTotal Rent= "<<2000*rentDays<<endl;
                                totalRent+=2000*rentDays;
                                nVerna--;
                            }
                            break;
                    case 3: if(nCiaz==0){
                                cout<<"\tSorry, Ciaz is not availablle at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=6;
                                cout<<"\tTotal Rent= "<<1800*rentDays<<endl;
                                totalRent+=1800*rentDays;
                                nCiaz--;
                            }
                            break;                            
                }
            }
        }
};

class SUV:public Car
{
    public:
        void carDetails(){          //displays suv car details and cost

            cout<<"\n\n\t\tCRETA";
            cout<<"\tCOMPASS";
            cout<<"\tTHAR";

            cout<<"\nVEHICLE NO";
            cout<<"\t\t9390";
            cout<<"\t\t3433";
            cout<<"\t\t5802";

            cout<<"\nCOLOR";
            cout<<"\t\tBLACK";
            cout<<"\t\tBLACK";
            cout<<"\t\tRED";

            cout<<"\nMILEAGE";
            cout<<"\t\t20kmpl";
            cout<<"\t\t16kmpl";
            cout<<"\t\t17kmpl";

            cout<<"\nCOST";
            cout<<"\t\t2200/day";
            cout<<"\t\t2300/day";
            cout<<"\t\t2100/day";
        }

        void carAvailable(){           //displays name of each suv available

            cout<<"\t\tSUV CARS AVAILABLE\n\n";

            for(int i=1;i<=nCreta;i++)
                cout<<"\tCRETA\n";

            for(int i=1;i<=nCompass;i++)
                cout<<"\tCOMPASS\n";

            for(int i=1;i<=nThar;i++)
                cout<<"\tTHAR\n";
        }

        void rentCar(){                 //if user chooses suv

            cout<<"\t Do you want to rent a SUV Car? Enter 'Y' for yes or 'N' for no: ";
            cin>>reply;

            if(reply=='N'||reply=='n'){
                return;
            }
            else{

                customerDetails();
                cout<<"\tEnter 1/2/3 to rent:\n\t1.CRETA\n\t2. COMPASS\n\t3. THAR\n\t";
                cin>>carType;
                cout<<"\tEnter thr number of days oyu want to rent car for: ";
                cin>>rentDays;
                cout<<"\n";

                switch(carType){
                    case 1: if(nCreta==0){
                                cout<<"\tSorry, Creta is not availablle at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=7;
                                cout<<"\tTotal Rent= "<<2200*rentDays<<endl;
                                totalRent+=2200*rentDays;
                                nCreta--;
                            }
                            break;
                    case 2: if(nCompass==0){
                                cout<<"\tSorry, Compass is not availablle at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=8;
                                cout<<"\tTotal Rent= "<<2300*rentDays<<endl;
                                totalRent+=2300*rentDays;
                                nCompass--;
                            }
                            break;
                    case 3: if(nThar==0){
                                cout<<"\tSorry, Thar is not availablle at the moment. Choose another car.\n";
                            }
                            else{
                                carNo=9;
                                cout<<"\tTotal Rent= "<<2100*rentDays<<endl;
                                totalRent+=2100*rentDays;
                                nThar--;
                            }
                            break;                            
                }
            }
        }
};
