
#include <stdio.h>
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertElement(int arr[], int *size, int position, int element) {
    if (*size >= position) {
        for (int i = *size; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = element;
        (*size)++;
        printf("Element inserted successfully.\n");
    } else {
        printf("Invalid position for insertion.\n");
    }
}
void deleteElement(int arr[], int *size, int position) {
    if (*size > 0 && position >= 0 && position < *size) {
        for (int i = position; i < (*size - 1); i++) {
            arr[i] = arr[i + 1];
        }
        (*size)--;
        printf("Element deleted successfully.\n");
    } else {
        printf("Invalid position for deletion.\n");
    }
}
int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100]; 
    int size = 0; 
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    displayArray(arr, size);
    int newPosition, newValue;
    printf("Enter the position and value to insert: ");
    scanf("%d %d", &newPosition, &newValue);
    insertElement(arr, &size, newPosition, newValue);
    displayArray(arr, size);
    int deletePosition;
    printf("Enter the position to delete: ");
    scanf("%d", &deletePosition);
    deleteElement(arr, &size, deletePosition);
    displayArray(arr, size);
    int searchValue;
    printf("Enter the value to search: ");
    scanf("%d", &searchValue);
    int searchResult = searchElement(arr, size, searchValue);
    if (searchResult != -1) {
        printf("Element %d found at position %d.\n", searchValue, searchResult);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}

 



