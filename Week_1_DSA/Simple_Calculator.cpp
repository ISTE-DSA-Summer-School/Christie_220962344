# include <iostream>
using namespace std;

int main() {

  char o;
  float num1, num2;

  cout << "Enter operation to be performed: ";
  cin >> o;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  switch(o) {

    case '+':
      cout <<"The result is: "<<num1+num2;
      break;

    case '-':
      cout << "The result is: "<<num1-num2;
      break;

    case '*':
      cout << "The result is: "<<num1*num2;
      break;

    case '/':
      cout << "The result is: "<<num1/num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
  }
  return 0;
}


