#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    
    ifstream grades;
    char space;
    
    string FirstName;
    string LastName;
    unsigned short quiz1, quiz2, quiz3, quiz4, quiz5, QuizAverage, midterm, final, TotalAverage;
    
    grades.open("grades.txt"); //tell program to get info from "grades.txt"
    
    grades >> FirstName; //get First Name
    grades >> LastName; //get Last Name
    
    grades >> quiz1; //Get quiz1
    grades >> quiz2; //Get quiz2
    grades >> quiz3; //Get quiz3
    grades >> quiz4; //Get quiz4
    grades >> quiz5; //Get quiz5
    grades >> midterm; //Get midterm
    grades >> final; //Get final
       
   
    cout << LastName << ", "; //display Last Name
    cout << FirstName; //display First Name
    
    QuizAverage = (quiz1 + quiz2 + quiz3 + quiz4 + quiz5) / 5; // Calculate the quiz average
    
    TotalAverage = (midterm + final + QuizAverage) / 3; //Calculate the total average
    
    cout << "'s Average: " << TotalAverage << endl; //Display average
    
    
    
    
    
    
    
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
