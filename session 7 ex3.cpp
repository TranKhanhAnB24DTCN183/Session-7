#include <stdio.h>

int main() {
    int arr[5];

    printf("Nhap 5 phan tu cho mang:\n");
	   
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

    int number = 0;

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("So %d la so chan\n", arr[i]);
            number = 1;
        } 
	}
		if(number==0){
        printf("\nKhong co so chan nao ca!");
    }
    
        	
		
    

    return 0;
}

