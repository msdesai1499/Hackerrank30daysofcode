#include <iostream>
#include <vector>
using namespace std;
class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			cout<<"hii";
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
        Student(string fname,string lname,int id,vector<int> v):Person(fname,lname,id)
        {
            cout<"hrllo";
            for(int i=0;i<v.size();i++)
            {
            	testScores[i]=v[i];
			}
            
        }
        char calculate()
        {
        	char g;
        	int sum=0;
        	for(int i=0;i<testScores.size();i++)
        	{
        		sum=sum+testScores[i];
			}
			int ans=sum/testScores.size();
			if(sum<=100 && sum>=90)
			{
				g='O';
			}
			else if(sum<90 && sum>=80)
			{
				g='E';
			}
			else if(sum<80 && sum>=70)
			{
				g='A';
			}
			else if(sum<70 && sum>=55)
			{
				g='P';
			}
			else if(sum<55 && sum>=40)
			{
				g='D';
			}
			else if(sum<40)
			{
				g='T';
			}
		return g;
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
