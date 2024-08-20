#include <stdio.h>
void display(int result) {
    printf("The result is: %d\n", result);
}
int main() {
    int a = 5, b = 3;  
    int result = (a += 2, b *= 2, a + b);  
    display(result);
    return 0;
}