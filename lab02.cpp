#include <iostream>
#include <string> 
#include <cctype>
#include <cassert>

using namespace std;
//Function compares two strings, not minding upper or lower case
int strcmp_case_insensitive(const string& s1, const string& s2)
{
    int i = 0;
    //loop through both strings character by character
    while (i < s1.length() && i < s2.length())
{
    //convert both characters to lowercase for comparison
    char c1 = tolower(s1[i]);
    char c2 = tolower (s2[i]);
    //If first string is smaller, return -1 
    if (c1 < c2)
        return -1;
    //If first string is larger, return 1
    else if (c1 > c2)
        return 1;

    i++;
}
//If one string is shorter, it is considered 'smaller'
if (s1.length() < s2.length())
    return -1;
else if (s1.length() > s2.length())
    return 1;
else //strings equal
    return 0;
}
//Test cases for function, print
int main()
{
    cout << "The comparison of \"String one\" and \"string two\" returns "
         << strcmp_case_insensitive("String one", "string two") << "." << endl;

    cout << "The comparison of \"String one\" and \"string one\" returns "
         << strcmp_case_insensitive("String one", "string one") << "." << endl;

    cout << "The comparison of \"String two\" and \"string one\" returns "
         << strcmp_case_insensitive("String two", "string one") << "." << endl;

    // assert tests
    assert(strcmp_case_insensitive("Hi", "hi") == 0);
    assert(strcmp_case_insensitive("String one", "string one") == 0);
    assert(strcmp_case_insensitive("String one", "string two") < 0);
    assert(strcmp_case_insensitive("String two", "string one") > 0);
    assert(strcmp_case_insensitive("", "") == 0);

    cout << "all tests passed!" << endl;

    return 0;
}