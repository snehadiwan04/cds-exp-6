#include <iostream>

int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= i) {
            std::cout << j << " ";
            j++;
        }
        std::cout << std::endl;
        i++;
    }
    return 0;
}
/*
Output 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 


=== Code Execution Successful ===
*/
