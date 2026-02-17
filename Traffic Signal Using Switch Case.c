#include <stdio.h>
void main()
{
    char x;
  scanf(" %c", &x);
  switch(x)
  {
      case 'R':
      {
          printf("STOP");
      }
      break;
      case 'Y':
      {
          printf("READY");
      }
      break;
      case 'G':
      {
          printf("GO");
      }
      break;
      default:
      {
          printf("invalid signal");
      }
      break;
  }
}
