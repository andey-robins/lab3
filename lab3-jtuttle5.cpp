//
//  Code by Jacob "Andey" Tuttle
//  Last Update October 7, 2018
//  Liscenced under MIT Liscence
//

#include "iostream"
using namespace std;

//function declarations
short shortThruN(short n);
long longThruN(long n);
float floatProduct(long n);
double doubleProduct(long n);
float fAdder(long n);
double dAdder(long n);
void puzzle();
void puzzle2();

int main(){

  // // calls code for question 1
  // short n;
  // cout << "Please enter in a number n: ";
  // cin >> n;
  // short ssum = shortThruN(n);
  // cout << "The sum of the first " << n << " numbers is " << ssum << endl;
  //
  // // calls code for qustion 3
  // long m;
  // cout << "Please enter another number n: ";
  // cin >> m;
  // long lsum = longThruN(m);
  // cout << "The sum of the first " << m << " numbers is " << lsum << endl;
  //
  // // calls code for question 4
  // long o;
  // cout << "Please enter a number n: ";
  // cin >> o;
  // float fproduct = floatProduct(o);
  // cout << "The product of the first " << o << " numbers is " << fproduct << endl;
  //
  // // calls code for question 5
  // long p;
  // cout << "Please enter a number n: ";
  // cin >> p;
  // double dproduct = doubleProduct(p);
  // cout << "The product of the first " << p << " numbers is " << dproduct << endl;

  // calls code for question 6
  long q;
  cout << "Please enter a number n: ";
  cin >> q;
  double dAdded = dAdder(q);
  float fAdded = fAdder(q);
  cout << "The sum of the ratio (1/n) * n - 1.0 is " << dAdded << " as a double and " << fAdded << " as a float." << endl;

  // // puzzle function for question 7
  // puzzle();
  //
  // //updated puzzle function for question 8
  // puzzle2();

  return 0;
}

//code segment for question 1
//computes the sum of all integers from 0 to n
short shortThruN(short n){

  short sum = 0;

  for (short i = 0; i <= n; i++){
    sum += i;
  }

  return sum;
}

//code segment for question 3
//computes the sum of all integers from 0 to n
long longThruN(long n){

  long sum = 0;

  for (long i = 0; i <= n; i++){
    sum += i;
  }

  return sum;
}

//code segment for question 4
//computes the product of all integers from 0 to n as a float
float floatProduct(long n){

  float product = 1;

  for (long i = 1; i <= n; i++){
    product *= i;
  }

  return product;
}

//code segment for question 5
//computes the product of all integers from 0 to n as a double
double doubleProduct(long n){

  double product = 1;

  for (long i = 1; i <= n; i++){
    product *= i;
  }

  return product;
}

//code segment for question 6
//attempts to reconstruct the number 1 using floats
float fAdder(long n){

  float ratio = 1.f / n;

  return ratio * n - 1.f;
}

//code segment for question 6
//attempts to reconstruct the number 1 using doubles
double dAdder(long n){

  double ratio = 1.0 / n;

  return ratio * n - 1.0;
}

//code segment for question 7
void puzzle(){

  for (float i = 3.4; i < 4.4; i += 0.2){
    cout << "i = " << i << endl;
  }
}

//code segment for question 8
void puzzle2(){

  for (double i = 3.4; i < 4.4; i += 0.2){
    cout << "i = " << i << endl;
  }
}
