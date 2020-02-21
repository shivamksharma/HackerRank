/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int numberOfSwaps = 0;
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp=a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                    numberOfSwaps++;
                }
            }
            if (numberOfSwaps == 0) {
                break;
            }
        }
        cout << "Array is sorted in "<< numberOfSwaps << " swaps." <<endl;
        cout <<"First Element: " << a[0] <<endl; ;
        cout <<"Last Element: " << a[n-1] << endl;
    return 0;
}


/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
