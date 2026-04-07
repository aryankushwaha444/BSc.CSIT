// Q.No. 16 :-  Passing Array of Structure to Function..

#include<stdio.h>

struct company
{
	char name[100];
	char ceo[50];
	float revenue;
	float pps;
};

void print_struct (struct company str_arr[]);

int main()
{
	struct company companies[3] = { {"country Books","Nabiya",9999999,1300
	},{"Country Cooks","Bijeta",9999999,700},{"Microprocessor","Shilu",99999,300}};
	
	print_struct (companies);
	
	return 0;
}

void print_struct (struct company str_arr[])
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("Name =%s\n",str_arr[i].name);
		printf("CEO = %s\n",str_arr[i].ceo);
		printf("Revenue = %.2f\n",str_arr[i].revenue);
		printf("Price per Stock = %.2f\n",str_arr[i].pps);
		printf("\n");
	}
}