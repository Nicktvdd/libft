#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c);

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);
   

   printf("String after |%c| is - |%s|\n", ch, ret);

   const char str1[] = "http://www.tutorialspoint.com";
   const char ch1 = '.';
   char *ret1;

   ret1 = ft_strchr(str1, ch1);

   printf("\n FT \nString after |%c| is - |%s|\n", ch1, ret1);

   return(0);
}
