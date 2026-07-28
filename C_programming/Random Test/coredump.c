#include <stdio.h>

void InsertNum(int * arr, int num)
{
	int n = 5;
	for(int i = 0; i < n; i++)
	{
		if(num < arr[i])
		{
			for(int j = n-1; j >= i; j--)
			{
				arr[j+1]=arr[j];
			}
            arr[i]=num;
			n++; 
		}
		else if(num > arr[n-1])
		{
			 arr[n]=num;
			 break;
		}
	}
}

int main(){
    int arr[10]={9, 19, 67, 78, 80};
    InsertNum(arr, 1);

    for(int i = 0; i < 10; i++) printf(" %d ", arr[i]);
	return 0;
}