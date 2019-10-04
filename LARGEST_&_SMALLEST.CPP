#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[10], n, i,temp;
	cout << "Enter the size of the array : ";
	cin >> n;
	cout << "Enter the elements of the array : ";
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for(i=0; i<n; i++)
   	 {
        	for(j=i+1; j<n; j++)
        	{
            		if(arr[j]<arr[i])
            		{
                		temp=arr[i];
                		arr[i]=arr[j];
                		arr[j]=temp;
            		}
        	}
    	}
	cout << "Largest element : " << arr[n-1]<<"\n";
	cout << "Smallest element : " << arr[0];
	getch();
}
