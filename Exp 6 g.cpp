#include <iostream>

int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            std::cout << j << " ";
            j++;
        } while (j <= 10);
        i++;
    } while (i <= 1);
    std::cout << std::endl;
    return 0;
}
/*
Output 
1 2 3 4 5 6 7 8 9 10

=== Code Execution Successful ===
*/
