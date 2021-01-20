//********************************************************
// Author: Tucker Arnold
//
// Program: Cable Company Bills
// 
// Date: 02/12/2020
// 
//********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

      // Named constants - residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

      // Named constants - business customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main()
{

     // Variable declaration
int accountNumber;
char customerType;
int numOfPremChannels;
int numOfBasicServConn;
double amountDue;

cout << fixed << showpoint;                            //Step 1
cout << setprecision (2) ;                             //Step 1

cout << "This program computes a cable"
     << "bill." << endl;                               
cout << "Enter account number (an integer) : ";        //Step 2
cin >> accountNumber;                                  //Step 3
cout << endl;

cout << "Enter customer type: "
     << "R or r (Residential), "
     << "B or b (Business) : ";                       //Step 4
cin >> customerType;                                  //Step 5
cout << endl;

switch (customerType)
{

	case 'b' :
	case 'B' :                                          
    cout << "Enter the number of basic "
         << "service connections: ";                //Step 6
    cin >> numOfBasicServConn;                      
    cout << endl;

    cout << "Enter the number"                      
         << " of premium channels: ";               
    cin >> numOfPremChannels;
    cout << endl;

    if (numOfBasicServConn<= 10)
        amountDue = BUS_BILL_PROC_FEES
                    + BUS_BASIC_SERV_COST
                    + numOfPremChannels *
                      BUS_COST_PREM_CHANNEL;
    else
        amountDue = BUS_BILL_PROC_FEES
                    + BUS_BASIC_SERV_COST
                    + (numOfBasicServConn - 10) *
                       BUS_BASIC_CONN_COST
                    + numOfPremChannels *
                      BUS_COST_PREM_CHANNEL;

    cout << "Account number: "                        //Step 7
         << accountNumber << endl;
    cout << "Amount due: $" << amountDue
         << endl;                            
    break;

    default:
        cout << "Invalid customer type." << endl;     //Step 8
    } //end switch
    
    return 0;
}
