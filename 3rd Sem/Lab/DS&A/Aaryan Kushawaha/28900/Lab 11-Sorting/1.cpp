//   comparision Sorting Alogorithms

#include<stdio.h>
#include<stdlib.h>
int array[1000];
int n;
void getArr()
{
	int i;
	
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("A[%d] : ",i);
		scanf("%d",&array[i]);
	}
	
}

void display(int n)
{
   	printf("Sort Array A[%d] :- ",n);
	for(int i=0 ; i<n;i++)
	{
		printf("%d\t",array[i]);
	}
}

void bubble(int arr[] , int num)
{
	int i , j , temp;
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void selection(int arr[], int num)
{
    int i, j, minIndex, temp;
    
    for (i = 0; i < num - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < num; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


void insertion(int arr[] , int num)
{
	int i , j , temp;
	for(i=1;i<num;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
		{
			arr[j+1] = arr[j];
          
		}
		arr[j+1] = temp;
	}
}

void shell(int arr[] , int num)
{
	int i , j , temp,gap;
	for(gap=num/2;gap>0;gap/=2)
	{
		for(i=gap;i<num;i++)
		{
			temp  = arr[i];
			for(j=i; j>=gap && arr[j-gap]>temp ; j-=gap)
			{
				arr[j] = arr[j-gap];
			}
			
			arr[j] = temp;
		}
	}
}


int main()
{
	int choice;
	
	    do
    {
        printf("\n\nComparision Sorting Alogorithm:-");
        printf("\n1.Bubble Sort\n2.Selection Sort\n3.Inserction Sort\n4.Shell Sort\n5.Exit");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        	getArr();
        	bubble(array,n);
        	display(n);
            break;
        case 2:
        	getArr();
        	selection(array,n);
        	display(n);
            break;
        case 3:
            getArr();
        	insertion(array,n);
        	display(n);
            break;
            
            
        case 4:
		    getArr();
        	shell(array,n);
        	display(n);
        	break;
		      
        case 5:
            printf("\t\tHave a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    } while (1);
    return 0;
}
