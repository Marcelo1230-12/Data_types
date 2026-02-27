//
// Created by marce on 12/19/2025.
//


#include <stdio.h>
#include <stdbool.h>
bool isnumber(char c){

  if (c>='0' && c <= '9'){
    return true;}
  else {
    return false;}
}
int decode(char *str){
  int total=0;
  int i=0;
  while(str[i]!='\0'){
    if (!isnumber(str[i])){
      printf("this has an malformed word");
      return -1;
    }
    int number =0;
    while(isnumber(str[i])){
      number = number * 10;
      number = number +(str[i] - '0');
      i++;
    }
    if((str[i])=='\0')
    {
      printf("this has an malformed word");
      return -1;
    }
    char letter= str[i];
    i ++;
    for (int j=0; j<number; j++)
    {
      putchar(letter);

    }
    total = total+number;
  }
  return total;

}


int main(int argc , char *argv[])
{
  // int data type.
  // int age = 19;
  // double GPA = 2.3;
  // for floats the date type hass to marked with the {f} afete the number
  // float Grade = 90.8f;
  // char letter = 'A';
  // printf("This is my age: %d",age);// to print intgers
  // printf("\nThis is my GPA: %.1lf",GPA);
  // printf("\nThis is my grade is EE: %.1f",Grade);
  // printf("\nThis is my letter Grade: %c",letter);
  // printf("\nThe value of the char is:%d",letter);
  // // using sizeof is for check the size of the bites.
  // printf("\nThe zide of GPA is:%.1lf",sizeof(GPA));
  int num = decode("29u");
  printf("\nThe number decoded is:%d",num);
// char h = '48';
// printf("\n%c",h);
  // int n=1;
  // for (int i = 0; i < n; i++) {
  //   int c;
  //   putchar('\n');
  //   putchar(c);
  // }
  // putchar('\n');
  // return 0;
}