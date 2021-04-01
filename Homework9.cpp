#include<iostream>
#include<string>
using namespace std;
void ListStudent(string name[50],int score[50],int num);
char Calgrade(int score);
int main() {
	int num, score[50];
	string name[50];
	cout << " Input number of student : ";
	cin >> num;
	for (int i  = 0; i < num ; i++) 
	{
		cout << " Input Name : ";
		cin >> name[i];
		cout << " Input score : ";
		cin >> score[i];
		cout << " " << endl;


	}
	ListStudent(name, score, num);
	
	return 0 ;
}
void ListStudent(string name[50], int score[50], int num) {
	for (int i = 0; i < num; i++)
	{
		cout << " Student Name : " << name[i] << " Score " << i+1 << " = " << score[i] << " Your grade is : " << Calgrade (score[i]) <<  endl;
	}
}
char Calgrade (int score) {

	if (score >= 80 && score == 100)
	{
		return  'A' ;
	}
	else if (score >= 70 )
	{
		return 'B';
	}
	else if (score >= 60  )
	{
		return 'C';
	}
	else if (score >= 50 )
	{
		return 'D';
	}
	else {
		return 'F';
	}
	

}