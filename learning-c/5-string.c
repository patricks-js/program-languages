#include <stdio.h>

int main()
{
  char *name1 = "Lucas Patrick";

  printf("Name 1: %s\n", name1);

  char name2[] = "Lino da Silva";

  printf("Name 2: %s\n", name2);

  printf("Size name 2: %d\n", strlen(name2));

  if (strncmp(name1, "Lucas Patrick", 100) == 0)
  {
    printf("Hello, Patrick.\n");
  }
  else
  {
    printf("Go away.\n");
  }

  char dest[] = "Lucas ";
  char src[] = "Patrick";

  strncat(dest, src, strlen(src));

  printf("%s\n", dest);

  return 0;
}
