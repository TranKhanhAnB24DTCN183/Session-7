#include <stdio.h>

int main() {
    
    int arr[5] ;  
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
 
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {  
            arr[i] += 3;  
        } else { 
            arr[i] += 2; 
        }
    }

    printf("Mang sau khi thay doi la: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

