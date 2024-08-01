# Experiment-
## Aim -
To study and implement C++ decision making statements loops.
## Theory -

### 1. 
### 2.
### 3. 
### 4. 

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


## Output:-
### 1.


## Conclusion:-
