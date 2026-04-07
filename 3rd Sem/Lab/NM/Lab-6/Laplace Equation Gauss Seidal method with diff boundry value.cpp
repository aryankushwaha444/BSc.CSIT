#include <stdio.h>
#include <math.h>

int main() {
int SIZE_X, SIZE_Y;
int m = 1;
printf("Enter number of steps in x direction:\n");
scanf("%d",&SIZE_X);
printf("Enter number of steps in y direction:\n");
scanf("%d",&SIZE_Y);
float grid[SIZE_X][SIZE_Y];
float temp_grid[SIZE_X][SIZE_Y];

            for (int i = 0; i < SIZE_X; i++)   //assigning boundary values begins
            {
              printf("\tEnter value on bottom side U%d,0: ",i);
			  scanf("%f",&grid[i][0]);
			    }
		    for (int i = 0; i < SIZE_X; i++)   //assigning boundary values begins
            {
              printf("\tEnter value on top side U%d,%d: ",i,SIZE_Y - 1);
			  scanf("%f",&grid[i][SIZE_Y - 1]);
		    }
		    for(int j = 1; j < SIZE_Y - 1; j++)   //assigning boundary values begins
            {
              printf("\tEnter value on left side U0,%d: ",j);
			  scanf("%f",&grid[0][j]);
			    }
		    for(int j = 1; j < SIZE_Y - 1; j++)   //assigning boundary values begins
            {
              printf("\tEnter value on right side U%d,%d: ",SIZE_X - 1,j);
			  scanf("%f",&grid[SIZE_X - 1][j]);
		    }
	printf("\nInitial Grid Values:\n");
    for (int j = SIZE_Y - 1; j >= 0; j--) {
        for (int i = 0; i < SIZE_X; i++) {
            printf("\t%.2f ",grid[i][j]);
        }
        printf("\n");
    }	    
    
    float max_diff = 0.0;
    do {
               // Make a copy of the current grid
        for (int i = 0; i < SIZE_X; i++) {
            for (int j = 0; j < SIZE_Y; j++) {
                temp_grid[i][j] = grid[i][j];
            }
        }

        // Update grid values based on neighboring values
        for (int i = 1; i < SIZE_X - 1; i++) {
            for (int j = 1; j < SIZE_Y - 1; j++) {
                grid[i][j] = 0.25 * (grid[i + 1][j] + grid[i - 1][j] + grid[i][j + 1] + grid[i][j - 1]);
            }
        }

        // Calculate the maximum difference for convergence check
        max_diff = 0.0;
        for (int i = 0; i < SIZE_X; i++) {
            for (int j = 0; j < SIZE_Y; j++) {
                float diff = fabs(grid[i][j] - temp_grid[i][j]);
                if (diff > max_diff) {
                    max_diff = diff;
                }
            }
        }

        printf("\nGrid Values Iteration %d:\n", m);
        for (int j = SIZE_Y - 1; j >= 0; j--) {
            for (int i = 0; i < SIZE_X; i++) {
                printf("\t%.2f ", grid[i][j]);
            }
            printf("\n");
        }

        m++;
    } while (max_diff > 1);

    printf("\nFinal Grid Values:\n");
    for (int j = SIZE_Y - 1; j >= 0; j--) {
        for (int i = 0; i < SIZE_X; i++) {
            printf("\t%.2f ",temp_grid[i][j]);
        }
        printf("\n");
    }
    printf("\n\tBy Aaryan Kushawaha");
    return 0;
}

