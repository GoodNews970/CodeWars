/* Remove exclamation marks

Write function RemoveExclamationMarks which removes all exclamation marks from a given string. */

#include <string>

std::string removeExclamationMarks(std::string str){
  std::string ret;
  for (size_t i = 0; i < str.length(); i++)
  {
    if (str[i] != '!')
    {
      ret += str[i];
    }    
  }
  return ret;
}