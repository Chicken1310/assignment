/* MY name : Mohamed saif aldeen
   Class : Second Year
   Department : Computer Engineering
*/

// import the input output stream liberary
#include<iostream>
// import the string class because i will work with strings data typs
#include <string>
// import file class to work with files
#include<fstream>

using namespace std ;
// function to calculate the grades of students
char Grade(int x) {
	char grade ;
	if (x <=100 && x>=90)
		grade = 'A' ;
	else if (x <90 && x>=80)
		grade = 'B';
	else if (x <80 && x>=70)
		grade = 'C';
	else if (x <70 && x>=60)
		grade = 'D';
	else if (x <60 && x>=50)
		grade = 'F';
	return grade ;
}

// function for output and to calculate the grades to file
void Output(int x, string g) {
	int avg = x/8 ;
	//cout<<"student "<<g<<" ,grade is: "<<Grade(avg)<<endl ;
	// file handling
	//create file object
	ofstream myfile;
	// open file
	myfile.open ("example.txt", ios::app);
	// assign the result to a file
	myfile <<endl<<"student "<<g<<" ,grade is: "<<Grade(avg)<<endl;
	// close after assigning
	myfile.close();
	// warning : you need to delete the file content before you run it again
}
//function to get the input name and marks
void Input (string arr[],int x ,int i, int j) {
	//for loop to iterate throw the array of students
	for (int i = 0; i<10; ++i) {
		//input for name
		cout<<"Enter the student name: " ;
		// assign the input to the i index of the array
		cin>>arr[i] ;
		// get the marks
		cout<<endl<<"ENter the marks for the student "<<arr[i]<<": ";
		// for loop to get the marks for 8 subjects
		for (int j = 0; j<8; ++j) {
			// variable to get the input Temporarily
			int temp =  0;
			cin>>temp ;
			// assign all the values of marks to x
			x +=temp ;

		}
		Output(x,arr[i]) ;
		x = 0 ;


	}



}
int main (){

	// initilize varibale for the program
	int x=0  ;
	int i=0 ;
	int j=0 ;
	// the students array
	string students[10] ;
	// function call
	Input(students,x,i,j) ;



	// return 0 if it's run succssefully
	return 0 ;
}
