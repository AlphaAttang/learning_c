#include <unistd.h>
#include <string.h>

int main() 
{
   char string[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";
   write(2, string, strnlen(string,sizeof(string)));
   return (1);
}
