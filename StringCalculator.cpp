#include "StringCalculator.h"
#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <algorithm>


int StringCalculator::add(const std::string& strinput)
{
  int sum;
if( strinput.empty())
{
  std::cout<<"Input String is NULL"<<std::endl;
  return 0;
}

  if(checkstringiszero(strinput) == 0)
  {
     std::cout<<"Input String is NULL"<<std::endl;
     return 0;
  }

 sum = addtwostringnums(strinput);

}

int StringCalculator::checkstringiszero(std::string str)
{
if( str.size() == 1 && str[0] == '0')
{
  std::cout << "False" << std::endl;
  return 0;
}
}

int StringCalculator::addtwostringnums(std::string str)
{
    stringstream ss(str); // Create a stringstream from input string
    string token;
    int num1, num2;
    
    getline(ss, token, ','); // Read until comma and store in token
    num1 = stoi(token); // Convert token to integer
    
    getline(ss, token); // Read remaining string (after comma)
    num2 = stoi(token); // Convert remaining token to integer
    
    int sum = num1 + num2; // Compute sum
    
    return sum;

}
