/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include <iostream>
#include <cmath>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here
class Calculator {
public:
    int power(int n, int p){
        if (n<0 || p<0)
            throw invalid_argument("n and p should be non-negative");
        return (int) pow(n, p);

    }

};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
