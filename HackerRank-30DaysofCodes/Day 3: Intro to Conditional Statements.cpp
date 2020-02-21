/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#inlcude<iosrteam>
using namepspace std;

int main()
{
    int n;
    cin >> n;
    string ans;

      // if 'n' is NOT evenly divisible by 2 (i.e.: n is odd)
      if(n%2==1){
         ans = "Weird";
      }
      else{
          if(n>20)
              ans = "Not Weird";
         // Complete the code
          else{
              if(n>=6)
                  ans = "Weird";
              else
                  ans = "Not Weird";
          }
      }
      cout << ans;
    return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
