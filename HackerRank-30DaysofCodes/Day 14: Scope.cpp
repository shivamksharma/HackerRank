/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;


	// Add your code here
Difference(vector<int> v) {
        elements = v;
    }

    void computeDifference(){
        maximumDifference = 0;
        for(int i=0;i<elements.size();i++)
           {
               for(int j= i+1;j<elements.size();j++)
                   {
                       if(abs(elements[i]-elements[j])>maximumDifference)
                           {
                               maximumDifference = abs(elements[i]-elements[j]);
                       }
               }
        }
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}


/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
