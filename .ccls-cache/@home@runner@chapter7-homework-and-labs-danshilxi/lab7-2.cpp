//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double growthRate = 0.055;
    double sales = 0.0;
    double salesTarget = 150000.0;
    int years = 0;
    double annualIncrease = 0.0;
    cout << "Current year's sales: ";
    cin >> sales;
    while (sales < salesTarget)
        {
        annualIncrease = sales * growthRate;
        sales += annualIncrease;
        years += 1;
}
    cout << fixed << setprecision(2);
    cout << "Sales this year: " << sales << endl;    
    cout << "Sales in " << years << " years: " << sales << endl;
    return 0;
        
        

    
} //end of main function
