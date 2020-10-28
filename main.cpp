#include <iostream>
using namespace std;
int main(){

  //variables
  int emp_code {};
  double totalSalary {};

  while(emp_code != -1)//while loop
  {
    cout << "Codes for different employers:\n" << endl;
    cout << "Manager => 1" << endl;
    cout << "Hourly Workers => 2" << endl;
    cout << "Commision Employers => 3" << endl;
    cout << "Piece Producing workers => 4" << endl;
    cout << "\nEnter the Employee Pay code (Enter -1 to exit): ";
    cin >> emp_code;
    
    //Exception error fixed if user types character instead of number
    if (cin.fail()){
      cin.clear();
      cin.ignore(10,'\n'); // it will ignore 10 characters or get to the end of the line.
    }
    //Solved infinte looping

    switch(emp_code){

      case 1: {
      //Manager Salary per week
        float managerRate {};
        float managerSalary {};
        cout << "Enter the Managers pay per month: ";
        cin >> managerRate;
        managerSalary = (managerRate/30)*7;
        cout << "Weekly Pay is: " << managerSalary << endl;
        cout << "--------------------------\n";
        cout << endl;
        totalSalary += managerSalary;
        break;
      }

      case 2: {
      //Hourly Workers
        float hours {};
        float hourlyRate {};
        float hourlySalary {}; 
        cout << "Enter Hourly workers pay rate per hour: ";
        cin >> hourlyRate;
        cout << "Enter the number of hours worked: ";
        cin >> hours;
        
        //fixed hours
        if(hours <= 40){
           hourlySalary = hourlyRate * hours;
           cout << "Weekly Pay is: " << hourlySalary << endl;
           cout << "--------------------------\n";
        }

        //overtime too
        else{
          hourlySalary = (40 * hourlyRate) + ((hours-40.0) * 1.5 * hourlyRate);
                          /*fixed salary*/    /*    salary with overtime    */  
          cout << "Weekly Pay is: " << hourlySalary << endl;
                  cout << "--------------------------\n";

        } 
        cout << endl;
        totalSalary += hourlySalary;
        break;
      }

      case 3: {
      //Commision Employers Salary
        float grossSales {};
        float commisionSalary {};
        cout << "Enter Commission empolyee's gross weekly sales: ";
        cin >> grossSales;
        commisionSalary = 750 + (0.057 * grossSales);
        cout << "Weekly Pay is: " << commisionSalary << endl;
        cout << "--------------------------\n";
        cout << endl;
        totalSalary += commisionSalary;
        break;
      }

      case 4: {
      //Piece produced salary  
        int pieces {};
        float pieceRate {};
        float pieceSalary;
        cout << "Enter the number of pieces produced: ";
        cin >> pieces;
        cout << "Enter the employee's per piece pay rate: ";
        cin >> pieceRate;
        pieceSalary = pieces * pieceRate;
        cout << "Weekly Pay is: " << pieceSalary << endl;
        cout << "--------------------------\n";
        cout << endl;
        totalSalary += pieceSalary;
        break;
      }

      case -1:
        cout << "\nExiting and Calculating Total Payroll for this week......" << endl;
        break;

      default: {
        cout << "\nInvalid Pay code!\n" << endl;
        cout << "--------------------------\n" << endl;

      }
    }
  }
  cout << "\nTotal Payroll for this week = " << totalSalary;
  cout << endl;
  return 0;
}
