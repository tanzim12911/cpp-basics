#include <iostream>

int sumOfElements(int A[]){
    int sum = 0;
    int size = sizeof(A) / sizeof(A[0]);
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main() {

    int A[] = {1, 2, 3, 4, 5};
    int total = sumOfElements(A);

    std::cout << "Sum of elements = " << total;
}