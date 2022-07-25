//program to count the number of characters, words, and lines in a file//
#include <stdio.h>
int main() 
{
  char ch;
  int char_count = 0, word_count = 0, line_count = 0;
  FILE *fp;
  fp = fopen("test.txt", "r");
  while ((ch = fgetc(fp)) != EOF) 
  {
    
    if (ch == '\n' || ch == '\0')
		line_count++;
    if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
        word_count++;
    else
		char_count++;
        
  }
  printf("Number of characters: %d.\n", char_count);
  printf("Number of words: %d.\n", word_count);
  printf("Number of lines: %d.\n", line_count);
  return 0;
}

/* OUTPUT
Number of characters: 135.
Number of words: 22.
Number of lines: 2.

COMPILATION STEP
gcc fcount.c -o fcount

EXECUTION STEP
./fcount */