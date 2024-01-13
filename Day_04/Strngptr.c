#include <stdio.h>

int main()
{
    char name[] = "HelloWorld";

    puts(name);

    // declare pointer

    // char *ptr=name;
    // or we can simply write
    char *ptr = &name[0];

    for (int i = 0; name[i] != '\0'; i++)
    {
        printf("%c\n", name[i]);
    }
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        printf("%c\n", ptr[i]);
    }

    puts(name);
    puts(ptr);

    // name++;
    // ptr++;

    puts(name);
    puts(ptr);
    // ptr--;

    puts(ptr);

    // while (*ptr)
    // {
    //     printf("%c\n", *ptr++);
    // // }
    //  printf("%c\n", *ptr++);
    //   printf("%c\n", *ptr);
    //    printf("%c\n", *ptr);

       ptr=name;
       printf("%c\n",*ptr);
        printf("%c\n",*ptr++);
         printf("%c\n",(*ptr)++);
         
    puts(name);
    puts(ptr);
}