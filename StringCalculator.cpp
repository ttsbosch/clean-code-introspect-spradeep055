#include "StringCalculator.h"
#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <algorithm>
#include <stdexcept> // for std::invalid_argument


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

  try {
 sum = addtwostringnums(strinput);
  }catch (const invalid_argument& e) {
        std::cerr << "Error: " << e.what() << endl;
    }

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
    std::stringstream ss(str); // Create a stringstream from input string
    std::string token;
    int num1, num2;
    
    // Read and convert num1
    if (!getline(ss, token, ',')) {
        throw invalid_argument("Invalid input format: missing comma");
    }
    try {
        num1 = stoi(token); // Convert token to integer
    } catch (const invalid_argument& e) {
        throw invalid_argument("Invalid input format: invalid number");
    }
    
    // Read and convert num2
    if (!getline(ss, token)) {
        throw invalid_argument("Invalid input format: missing second number");
    }
    try {
        num2 = stoi(token); // Convert token to integer
    } catch (const invalid_argument& e) {
        throw invalid_argument("Invalid input format: invalid number");
    }
    
    int sum = num1 + num2; // Compute sum
    
    return sum;

}
