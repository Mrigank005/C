int main() 
{
    int n, j, total=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for(j = 0; j < n; j++) 
    {
        if((numbers[j]%2) != 0) 
        {
            total += numbers[j];
        }   
    }
    printf("\nSum of all odd values: %d", total);
    printf("\n");
    
    return 0;
}
