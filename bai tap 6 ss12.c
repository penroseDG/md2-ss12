#include <stdio.h>
#define SIZE 100
void displayMenu(){
    printf("\n                         Menu");
    printf("\n1. Nhap so phan tu can nhap va gia tri cua mang");
    printf("\n2. In gia tri cac phan tu dang quan ly");
    printf("\n3. Them 1 phan tu vao vi tri chi dinh");
    printf("\n4. Sua 1 phan tu tai vi tri chi dinh");
    printf("\n5. Xoa 1 phan tu tai vi tri chi dinh");
    printf("\n6. Sap xep cac phan tu");
    printf("\n7. Giam dan");
    printf("\n8. Tang dan");
    printf("\n9. Tim kiem phan tu (neu mang chua sap xep, su dung tim kiem tuyen tinh, nguoc lai su dung tim kiem nhi phan)");
    printf("\n10. Thoat");
    printf("\nNhap lua chon can nhap: ");
}

void inputElements(int numbers[], int size){
    for(int i = 0; i < size; i++){
        printf("Phan tu thu [%d]: ", i);
        scanf("%d", &numbers[i]);
    }
}

void printElements(int numbers[], int size){
    for(int i = 0; i < size; i++){
        printf("Phan tu thu [%d] = %d\n", i, numbers[i]);
    }
}

void insertElement(int numbers[], int *size){
    int k, x;
    printf("Nhap phan tu can them: ");
    scanf("%d", &k);
    printf("Nhap vi tri can chen: ");
    scanf("%d", &x);

    if(x < 0 || x > *size){
        printf("Vi tri chen khong hop le.\n");
        return;
    }

    for(int i = *size; i > x; i--){
        numbers[i] = numbers[i - 1];
    }

    numbers[x] = k;
    (*size)++;
}

void editElement(int numbers[], int size){
    int x, k;
    printf("Nhap vi tri can sua: ");
    scanf("%d", &x);

    if(x < 0 || x >= size){
        printf("Vi tri sua khong hop le.\n");
        return;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &k);
    numbers[x] = k;
    printf("Da sua phan tu tai vi tri %d.\n", x);
}

void deleteElement(int numbers[], int *size){
    int x;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &x);

    if(x < 0 || x >= *size){
        printf("Vi tri xoa khong hop le.\n");
        return;
    }

    for (int i = x; i < *size - 1; i++){
        numbers[i] = numbers[i + 1];
    }

    (*size)--;
    printf("Da xoa phan tu tai vi tri %d.\n", x);
}

void sortElements(int numbers[], int size, int ascending){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if((ascending && numbers[i] > numbers[j]) || (!ascending && numbers[i] < numbers[j])){
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}

int linearSearch(int numbers[], int size, int find){
    for(int i = 0; i < size; i++){
        if(numbers[i] == find){
            return i;
        }
    }
    return -1;
}

int binarySearch(int numbers[], int size, int find){
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if (numbers[mid] == find){
            return mid;
        }
        if(numbers[mid] < find){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int choice;
    int size = 0;
    int numbers[SIZE];
    int find, result;

    do{
        displayMenu();
        scanf("%d", &choice);
        switch (choice){
            case 1:
                inputElements(numbers, SIZE);
                break;
            case 2:
                printElements(numbers, size);
                break;
            case 3:
                insertElement(numbers, &size);
                break;
            case 4:
                editElement(numbers, size);
                break;
            case 5:
                deleteElement(numbers, &size);
                break;
            case 6:
                printf("\n    Menu Sap Xep   ");
                printf("\n7. Giam dan");
                printf("\n8. Tang dan");
                printf("\nNhap lua chon: ");
                break;
            case 7:
                sortElements(numbers, size, 0);
                printElements(numbers, size);
                break;
            case 8:
                sortElements(numbers, size, 1);
                printElements(numbers, size);
                break;
            case 9:
                printf("Nhap phan tu muon tim kiem: ");
                scanf("%d", &find);
                result = (size > 0) ? binarySearch(numbers, size, find) : -1;

                if(result != -1){
                    printf("Tim thay tai vi tri %d.\n", result);
                }else{
                    printf("Khong tim thay.\n");
                }
                break;
            case 10:
                printf("Thoat\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
        }
    } while(choice != 10);
    return 0;
}
