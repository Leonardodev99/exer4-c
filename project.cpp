#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void moveZerosToFinal(int num[], int n){
	int iNZ = 0;
	int i;
	
	for (i = 0; i < n; i++) {
        if (num[i] != 0) {
            num[iNZ] = num[i];
            iNZ++;
        }
    }
     for (i = iNZ; i <n ; i++) {
        num[i] = 0;
    }
    
}

int main(int argc, char *argv[]) {

	int n=10;
	int num[n];
    int i;
    
    for (i = 0; i < n; i++) {
        printf("elemento - %d: ", i);
        scanf("%d", &num[i]);
    }
    
    printf("O array fornecido é: ");
     for (i = 0; i < n; i++) {
        printf(" %d ", num[i]);
    
    }
	printf("\n");
	moveZerosToFinal(num,n);
    
    printf("O array fornecido é: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
	system("pause");
	
	return 0;
}

