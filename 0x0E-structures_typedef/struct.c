#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int main(void)
{
        struct dog my_dog;


        init_dog(&my_dog, "Poppy", 3.5, "Bob");
        // printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        printf("%s\n",my_dog.name);
        printf("%d\n",my_dog.age);
        printf("%s\n",my_dog.owner);
        return (0);
}