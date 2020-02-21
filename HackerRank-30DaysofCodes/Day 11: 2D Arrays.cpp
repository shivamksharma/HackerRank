/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }

    int i,j,max;
    for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
                {
                    int sum=0;
                    sum= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                    if(i==0 && j==0)
                        max = sum;
                    if(sum>max)
                        {
                            max =sum;

                    }
            }
        }
        cout << max;
    return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
