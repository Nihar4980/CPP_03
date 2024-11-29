#include <stdio.h>
#include <string.h>

// struct myStructure {
//   int myNum;
//   char myLetter;
//   char myString[30];  // String
// };

struct Student
{
  char Name[100];
  int Roll;
  int Batch;
  int Division;
  char Branch[30];
}S1, S2;

int main() {
  // struct Student S1,S2;
  strcpy(S1.Name,"Nihar");
  S1.Roll = 1;
  S1.Batch = 1;
  S1.Division = 1;
  strcpy(S1.Branch,"AIML");

  // strcpy(S2.Name,"MIT");
  // S2.Roll = 1;
  // S2.Batch = 1;
  // S2.Division = 1;
  // strcpy(S2.Branch,"AIML");

  printf("Name : %s \n", S1.Name);
  printf("Roll Number: %d \n", S1.Roll);
  printf("Batch: %d \n", S1.Batch);
  printf("Division: %d \n", S1.Division);
  printf("Branch: %s \n", S1.Branch);


  // struct myStructure s2;
  // s2.myNum = 10;
  // s2.myLetter = 'N';
  // strcpy(s2.myString,"Some text");

  // // Trying to print the value
  // printf("My Number: %d \n", s2.myNum);
  // printf("My Letter: %c \n", s2.myLetter);
  // printf("My string: %s \n", s2.myString);

  return 0;  
}