#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

int strcmp_case_insensitive(const string& s1, const string& s2)
{
    int i = 0;
    while (i < s1.length() && i < s2.length())
{
    char c1 = tolower(s1[i]);
    char c2 = tolower (s2[i]);

    if (c1 < c2)
        return -1;
    else if (c1 > c2)
        return 1;

    i++;
}
if (s1.length() < s2.length())
    return -1;
else if (s1.length() > s2.length())
    return 1;
else
    return 0;
}

int main(){
 cout << "The comparison of \"String one\" and \"string two\" returns "
    << strcmp_case_insensitive("String one", "string two") << "." << endl;

    cout << "The comparison of \"String one\" and \"string one\" returns "
    << strcmp_case_insensitive("String one", "string one") << "." << endl;

    cout << "The comparison of \"String two\" and \"string one\" returns "
    << strcmp_case_insensitive("String two", "string one") << "." << endl;

    return 0;
}