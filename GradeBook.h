//Samuel Armenta
//Assignment 1
/*The program allows a user to enter a course and instructor name into a grade book.
The program outputs who the instructor using the grade book is, and for which course.*/
// GradeBook.h
// GradeBook class definition. This file presents GradeBook's public 
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ standard string class

// GradeBook class definition
class GradeBook
{
public:
	explicit GradeBook(std::string, std::string); // constructor initialize courseName / instructorName
	void setCourseName(std::string); // sets the courseName
	std::string getCourseName() const; // gets the courseName
	void displayMessage() const; // displays a welcome message
	void setInstructorName(std::string); //set the instructorName
	std::string getInstructorName() const; // get instructorName

private:
	std::string courseName; // course name for this GradeBook
	std::string instructorName; // instructor name for GradeBook

}; // end class GradeBook  