
#include<iostream>
#include<stdbool.h>
using namespace std;
bool check(char *s1, char * s2)
{
 if (*s1 == '\0' && *s2 == '\0')
 return true;
 if (*s1 == '*' && *(s1+1) != '\0' && *s2 == '\0')
 return false;
 if (*s1 == '?' || *s1 == *s2)
 return check(s1+1, s2+1);
 if (*s1 == '*')
 return check(s1+1, s2) || check(s1, s2+1);
 return false;
}
void test(char *s1, char *s2)
{
 check(s1, s2)? puts(" Yes "): puts(" No ");
}
int main()
{
 char s1[20],s2[20];
 cout<<"Enter first string with wild characters: ";
 cin>>s1;
 cout<<"Enter second string without wild characters: ";
 cin>>s2;
 test(s1,s2);
 return 0; }
