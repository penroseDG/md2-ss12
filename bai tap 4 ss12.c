#include <stdio.h>
int is_symmetric(char arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end) {
        if(arr[start] != arr[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main(){
    int size1, size2;
    printf("Nhap kich thuoc mang arrayOne: ");
    scanf("%d", &size1);
    char arrayOne[size1];
    printf("Nhap cac phan tu cua mang arrayOne: ");
    for(int i = 0; i < size1; i++){
        scanf(" %c", &arrayOne[i]);
    }
    if(is_symmetric(arrayOne, size1)){
        printf("arrayOne la mang doi xung.\n");
    }else{
        printf("arrayOne khong la mang doi xung.\n");
    }

    printf("Nhap kich thuoc mang arrayTwo: ");
    scanf("%d", &size2);
    char arrayTwo[size2];
    printf("Nhap cac phan tu cua mang arrayTwo: ");
    for(int i = 0; i < size2; i++){
        scanf(" %c", &arrayTwo[i]);
    }
    if(is_symmetric(arrayTwo, size2)){
        printf("arrayTwo la mang doi xung.\n");
    }else{
        printf("arrayTwo khong la mang doi xung.\n");
    }
    return 0;
}
