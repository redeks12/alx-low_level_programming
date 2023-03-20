#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void print_dog(struct dog *d)
{
        if (d == NULL)
                return;

        if (d->name != NULL)
                printf("Name: %s\n", d->name);
        else
                printf("Name: (nil)\n");
        if (d->age)
                printf("Age: %s\n", d->age);
        else
                printf("Age: (nil)\n");
        if (d->owner != NULL)
                printf("Owner: %s\n", d->owner);
        else
                printf("Owner: (nil)\n");
 
}