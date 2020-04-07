#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void input(int *a,int n);
void output(int *a,int n);
int Min(int *a,int n);

int main(int argc, char *argv[]) {
	int n;
	printf("Vvod n :");
	scanf("%d",&n);
	int *a = (int*)malloc(n * sizeof(int*));
	input(a,n);
	output(a,n);
	Min(a,n);
	return 0;
}
void input(int *a,int n)
{
	int i;
	for(i = 1; i < n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}
void output(int *a,int n)
{
	int i;
	for(i = 1; i < n;i++)
	{
		printf("%4d",a[i]);
		
	}
}
int Min(int *a,int n)
{
	int i,z = 0;
	int min = a[1]; 
	for( i= 1; i < n; i++)
    {
    if (min>a[i])
    {
      min = a[i];
      z = i;
    }

    }
   //  printf("\nNomer min elementa : %d\n", z);
     
    int k = 0;
    for ( i = z +1; i<10; i++)
   {
    k = k+a[i];

   }      
    printf("\nk = %d", k);
return k;
}

