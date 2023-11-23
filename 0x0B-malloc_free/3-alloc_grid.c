#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int **dim;
int i,j;

 if (dim == NULL) 
{
    return NULL;
}
dim = (int *)malloc((width + height) * sizeof(int))

for(i =0; i < width; i++)
{
for(j =0; j < height; j++)
{
	dim[i][j] =0;
}
}
return dim;
}
