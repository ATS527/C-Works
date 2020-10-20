#include <iostream>
using namespace std;
int main(){
  //variables
  int emp_code {};
  double totalSalary {};

  while(emp_code != -1){
    cout << "Enter the Employee Pay code (Enter -1 to exit): ";
    cin >> emp_code;
    switch(emp_code){

      case 1: {
      //Manager Salary per week
        float managerRate {};
        float managerSalary {};
        cout << "Enter the Managers pay per month: ";
        cin >> managerRate;
        managerSalary = (managerRate/30)*7;
        cout << "Weekly Pay is: " << managerSalary << endl;
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
        }
        //overtime too
        else{
          hourlySalary = (40 * hourlyRate) + ((hours-40.0) * 1.5 * hourlyRate);
                          /*fixed salary*/    /*    salary with overtime    */  
          cout << "Weekly Pay is: " << hourlySalary << endl;
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
        cout << endl;
        totalSalary += pieceSalary;
        break;
      }

      case -1:
        cout << "\nExiting and Calculating Total Payroll for this week......" << endl;
        break;

      default: {
         cout << "\nInvalid Pay code!" << endl;
      }
    }
  }
  cout << "\nTotal Payroll for this week = " << totalSalary;
  cout << endl;
  return 0;
}
