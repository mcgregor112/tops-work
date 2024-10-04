// q.3 Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)

// Answer :

#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int matches;

    void inputData() {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter number of matches: ";
        cin>>matches;
    }
};

class Batsman : public Cricketer {
    int totalRuns, bestPerformance;
    float averageRuns;

public:
    void inputData() {
        Cricketer::inputData();
        cout<<"Enter total runs: ";
        cin>>totalRuns;
        cout<<"Enter best performance: ";
        cin>>bestPerformance;
        calculateAverage();
    }

    void calculateAverage() {
        if (matches != 0)
            averageRuns = (float)totalRuns / matches;
        else
            averageRuns = 0;
    }

    void displayData() {
        cout<<"Name: "<<name<<endl;
        cout<<"Matches: "<<matches<<endl;
        cout<<"Total Runs: "<<totalRuns<<endl;
        cout<<"Average Runs: "<<averageRuns<<endl;
        cout<<"Best Performance: "<<bestPerformance<<endl;
    }
};

int main() {
    Batsman b;
    b.inputData();
    b.displayData();

    return 0;
}
