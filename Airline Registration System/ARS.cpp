#include<iostream>
#include<fstream>
#include<iomanip> // used for floating point values

using namespace std;

void mainMenu();
class Management
{
   public:
      Management()
      {
         mainMenu();
      }
};

class Details
{
   public:

         static string name, gender;
         int mobileNo;
         int age;
         string add;
         static int cId;
         char arr[100];

         void information()
         {
            cout<<"\n Enter the customer ID : ";
            cin>>cId;
            cout<<"\nEnter the name : ";
            cin>>name;
            cout<<"\nEnter the age : ";
            cin>>age;
            cout<<"\n Address : ";
            cin>>add;
            cout<<"\n Gender : ";
            cin>>gender;
            cout<<"Your details are saved with us\n"<<endl;
          }
 };

int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
     public:
         static int choice;
         int choice1;
         int back;
         static float charges;

         void flights()
         {
            string flightN[]={"UK","Canada","USA","Australia","Europe"};

            for(int a=0; a<6; a++)
            {
                cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
            }

            cout<<"\nWelcome to the Airlines!"<<endl;
            cout<<"Press the number of the country of which you want to book the flight: ";
            cin>>choice;

            switch(choice)
           {
                case 1:
                    {
                        cout<<"___________Welcome to UK Airways_________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. UK - 498"<<endl;
                        cout<<"\t08-01-2022 9:00AM 10hrs Rs. 140000"<<endl;
                        cout<<"1. UK - 658"<<endl;
                        cout<<"\t10-01-2022 4:00AM 12hrs Rs. 10000"<<endl;
                        cout<<"1. UK - 988"<<endl;
                        cout<<"\t12-01-2022 11:00AM 11hrs Rs. 99000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges=140000;
                            cout<<"\nYou have successfully booked the flight UK - 498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==2)
                        {
                            charges=10000;
                            cout<<"\nYou have successfully booked the flight UK - 658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=99000;
                            cout<<"\nYou have successfully booked the flight UK - 988"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                           cout<<"Invalid input, shifting to the previous menu"<<endl;
                           flights();
                        }
                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                           mainMenu();
                        }
                        else
                        {
                           mainMenu();
                        }
                 }

                 case 2:
                     {
                          cout<<"___________Welcome to Canadian Airlines_________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. CA - 298"<<endl;
                        cout<<"\t09-01-2022 2:00PM 20hrs Rs. 34000"<<endl;
                        cout<<"1. CA - 158"<<endl;
                        cout<<"\t11-01-2022 5:00AM 23hrs Rs. 29000"<<endl;
                        cout<<"1. CA - 208"<<endl;
                        cout<<"\t14-01-2022 12:00AM 21hrs Rs. 40000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges=34000;
                            cout<<"\nYou have successfully booked the flight CA - 298"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==2)
                        {
                            charges=29000;
                            cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=40000;
                            cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                           cout<<"Invalid input, shifting to the previous menu"<<endl;
                           flights();
                        }
                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                           mainMenu();
                        }
                        else
                        {
                           mainMenu();
                        }
                     }
             case 3:
                  {
                        cout<<"___________Welcome to US Airways_________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. US - 586"<<endl;
                        cout<<"\t10-01-2022 9:00AM 22hrs Rs. 37000"<<endl;
                        cout<<"1. US - 658"<<endl;
                        cout<<"\t11-01-2022 6:00AM 22hrs Rs. 39000"<<endl;
                        cout<<"1. US - 895"<<endl;
                        cout<<"\t12-01-2022 10:00AM 21hrs Rs. 42000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges=37000;
                            cout<<"\nYou have successfully booked the flight US - 498"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==2)
                        {
                            charges=39000;
                            cout<<"\nYou have successfully booked the flight US - 658"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=42000;
                            cout<<"\nYou have successfully booked the flight US - 895"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                           cout<<"Invalid input, shifting to the previous menu"<<endl;
                           flights();
                        }
                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                           mainMenu();
                        }
                        else
                        {
                           mainMenu();
                        }

                  }
             case 4:
                  {
                        cout<<"___________Welcome to European Airlines_________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. EUR - 798"<<endl;
                        cout<<"\t12-01-2022 9:00AM 10hrs Rs. 440000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges=44000;
                            cout<<"\nYou have successfully booked the flight EUR - 798"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                           cout<<"Invalid input, shifting to the previous menu"<<endl;
                           flights();
                        }
                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                           mainMenu();
                        }
                        else
                        {
                           mainMenu();
                        }

                  }

             case 5:
               {
                        cout<<"___________Welcome to Australian Airlines_________\n"<<endl;
                        cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
                        cout<<"Following are the flights \n"<<endl;
                        
                        cout<<"1. AUS - 898"<<endl;
                        cout<<"\t18-01-2022 9:00AM 20hrs Rs. 44000"<<endl;
                        cout<<"1. AUS - 458"<<endl;
                        cout<<"\t20-01-2022 4:00AM 22hrs Rs. 34000"<<endl;
                        cout<<"1. AUS - 988"<<endl;
                        cout<<"\t31-01-2022 10:00AM 21hrs Rs. 42000"<<endl;

                        cout<<"\nSelect the flight you want to book : ";
                        cin>>choice1;

                        if(choice1==1)
                        {
                            charges=44000;
                            cout<<"\nYou have successfully booked the flight AUS - 898"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }

                        else if(choice1==2)
                        {
                            charges=34000;
                            cout<<"\nYou have successfully booked the flight AUS - 458"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else if(choice1==3)
                        {
                            charges=42000;
                            cout<<"\nYou have successfully booked the flight AUS - 988"<<endl;
                            cout<<"You can go back to menu and take the ticket"<<endl;
                        }
                        else
                        {
                           cout<<"Invalid input, shifting to the previous menu"<<endl;
                           flights();
                        }
                        cout<<"Press any key to go back to main menu:"<<endl;
                        cin>>back;

                        if(back==1)
                        {
                           mainMenu();
                        }
                        else
                        {
                           mainMenu();
                        }
                }
                default:
                   {
                     cout<<"Invalid input, Shifting you to theMain Menu !"<<endl;
                     mainMenu();
                     break;
                   }

           }
        }      
};
float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
   public:
      void Bill()
      {
          string destination="";
          ofstream outf("records.txt");
          {
             outf<<"_______________Airline_______________"<<endl;
             outf<<"______________Ticket_________________"<<endl;
             outf<<"_____________________________________"<<endl;

             outf<<"Customer ID:"<<Details::cId<<endl;
             outf<<"Customer Name:"<<Details::name<<endl;
             outf<<"Customer Gender:"<<Details::gender<<endl;
             outf<<"\tDescription"<<endl<<endl;

             if(Registration::choice==1)
             {
                destination="UK";
             }
             else if(Registration::choice==2)
             {
                destination="Canada";
             }
             else if(Registration::choice==3)
             {
                destination="USA";
             }
             else if(Registration::choice==4)
             {
                destination="Europe";
             }
             else if(Registration::choice==5)
             {
                destination="Australia";
             }

             outf<<"Destination\t\t"<<destination<<endl;
             outf<<"Flight cost :\t\t"<<Registration::charges<<endl;
           }
           outf.close();
      }
      void disBill()
      {
         ifstream ifs("records.txt");
         {
           if(!ifs)
             {
               cout<<"File error!"<<endl;
             }
             while(ifs.eof())
             {
               ifs.getline(arr, 100);
               cout<<arr<<endl;
             }
           }
             ifs.close();
       }
};

void mainMenu()
{
   int lchoice;
   int schoice;
   int back;

   cout<<"\t            Airlines    \n" << endl;

   cout<<"\t____________Main Menu_________"<<endl;

   cout<<"\t______________________________________________"<<endl;
   cout<<"\t|\t\t\t\t\t\t|" <<endl;

   cout<<"\t|\t Press 1 to add the Customer Details  \t|"<<endl;
   cout<<"\t|\t Press 2 for Flight Registration      \t|"<<endl;
   cout<<"\t|\t Press 3 for Ticket and Charges       \t|"<<endl;
   cout<<"\t|\t Press 4 to Exit                      \t|"<<endl;
   cout<<"\t|\t\t\t\t\t\t|" <<endl;
   cout<<"\t______________________________________________"<<endl;

   cout<<"Enter the choice : ";
   cin>>lchoice;

   Details d;
   Registration r;
   Ticket t;

   switch(lchoice)
   {
     case 1:
          {
             cout<<"________Customers_________\n"<<endl;
             d.information();
             cout<<"Press 1 to go back to Main Menu : ";
             cin>>back;

             if(back==1){
                 mainMenu();
             }
             else{
                mainMenu();
             }
             break;
          }
      case 2:
           {
               cout<<"_____ Book a flight ticket using this system_____\n "<<endl;
               r.flights();
               break;
           }
      case 3:
         {
            cout<<"______GET YOUR TICKET\n "<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it\n "<<endl;
            cout<<"Press 1 to display your ticket\n ";

            cin>>back;
               if(back==1)
               {
                  t.disBill();
                  cout<<"Press any key to go back to main menu"<< endl;
                  cin>>back;
                  if(back==1)
                  {
                     mainMenu();
                  }
                  else{
                     mainMenu();
                  }
               }
               else{
                  mainMenu();
               }
               break;
            } 
        case 4:
             {
                 cout<<"\n\n\t_______Thank-You_______\n";
                 break;
             }
             default:
                {
                  cout<<"Invalid input, Please try again!"<<endl;
                  mainMenu();
                  break;
                }
   }
}

int main()
{
   Management Mobj;
   return 0;
}
