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

  if(checkstringiszero(strinput) == 0)
  {
     std::cout<<"Input String is NULL"<<std::endl;
     return 0;
  }

}

int checkstringiszero(std::string& str)
{
if( str.size() == 1 && str[0] == '0')
{
  std::cout << "False" << std::endl;
  return 0;
}
}
