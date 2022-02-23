#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char * argv[]) {

  if (argc !=2) {
    printf("Please give one numeric argument.\n");
    return 1;
  }

  int limit = atoi(argv[1]);

  char * string,* name;
  name = malloc(3 * sizeof(*name));
  string = malloc(9 * sizeof(*string));
  name[0] = '@';
  name[1] = '$';
  name[2] = '\0';
  string[0] = 's';
  string[1] = 'e';
  string[2] = 'r';
  string[3] = 'e';
  string[4] = 'n';
  string[5] = 'i';
  string[6] = 't';
  string[7] = 'y';
  string[8] = '\0';
  printf("string has length %zu and is %s.\n",strlen(string),string);
  printf("name has length %zu and is %s.\n",strlen(name),name);
  for (int i=3; i<limit; i++) {
    name[i] = (char) ('a'+((i-3)%26));
  }
  name[limit] = '\0';
  printf("string has length %zu and is %s.\n",strlen(string),string);
  printf("name has length %zu and is %s.\n",strlen(name),name);
  return 0;

}
