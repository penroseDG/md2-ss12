#include <stdio.h>
int is_prime(int num){
    if(num < 2){
        return 0; 
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return 0; 
        }
    }
    return 1;
}
int count_primes_in_array(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(is_prime(arr[i])){
            count++;
        }
    }
    return count;
}
int main(){
    int size1, size2;
    printf("Nhap kich thuoc mang thu nhat: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Nhap cac phan tu cua mang thu nhat: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Nhap kich thuoc mang thu hai: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Nhap cac phan tu cua mang thu hai: ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Cac so nguyen to trong mang thu nhat: ");
    for(int i = 0; i < size1; i++){
        if(is_prime(arr1[i])){
            printf("%d ", arr1[i]);
        }
    }
    printf("\n");
    printf("Cac so nguyen to trong mang thu hai: ");
    for(int i = 0; i < size2; i++){
        if(is_prime(arr2[i])){
            printf("%d ", arr2[i]);
        }
    }
    printf("\n");
    int count_primes_arr1 = count_primes_in_array(arr1, size1);
    int count_primes_arr2 = count_primes_in_array(arr2, size2);
    if(count_primes_arr1 > count_primes_arr2){
        printf("Mang thu nhat co nhieu so nguyen to hon.\n");
    }else if(count_primes_arr1 < count_primes_arr2){
        printf("Mang thu hai co nhieu so nguyen to hon.\n");
    }else{
        printf("Hai mang co so luong so nguyen to bang nhau.\n");
    }
    return 0;
}
