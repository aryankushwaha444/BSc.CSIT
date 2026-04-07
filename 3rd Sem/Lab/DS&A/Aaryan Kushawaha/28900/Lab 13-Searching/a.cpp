#include <stdio.h>
#include <stdlib.h>

int array[5]={15,30,35,41,48};
int key,n=sizeof(array)/4;

void getKey()
{
    printf("Enter Your Key : ");
    scanf("%d", &key);
}

void DisArr()
{
    int i;

    printf("Array in Assending Order\n");
    for (i = 0; i < n; i++)
    {
    	if(i!=n-1)
    	{
    		printf("A[%d]:- %d , ",i,array[i]);    	
		}
		else
		{
		 printf(" A[%d]:- %d",i,array[i]);	
		}
    }
}

void linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("Found Key in index No. %d\n", i);
            return;
        }
    }
    printf("Key not found in the array.\n");
}

void binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2; // (low + high) / 2
        if (arr[mid] == key)
        {
            printf("Found Key in index No. %d\n", mid);
            return;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Key not found in the array.\n");
}

int main()
{
    int choice;
    DisArr();

    do
    {
        printf("\nSearching:-");
        printf("\n1.Linear Search\n2.Binary Search\n3.Exit");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            getKey();
            linearSearch(array, n, key);
            break;
        case 2:
            getKey();
            binarySearch(array, 0, n - 1, key);
            break;

        case 3:
            printf("\t\tHave a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    } while (1);
    return 0;
}
