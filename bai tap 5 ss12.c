#include<stdio.h>
int main(){
    int row,col;
    printf("Nhap so dong va so cot cua mang 2 chieu:");
    scanf("%d%d", &row, &col);
    int numbers[row][col];
    int flag =0;
    int choice;
    do{
		printf("\n                   Menu");
	printf("\n1. in gia tri cac phan tu cua mang");
	printf("\n2. in gia tri cac phan tu cua mang theo ma tran");
	printf("\n3. in cac gia tri o goc theo ma tran");
	printf("\n4. in cac phan tu nam tren duong bien theo ma tran");
	printf("\n5. in cac phan tu nam tren duong cheo chinh va duong cheo phu");
	printf("\n6. in cac phan tu la so nguyen to theo ma tran");
	printf("\n7. thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for (int i = 0; i < row; i++){
        		for (int j = 0; j < col; j++){
           			printf("numbers[%d][%d]=",i,j);
            		scanf("%d",&numbers[i][j]);
        		}
   			}
   			break;
		case 2:
			for(int i = 0; i < row ; i++){
    			for (int j=0; j < col; j++){
      				printf("%d\t" , numbers[i][j]);
    				}
    				printf("\n");
  				}
  			break;
  		case 3:
  			printf("Cac phan tu o goc theo ma tran:\n");
    		printf("%d\t", numbers[0][0]);
    		for(int j = 1; j < col-1; j++){
        		printf("0\t");
    			}
    		printf("%d\n", numbers[0][col-1]);
   	 		for(int i = 1; i < row - 1; i++){
        		for(int j = 0; j < col; j++){
            		printf("0\t");
        		}
        	printf("\n");
    			}
			if(row > 1){
        		printf("%d\t", numbers[row - 1][0]);
        	for(int j = 1; j < col - 1; j++){
            	printf("0\t");
        		}
        	printf("%d\n", numbers[row - 1][col - 1]);
    			}
    		break;
		case 4:
			 for(int i = 0; i < row; ++i){
                    for (int j = 0; j < col; ++j){
                        if(i == 0 || j == 0 || i == row - 1 || j == col - 1){
                            printf("%d\t", numbers[i][j]);
                        }else{
                        	printf("0\t");
                        }
                    }
                    printf("\n");
                }
            break;
        case 5:
        	for(int i = 0; i < row; i++){
        		for(int j = 0; j < col; j++){
            		if(i == j || j == col - 1 - i){
                		printf("%d\t", numbers[i][j]);
            		}else{
                		printf("0\t");
           			 }
        		}
        		printf("\n");
    		}
    		break;
        case 6:
        	for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    flag = 0;
                    for (int k = 2; k <= numbers[i][j] / 2; k++) {
                        if (numbers[i][j] % k == 0) {
                        	flag = 1;
                            break;
                            }
                        }
                        if (flag == 0 && numbers[i][j] > 1) {
                            printf("%d\t", numbers[i][j]);
            			}else{
                			printf("0\t");
           			 		}
                        }
                        printf("\n");
                    }
                break;
        case 7:
        	printf("thoat");
        	break;
        	default:
            printf("Lua chon khong hop le\n");
		}
	}while(choice != 7);
	return 0;
}
