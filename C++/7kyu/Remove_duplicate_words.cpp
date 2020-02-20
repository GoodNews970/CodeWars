/* Remove duplicate words

Your task is to remove all duplicate words from a string, leaving only single
(first) words entries.

Example:

Input:

'alpha beta beta gamma gamma gamma delta alpha beta beta gamma gamma gamma
delta'

Output:

'alpha beta gamma delta' */

#include <sstream>
#include <string>
#include <unordered_set>

using std::stringstream;
using std::string;
using std::unordered_set;

string removeDuplicateWords(const string &str)
{
    stringstream buffer(str);
    string word, ret;
    unordered_set<string> unique_words;
    while (buffer >> word)
    {
        if (!unique_words.count(word))
        {
            unique_words.insert(word);
            ret += " " + word;
        }
    }
    return ret.erase(0, 1);
}