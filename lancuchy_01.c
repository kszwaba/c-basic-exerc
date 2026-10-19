
#include <stdio.h>
#include <string.h>

int main()
{

  /* Example 1 */
  char string1[] = "A string declared as an array.\n";

  /* Example 2 */
  const char *string2 = "A string declared as a pointer.\n";

  /* Example 3 */
  char string3[30];
  strcpy(string3, "A string constant copied in.\n");

  printf ("%s\n", string1);
  printf ("%s\n",string2);
  printf ("%s\n",string3);

  return 0;
}