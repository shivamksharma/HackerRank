/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook:public Book {

    int price;
    public:
        MyBook(string title, string author, int p):Book(title, author) {
            price = p;
        }

        void display() {
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price<<endl;
        }
};
int main()
{
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}


/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
