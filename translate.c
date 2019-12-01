#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int translate_dec_hex(char num[]);
/* the main function*/
int main()
{
  /* initialize an char array with size 32 */
  char num[31];
  /*request an input from */
  printf("Enter your number in decimal form:\n");
  scanf("%s", num);
  /* print the the binary represantaion off the number */
  printf("This is your number in binary form:\n");
  translate_dec_hex(num);
  return 0;
}
/* function that prints the binary form of a number */
int translate_dec_hex(char num[])
{
  /* convert the char array to an int with the atoi function */
  int decNum = atoi(num);
  /* the result that would be printed */
  int result;
  /* initialize an index for the lopp */
  int i;
  /* loop 32 times each iteration right shift the decNum by the index the check if the last bit is a 1 if it is print 1 else print 0 */
  for (i = 31; i >= 0; i--)
  {
    result = decNum >> i;

    if (result & 1)
      printf("1");
    else
      printf("0");
  }
  /* make a new line to make in look better in the terminal */
  printf("\n");


  return 0;
}
