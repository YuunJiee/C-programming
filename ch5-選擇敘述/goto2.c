#include <stdio.h>
#include <conio.h>

int main() {
  int left = 1, right = 100;
  int mid;
  char echo;

  printf("Choose a number (1-100) !\n");
  printf("And I will guess it.\n");

  loop :
        if (left > right) {
          printf("\n You cheat me !\n");
          goto quit;
        }
        mid = (left + right) / 2;
  again :
        printf("\n\nYour number is %d.\n", mid);
        printf("Metch, Greater, or Smaller ?");
        echo = getche();
        switch (echo) {
          case 'M' :
          case 'm' : printf("\n I just know it ! \n");
                     goto quit;
          case 'G' :
          case 'g' : right = mid - 1;
                     goto loop;
          case 'S' :
          case 's' : left = mid + 1;
                     goto loop;
          default  : goto again;
        }
  quit :
        getche();

  return 0;
}
