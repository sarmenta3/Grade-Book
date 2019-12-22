//Samuel Armenta
//Assignment 1
/*The program allows a user to enter a course and instructor name into a grade book.
The program outputs who the instructor using the grade book is, and for which course.*/
// GradeBook.cpp
// GradeBook member-function definitions. This file contains
// implementations of the member functions prototyped in GradeBook.h.
#include <iostream> 
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook(string course, string instructR)
: courseName(course), instructorName(instructR) // member initializer to initialize courseName/instructorName
{
	// empty body
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName(string course)
{
	courseName = course; // store the course name in the object
} // end function setCourseName

// function to get the course name
string GradeBook::getCourseName() const
{
	return courseName; // return object's courseName
} // end function getCourseName

//Function to set instructor name
void GradeBook::setInstructorName(string instructR)
{
	instructorName = instructR; // store instructors name in object
}// end function setInstructorName

// Retreve the Instructors name
string GradeBook::getInstructorName() const
{
	return instructorName; // return object instructorsName
}//end function getInstructorsName

// display a welcome message to the GradeBook user
void GradeBook::displayMessage() const
{
	// call getCourseName to get the courseName and callgetInstructorName to get instructorName
	cout << "  Welcome to the grade book for\n" << "   " << getCourseName() << "!" << "\n  This course is presented by: "
		<< getInstructorName() << endl << endl;

} // end function displayMessage
