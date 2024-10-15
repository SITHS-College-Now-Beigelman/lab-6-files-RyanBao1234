//Ryan Bao
//10/15/2024
//Lab 6

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std; 

int main() {         
  ifstream inData;                   //reads data
  ofstream outData;                  //makes file changable

  int first_int;                     //define variables
  int second_int;
  char character;
  string sentence;

  inData.open("inData.txt");              //open files
  outData.open("outData.txt");
  
  inData >> first_int >> second_int >> character >> sentence;                    //get values from input file
  outData << "Sum of integers: " << first_int + second_int << endl;              //print accordingly
  outData << "Char Value: " << (character += 1) << endl;
  outData << "String sentence: " << sentence << endl;

  inData.close();                      //close data
  outData.close();
}

/*
Input File
50 76
Q
Computers!

Output File
Sum of integers: 126
Char Value: R
Computers!
*/