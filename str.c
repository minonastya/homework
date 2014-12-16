//Количество вхождений строки в подстроку
//Миновская Настя
#include <stdio.h>
#include <string.h>

int strFound (char str[], char substr[])
{
  int i, j, k, count = 0;
  for (i = 0; str[i] != '\0'; i++ )
  {
    for (j = i, k = 0; substr[k] != '\0' && str[j] == substr[k]; j++, k++);
    if ((k > 0) && (substr[k+1] == '\0' || substr[k] == '\0')) (count++);
  }
  return count;
}

main()
{
  char str[1000];
  char substr[1000];
  fgets(str, 1000 , stdin);
  fgets(substr, 1000 , stdin);
  if ((strlen(substr) == 1) && (strlen(str) != 1)) printf("%d\n", 0);
  else printf ("%d\n", strFound(str, substr));
  return 0;
}
