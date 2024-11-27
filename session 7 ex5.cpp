#include <stdio.h>

int main() {
    int arr[5]; 
     printf("Nhap phan tu thu nhat: " );
	        scanf("%d", &arr[0]); 
	        fflush(stdin);
	        printf("Nhap phan tu thu hai: " );
	        scanf("%d", &arr[1]); 
	        fflush(stdin);
	        printf("Nhap phan tu thu ba: " );
	        scanf("%d", &arr[2]); 
	        fflush(stdin);
	        printf("Nhap phan tu thu tu: " );
	        scanf("%d", &arr[3]); 
	        fflush(stdin);
	        printf("Nhap phan tu thu nam: " );
	        scanf("%d", &arr[4]); 
	        fflush(stdin);
    
    int max = arr[0];  
    int min = arr[0];  

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i];  
        }
    }


    printf("Phan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}

