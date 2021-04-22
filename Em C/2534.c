#include <stdio.h>
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  

int main(int argc, char** argv)
{
	int n,q;
	while(scanf("%d %d",&n,&q) != EOF)
	{
		int v[n],i=0;
		while(i < n)
		{
			scanf("%d",&v[i]);
			i+=1;
		}
		insertionSort(v,n);
		i = 0;
		int c;
		while(i < q)
		{
			scanf("%d",&c);
			printf("%d\n",v[n - c]);
			i+=1;
		}
	}
	return 0;
}