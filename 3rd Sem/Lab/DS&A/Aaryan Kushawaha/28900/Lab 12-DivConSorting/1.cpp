//   Divide & Conquer Sorting

#include<stdio.h>
#include<stdlib.h>
int array[1000];
int n,temp;
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

// Merge Sort implementation
void merge(int arr[], int low, int mid, int high)
 {
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left[n1], right[n2];

    for (i = 0; i < n1; i++)
        left[i] = arr[low + i];

    for (j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = low;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

// Quick Sort implementation
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
	int j;
    for (j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Heap Sort implementation
void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
	int i;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}


int main()
{
	int choice;
	
	    do
    {
        printf("\n\nComparision Sorting Alogorithm:-");
        printf("\n1.Merge Sort\n2.Quick Sort\n3.Heap Sort\n4.Exit");
        printf("\n\nEnter Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        	getArr();
        	mergeSort(array, 0, n - 1);
        	display(n);
            break;
        case 2:
        	getArr();
        	quickSort(array, 0, n - 1);
        	display(n);
            break;
        case 3:
            getArr();
        	heapSort(array, n);
        	display(n);
            break;
		      
        case 4:
            printf("\t\tHave a GOOD DAY ........");
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    } while (1);
    return 0;
}
