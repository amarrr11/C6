//Find the entered value is Vowel or consonant using if-else

#include<stdio.h>
int main()
{
char value;
int l,u;
printf("Enter value=");
scanf("%c",&value);

l=(value=='a'||value=='e'||value=='i'||value=='o'||value=='u');
u=(value=='A'||value=='E'||value=='I'||value=='O'||value=='U');

if(l||u)
printf("Its Vowel");
else
printf("Its consonant");
return 0;
}
