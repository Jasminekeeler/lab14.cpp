#include <iostream>

using namespace std; 

// ***declare the function prototype for "calcFinalScore" here 
double calcFinalScore(double, double, double);

// ***declare the function prototype for "printFinalScore" here 
void printFinalScore(double);

int main() 
{ 
        // local variables
 double test1, test2; // the two tests scores
 double hw; // the homework score
 double finalScore; // the student's final score

        cout << "Enter the score for test #1: ";
        cin >> test1; 
  
        cout << "Enter the score for test #2: ";
        cin >> test2; 
  
        cout << "Enter the score for homework: ";
        cin >> hw;
        
        // ***call calcFinalScore here 
        finalScore = calcFinalScore(test1, test2, hw);
        
        // ***call printFinalScore here 
        printFinalScore(finalScore);
        
        return 0; 
}

double calcFinalScore(double t1, double t2, double hw) {
        return 0.4 * t1 + 0.4 * t2 + 0.2 * hw;
}

 void printFinalScore(double finalscore)
{
    cout<<"The student's final score is: "<<finalscore<< endl;
    if(finalscore>=90)
    {
      cout<<"Their final letter grade is: A";  
    }
   else if (finalscore<90 &&finalscore>=80)
    {
      cout<<"Their final letter grade is: B";  
    }
   else  if (finalscore<80 &&finalscore>=70)
    {
      cout<<"Their final letter grade is: C";  
    }
    else  if (finalscore<70 &&finalscore>=60)
    {
      cout<<"Their final letter grade is: D";  
    }
    else  if (finalscore<=60)
    {
      cout<<"Their final letter grade is: F";  
        }
}
