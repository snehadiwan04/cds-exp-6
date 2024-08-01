// sneha diwan
// 23070123126
// entc b2 
// experiment 6 c 
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

/*  output
enter number of rows: 5
         * 
         *  *  * 
         *  *  *  *  * 
         *  *  *  *  *  *  * 
         *  *  *  *  *  *  *  *  * 

=== Code Execution Successful ===
*/