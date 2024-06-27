#include "StringCalculator.h"
#include <string>
#include <vector>
#include <sstream>
#include <stdexcept>
#include <regex>
#include <algorithm>


int StringCalculator::add(const std::string& strinput)
{
if( strinput.empty())
{
  std::cout<<"Input String is NULL"<<std::endl;
  return 0;
}

if( strinput.size() == 1 )
{
  char ch = strinput[0]; // ASCII Val converted
        if (!(ch >= 48 && ch <= 57)) {
            cout << "False" << endl;
            return 0;
        }
  std::cout<<"Input String is NULL"<<std::endl;
  return 0;
}
}

