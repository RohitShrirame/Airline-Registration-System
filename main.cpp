#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();
class Management{
    public:
        Management()
        {
            mainMenu();
        }
};
class Details{
    public:
        static string name,gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];
        void information()
        {
             cout<<"\n Enter the customer ID: ";
             cin>>cId;
             cout<<"\nEnter the name: ";
             cin>>name;
             cout<<"\nEnter the age: ";
             cin>>age;
             cout<<"\nAddress : ";
             cin>>add;
             cout<<"\nGender: ";
             cin>>gender;
             cout<<"Your details are saved\n"<<endl;
        }
}; 

int Details::cId;
string Details::name;
string Details::gender;

class registration{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to Asia Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight: ";
            cin>>choice;

            switch( choice )
            {
                case 1:
                {
                    cout<<"___________Welcome to Dubai Emirates____________\n\n";
                    cout<<"Your comfort is our priority. Enjoy the journey!\n";
                    cout<<"following are the flights \n";
                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t12-01-23 8:00 AM 10hrs Rs. 14000"<<endl;
                    cout<<"1. DUB - 658"<<endl;
                    cout<<"\t14-01-23 4:00 AM 12hrs Rs. 10000"<<endl;
                    cout<<"1. DUB - 508"<<endl;
                    cout<<"\t16-01-23 11:00 AM 11hrs Rs. 9000"<<endl;

                    cout<<"\tSelect the flight you want to book: ";
                    cin>>choice1;

                    if( choice1 == 1 ){
                        charges = 14000;
                        cout<<"\n you have succesfully booked the flight DUB -498"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice1 == 2 ){
                        charges = 10000;
                        cout<<"\n you have succesfully booked the flight DUB - 658"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice == 3 ){
                        charges = 9000;
                        cout<<"\n you have succesfully booked the flight DUB - 508"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu\n";
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: ";
                    cin>>back;
                    mainMenu();
                }
                case 2:
                {
                    cout<<"___________Welcome to Canadian Airlines____________\n\n";
                    cout<<"Your comfort is our priority. Enjoy the journey!\n";
                    cout<<"following are the flights \n";
                    cout<<"1. CA - 198"<<endl;
                    cout<<"\t12-01-23 2:00 PM 20hrs Rs. 34000"<<endl;
                    cout<<"1. CA - 158"<<endl;
                    cout<<"\t14-01-23 6:00 AM 23hrs Rs. 29000"<<endl;
                    cout<<"1. CA - 208"<<endl;
                    cout<<"\t16-01-23 12:00 AM 21hrs Rs. 40000"<<endl;

                    cout<<"\tSelect the flight you want to book: ";
                    cin>>choice1;

                    if( choice1 == 1 ){
                        charges = 34000;
                        cout<<"\n you have succesfully booked the flight CA -198"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice1 == 2 ){
                        charges = 29000;
                        cout<<"\n you have succesfully booked the flight CA - 158"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice == 3 ){
                        charges = 40000;
                        cout<<"\n you have succesfully booked the flight CA - 208"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu\n";
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: ";
                    cin>>back;
                    mainMenu();
                }
                case 3:
                {
                    cout<<"___________Welcome to UK Airways____________\n\n";
                    cout<<"Your comfort is our priority. Enjoy the journey!\n";
                    cout<<"following are the flights \n";
                    cout<<"1. UK - 798"<<endl;
                    cout<<"\t12-01-23 10:00 AM 14hrs Rs. 44000"<<endl;
            
                    cout<<"\tSelect the flight you want to book: ";
                    cin>>choice1;

                    if( choice1 == 1 ){
                        charges = 14000;
                        cout<<"\n you have succesfully booked the flight DUB -498"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu\n";
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: ";
                    cin>>back;
                    mainMenu();
                }
                case 4:
                {
                    cout<<"___________Welcome to US Airways____________\n\n";
                    cout<<"Your comfort is our priority. Enjoy the journey!\n";
                    cout<<"following are the flights \n";
                    cout<<"1. US - 567 "<<endl;
                    cout<<"\t12-01-23 9:00 AM 22hrs Rs. 37000"<<endl;
                    cout<<"1. US - 258"<<endl;
                    cout<<"\t14-01-23 7:00 AM 13hrs Rs. 25000"<<endl;
                    cout<<"1. Us - 408"<<endl;
                    cout<<"\t16-01-23 1:00 PM 11hrs Rs. 41000"<<endl;

                    cout<<"\tSelect the flight you want to book: ";
                    cin>>choice1;

                    if( choice1 == 1 ){
                        charges = 37000;
                        cout<<"\n you have succesfully booked the flight US -567"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice1 == 2 ){
                        charges = 25000;
                        cout<<"\n you have succesfully booked the flight US - 258"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice == 3 ){
                        charges = 40000;
                        cout<<"\n you have succesfully booked the flight US - 408"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu\n";
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: ";
                    cin>>back;
                    mainMenu();
                }
                case 5:
                {
                    cout<<"___________Welcome to Australian Airlines____________\n\n";
                    cout<<"Your comfort is our priority. Enjoy the journey!\n";
                    cout<<"following are the flights \n";
                    cout<<"1. AS - 698 "<<endl;
                    cout<<"\t12-01-23 9:00 AM 20hrs Rs. 37000"<<endl;
                    cout<<"1. AS - 158"<<endl;
                    cout<<"\t14-01-23 4:00 AM 22hrs Rs. 34000"<<endl;
                    cout<<"1. Us - 708"<<endl;
                    cout<<"\t16-01-23 1:00 PM 21hrs Rs. 42000"<<endl;

                    cout<<"\tSelect the flight you want to book: ";
                    cin>>choice1;

                    if( choice1 == 1 ){
                        charges = 37000;
                        cout<<"\n you have succesfully booked the flight AS -698"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice1 == 2 ){
                        charges = 34000;
                        cout<<"\n you have succesfully booked the flight AS - 158"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice == 3 ){
                        charges = 42000;
                        cout<<"\n you have succesfully booked the flight AS - 708"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu\n";
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: ";
                    cin>>back;
                    mainMenu();
                }
                case 6:
                {
                     cout<<"___________Welcome to European Airlines____________\n\n";
                    cout<<"Your comfort is our priority. Enjoy the journey!\n";
                    cout<<"following are the flights \n";
                    cout<<"1. EU - 898 "<<endl;
                    cout<<"\t12-01-23 2:00 AM 18hrs Rs. 36000"<<endl;
                    cout<<"1. EU - 958"<<endl;
                    cout<<"\t14-01-23 6:00 AM 19hrs Rs. 37000"<<endl;
                    cout<<"1. EU - 608"<<endl;
                    cout<<"\t16-01-23 10:00 AM 20hrs Rs. 31000"<<endl;

                    cout<<"\tSelect the flight you want to book: ";
                    cin>>choice1;

                    if( choice1 == 1 ){
                        charges = 36000;
                        cout<<"\n you have succesfully booked the flight EU -898"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice1 == 2 ){
                        charges = 37000;
                        cout<<"\n you have succesfully booked the flight EU - 958"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else if( choice == 3 ){
                        charges = 31000;
                        cout<<"\n you have succesfully booked the flight EU - 608"<<endl;
                        cout<<"You can go back to menu and take the ticket\n";
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous menu\n";
                        flights();
                    }
                    cout<<"Press any key to go back to the main menu: ";
                    cin>>back;
                    mainMenu();
                }
                default:
                {
                    cout<<"Invalid input, Shifting you to the main menu!\n";
                    mainMenu();
                    break;
                }
            }
        }
};
float registration:: charges;
int registration::choice;

class ticket : public registration, Details{
    public:
        void Bill()
        {
            string destination="";
            ofstream outf("records.txt");
            {
                outf<<"_________Asia Airlines____________\n";
                outf<<"____________Ticket________________\n";
                outf<<"__________________________________\n";

                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\tDescription\n\n";

                if( registration::choice == 1){
                    destination = "Dubai";
                }
                else if( registration::choice==2){
                    destination = "Canada";
                }
                else if( registration::choice==3){
                    destination = "UK";
                }
                else if( registration::choice==4){
                    destination = "USA";
                }
                else if( registration::choice==5){
                    destination = "Australia";
                }
                else if( registration::choice==6){
                    destination = "Europe";
                }
                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost: \t\t"<<registration::charges<<endl;
            }
            outf.close();
        }
        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if( !ifs )
                {
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof())
                {
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }
}; 
void mainMenu(){
    int lchoice;
    int schoice; 
    int back;

    cout<<"\t          Asia Airlines \n\n";
    cout<<"\t____________Main Menu____________\n";
    cout<<"\t_________________________________\n";
    cout<<"\t|\t\t\t\t\t\t|\n";

    cout<<"\t|\t Press 1 to add the Customer Details      \t|\n";
    cout<<"\t|\t Press 2 for flight registration          \t|\n";
    cout<<"\t|\t Press 3 for Ticket and charges           \t|\n";
    cout<<"\t|\t Press 4 to Exit                          \t|\n";
    cout<<"\t|\t\t\t\t\t\t|\n";
    cout<<"\t_________________________________\n";

    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch( lchoice )
    {
        case 1:
        {
            cout<<"_____________Customers____________\n";
            d.information();
            cout<<"Press any Key to go back to Main menu : ";
            cin>>back;
            mainMenu();
            break;
        }
        case 2:
        {
            cout<<"_______Book a flight using this system ________\n\n";
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"________GET YOUR TICKET_______\n\n";
            t.Bill();
            cout<<"Your ticket is printed, you can collect it \n\n";
            cout<<"Press 1 to display your ticket ";

            cin>>back;

            if( back == 1 )
            {
                t.dispBill();
                cout<<"Press any to go back to main menu:";
                cin>>back;
                mainMenu();
            }
            else
                mainMenu();
            break;
        }
        case 4:
        {
            cout<<"\n\n\t\t_____Thank You_____\n";
            break;
        }
        default:
            cout<<"Invalid input, Please Try Again!\n\n";
            mainMenu();
            break;
    }
}
int main(){
    Management Mobj;
}
