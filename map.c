#include <stdio.h>

int square(int x){
    return x * x;
}

void map(int (*f )(int), int arr[]){
    for (int i = 0; i < 4; i++)
    {
        arr[i] = f(arr[i]);
    }
}

int main(){

    int arr[] = {2, 1, 0, 6};
    map(square, arr);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

