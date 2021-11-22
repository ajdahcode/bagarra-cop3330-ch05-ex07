/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 alden bagarra
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c;
  double root1, root2, discriminant;
  // Prompt the user for quadratic coefficients
  cout << "Enter coefficients a, b and c: ";
  cin >> a >> b >> c;
  // Make the discriminant from the values given
  discriminant = b*b - 4*a*c;
  
  // If the discriminant is greater than 0 then there are roots
  if (discriminant > 0) {
    root1 = (-b + sqrt(discriminant)) / (2*a);
    root2 = (-b - sqrt(discriminant)) / (2*a);
    cout << "Plus discriminant: " << root1 << endl;
    cout << "Minus discriminant: " << root2 << endl;
  }
  // If the discriminant is 0 then there is one root
  else if (discriminant == 0) {
    root1 = -b/(2*a);
    cout << "One root: " << root1 << endl;
  }
  // If the discriminant is less than 0 then there are no real roots.
  else {
    cout << "No real roots."  << endl;
  }

  return 0;
}