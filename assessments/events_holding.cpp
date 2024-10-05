// Create a Project to demonstrate an Event Organiser Project which will help to manage the Events. The Project should contain all the necessary requirements i.e need to use conditional Statements, Loops, Function and also A Program should use the concept of OOP.
// use comments for easy understanding for both developer and evaluter 
// A Project should contain the following execution flow.
// When Execution of the main source file, the program should first ask the NAME OF THE EVENT.

// After asking the event name , it should ask your
// I. FIRST NAME,LAST NAME.
// II. Number of Guests.
// III. Number of Minutes.

//Once the all the Input requirement is over, you should be able to get the Event Cost Estimation.
// Use the following rate card :
// a. const double CostPerHour = 18.50;
// b. const double CostPerMinute = .40;
// c. const double CostOfDinner = 20.70;

// GET Number of Servers.
// (1 Server can handle 20 guests, so FIND how much server required for No. of Guests you Entered.) (Hint : You can use ceil() function . (i.e : rounds up the nearest integer)
// ii. GET COST of ONE Server.
//Example :
// Cost1 = (NumberOfMinutes / 60) * CostPerHour;
// Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
// CostForOneServer = Cost1 + Cost2;
// iii. GET COST for FOOD.
// TotalFoodCost = NumberOfGuests * CostOfDinner;
// iv. Get Average Cost Per Person
// AverageCost = TotalFoodCost / NumberOfGuests;
// v. GET TOTAL COST.
// TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);
// vi. GET DEPOSIT AMOUNT
// DepositAmount = TotalCost * .25;



#include<iostream>
#include<string>
#include<cmath> // for ceil function
using namespace std;

// Constants for cost calculations
const double CostPerHour = 18.50;
const double CostPerMinute = 0.40;
const double CostofDinner = 20.70;

class EventManagement {
    // Event class needed variables
    string eventName;
    string firstName;
    string lastName;
    int numberOfGuests;
    int numberOfMinutes;

public:
    // Constructor to initialize an Event object
    EventManagement(string name, string fName, string lName, int guests, int minutes) {
        eventName = name;
        firstName = fName;
        lastName = lName;
        numberOfGuests = guests;
        numberOfMinutes = minutes;
    }

    // Function to calculate the total cost of the event management
    void calculateCost() {
        // Calculate the number of servers needed
        int numberOfServers = ceil(static_cast<double>(numberOfGuests) / 20);

        // Calculate cost for one server
        double costForOneServer = (numberOfMinutes / 60.0) * CostPerHour + (numberOfMinutes % 60) * CostPerMinute;

        // Calculate food cost
        double totalFoodCost = numberOfGuests * CostofDinner;

        // Calculate total cost
        double totalCost = totalFoodCost + (costForOneServer * numberOfServers);

        // Calculate deposit amount
        double depositAmount = totalCost * 0.25;

        // Output the results
        cout<<" --- Event Cost Estimation --- "<<endl;
        cout<<"Event Name: "<<eventName<<endl;
        cout<<"Host: "<<firstName<<" "<<lastName<<endl;
        cout<<"Number of Guests: "<<numberOfGuests<<endl;
        cout<<"Number of Minutes: "<<numberOfMinutes<<endl;
        cout<<"Number of Servers Required: "<<numberOfServers<<endl;
        cout<<"Cost for One Server: Rs "<<costForOneServer<<endl;
        cout<<"Total Food Cost: Rs "<<totalFoodCost<<endl;
        cout<<"Total Event Cost: Rs "<<totalCost<<endl;
        cout<<"Deposit Amount (25%): Rs "<<depositAmount<<endl;
    }
};

int main() {
    string eventName, firstName, lastName;
    int numberOfGuests, numberOfMinutes;

    // Getting input from the user
    cout<<"Enter the NAME OF THE EVENT: ";
    cin>>ws; // To ignore leading whitespace
    getline(cin, eventName);
    
    cout<<"Enter your FIRST NAME: ";
    cin>>firstName;
    
    cout<<"Enter your LAST NAME: ";
    cin>>lastName;
    
    cout<<"Enter the NUMBER OF GUESTS: ";
    cin>>numberOfGuests;
    
    cout<<"Enter the NUMBER OF MINUTES: ";
    cin>>numberOfMinutes;

    // Create an Event object and calculate the cost
    EventManagement eventManagement(eventName, firstName, lastName, numberOfGuests, numberOfMinutes);
    eventManagement.calculateCost();
    
    return 0;
}
