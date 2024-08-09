# Experiment-
## Aim -
To study and implement C++ decision-making statement loops.
## Apparatus -
Online compiler (programiz)

## Theory -
Loops are used to make the program less repetitive and compact by iterating a part of a program several times . Thus, they are also  called repetitive control structures.

Types of loops:-

a) *For Loop*

b) *While/Do-While Loop*

### A) For Loop -
 A "for" loop is a control flow statement used to repeat a block of code a certain number of times. 
 
 The syntax can vary slightly depending on the programming language.

 ### B) While loop:-
 A "while" loop is another type of control flow statement that repeatedly executes a code block as long as a specified condition is true. 

  You can control the flow inside a "while" loop using a break to exit the loop and continue to skip to the next iteration:

 ### C) Do-while loop:-
It executes the block of code at least once before checking the condition. Python has no built-in "do-while" loop, but you can simulate it.

You can control the flow inside a "while" loop using a break to exit the loop and continue to skip to the next iteration:

### Nested loops:-
Nested loops involve placing one loop inside another. They can be useful for handling multi-dimensional data or performing complex iterations.

Nested loops can be quite powerful but can also lead to performance issues if not used carefully, especially with large datasets or high iteration counts.



## code -
### 1.
```
// sneha diwan
// 23070123126
// entc b2 
// experiment 6 a 
#include <iostream>

using namespace std;

int main() {
        for (int i = 1; i <= 50; ++i) {
        cout << i << " ";
    }
    return 0;
}
```

### 2.
```
// sneha diwan
// 23070123126
// entc b2 
// experiment 6 f
#include <iostream>
int main() {
    int input = 1;
    while (input <= 15) {
        std::cout << "\n" << input;
        input++;
    }
}
```
### 3.
```
//Sneha Diwan
// 23070123126
// Entc b2
// experiment 6
#include <iostream>

using namespace std;
int main() {
    int i,j,k=0,n;
    cout<<"enter number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++) {
        for (j=1;j<=(n-1);j++){
            cout<<"  ";

        }
        while (k!=(2*i-1)) {
            cout<<" * ";
            k++;
        }
        k=0;
        cout<<endl;
   }
   cout<<endl;
}
           
```

### 4.
```
// sneha diwan
// 23070123126
// entc b2 
// experiment 6 d
#include <iostream>

using namespace std;

int main() {
    int number = 1;

    do {
        cout << number << endl;
        number++;
    } while (number <= 10);

    return 0;
}
        
```
### 5.
```

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
```
### 6. 
```
// sneha diwan
// 23070123126
// entc b2 
#include <iostream>

int main() {
    for (int i = 1; i <= 1; i++) {
        for (int j = 1; j <= 10; j++) {
            std::cout << j << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
```
### 7.
```
// sneha diwan
// 23070123126
// entc b2 
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
```

## Explanation:-
Loops allow repetitive execution of code. A for loop iterates over a sequence and is used when the number of iterations is known.

A while loop runs as long as a condition is true, useful for uncertain iteration counts.

Nested loops enable complex iteration, such as iterating over multi-dimensional arrays. Each type offers different control and flexibility for managing code flow.


## Output:-
### 1. 
![Screenshot 2024-08-02 005845](https://github.com/user-attachments/assets/3022a8f9-0d87-413b-92d8-44f118d92499)
### 2.
![Screenshot 2024-08-02 005939](https://github.com/user-attachments/assets/6a54873d-c48b-41c7-8ca3-1464d92b7350)
### 3.
![Screenshot 2024-08-02 010021](https://github.com/user-attachments/assets/c5c53b79-7c48-46de-b206-e8a3fb9564e5)
### 4.
![Screenshot 2024-08-02 010116](https://github.com/user-attachments/assets/964dcc20-01f5-41b5-8d30-b46023ac0bff)
### 5.
![Screenshot 2024-08-02 010204](https://github.com/user-attachments/assets/86ab1610-9472-47ce-8f45-a1ef7440f72c)
### 6.
![Screenshot 2024-08-02 010236](https://github.com/user-attachments/assets/0d925c6c-d203-4454-8cc1-1d786410cd36)
### 7.
![Screenshot 2024-08-02 010318](https://github.com/user-attachments/assets/087e368b-cff4-42ba-a763-33d45a0f6997)



## Conclusion:-
Decision-making statements like if, Elif, and else control code execution based on conditions, while loops (for and while) repeat code blocks. Combining these allows dynamic, responsive programming. For example, if statements within loops enable actions based on conditions during each iteration, efficiently handling varying data and scenarios.
