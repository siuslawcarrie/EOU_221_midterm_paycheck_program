#include <iostream>
#include<iomanip>
using namespace std;


  double getHoursRate(double hrs){//5
      cout<<"Please enter hours worked: ";//6
      cin>>hrs;//7
     return hrs;//9 cin rate
  }

  double calculatePayCheck(double hours, double rate) {//12
      double pay;//13
      if (hours >= 40) {//14
          pay = 40 * rate + ((hours - 40) * rate * 1.5);//15
      }
      else{//16
          pay = 40 * rate;//17
  }
      return pay;//18
  }


  void printCheck(double rate, double hours, double pay){//22
      cout<<setprecision(2);
      cout<<"EMPLOYEE PAYCHECK\n";//23
      cout << "Hours worked: " <<hours << endl;//24
      cout << "Pay rate: " <<rate <<endl;//25
      cout << "Gross pay: " << pay << endl;//26
     //27
  }

  int main()//30
  {
  double rate=10.50, hours=42, amount, emp_hours;//31
  cout<<"=== Paycheck Program===\n\n";//32

  //emp_hours = getHoursRate(hours);//33
  amount = calculatePayCheck(hours, rate);//34
printCheck(hours, rate, amount);//35

  return 0;//36
}//37
