#include <stdio.h>
#include <ctype.h>      // для tolower()
 
#define STRLEN 81
 
void set_char(char *p, char ch);
 
int main(void)
{
  char i,k,words[STRLEN]={0};
 
  puts("Enter a string, please.");
  gets(words);
 
  i=0;
  k=0;
  while(words[i])
  {
      words[i] = tolower(words[i]);   // перевод к нижнему регистру
 
      if((words[i] >= 'a')&&(words[i] <= 'z'))  // удаление пробелов и вообще всего, кроме букв
      words[i-k] = words[i];
      else
    k++;
 
      i++;
  }
  words[i-k] = 0; // новый конец строки
 
  k = i - k - 1;  // индексный адрес конечного символа
 
  for(i=0; i < k; i++, k--)
  {
     if(words[i]-words[k])
     {
    puts("Is not palindrome");
    return 0;
     }
  }
 
  puts("This string is palindrome!");
return 0;
}
