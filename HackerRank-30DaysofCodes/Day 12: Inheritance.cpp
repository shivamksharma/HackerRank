/* This Code is Written By Shivam Sharma */
/* https://github.com/shivamksharma */

#include<iostream>
#include<vector>
using namespace std;

class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
		}

};

class Student :  public Person{
	private:
		vector<int> testScores;
	public:

        Student(string firstName,string lastName,int id,vector<int> scores): Person(firstName, lastName, id) {

            this->testScores = scores;
        }

        char calculate(){
            double avg = 0.0;
            for(int i=0;i<testScores.size();i++)
                avg=avg + testScores[i];
            avg=avg/testScores.size();
            if(avg<40)
                return 'T';
            else if(avg<55)
                return 'D';
                else if (avg<70)
                        return 'P';
                    else if(avg<80)
                        return 'A';
                        else if(avg<90)
                            return 'E';
                            else
                                return 'O';
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

/* NOTE - Dont Just copy the code because taking a copy of existing code in your project and repurposing it – violates coding best practices like Don’t Repeat Yourself (DRY). It’s one of the most cited examples of technical debt, a lazy way of working, sloppy and short-sighted: an antipattern that adds to the long term cost of keeping a code base alive. Copying and pasting code (“copy-paste”) is a primitive but very common form of software re-use. Unfortunately, this practice is fraught with dangers not least of which is duplicating bugs and security defects throughout the system.*/
