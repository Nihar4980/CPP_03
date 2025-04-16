#include <stdio.h>
#include <string.h>
struct Student
{
  char Name[100];
  int PRN;
  int Batch;
  int Division;
  char Branch[30];
}S1, S2, S3;
int main() {
  // struct Student S1,S2, S3;
  strcpy(S1.Name,"Nihar");
  S1.PRN = 1;
  S1.Batch = 1;
  S1.Division = 1;
  strcpy(S1.Branch,"AIML");
  printf("Name : %s \n", S1.Name);
  printf("PNR Number: %d \n", S1.PRN);
  printf("Batch: %d \n", S1.Batch);
  printf("Division: %d \n", S1.Division);
  printf("Branch: %s \n", S1.Branch);
}


  // struct myStructure s2;
  // s2.myNum = 10;
  // s2.myLetter = 'N';
  // strcpy(s2.myString,"Some text");

  // // Trying to print the value
  // printf("My Number: %d \n", s2.myNum);
  // printf("My Letter: %c \n", s2.myLetter);
  // printf("My string: %s \n", s2.myString);

