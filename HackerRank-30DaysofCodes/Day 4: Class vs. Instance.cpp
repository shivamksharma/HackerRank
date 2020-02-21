/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include<iostream>
using namespace std;

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };


    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if(initialAge>0)
            age = initialAge;
        else{
            cout <<"Age is not valid, setting age to 0.\n";
            age = 0;
        }
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console
        string message;
        if(age<13)
            message = "You are young.";
        else if(age>=13 && age<18)
                message = "You are a teenager.";
            else
                message = "You are old.";
        cout << message << endl;

    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        age = age + 1;

    }
    int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses();
        }
        p.amIOld();

		cout << '\n';
    }

    return 0;
}


/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
