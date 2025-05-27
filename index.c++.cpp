

#include <iostream>
using namespace std;
int main ()
{
	int choise;
	int y;
	do{
 cout<<"**************************\n"
     <<"***Welcome to our menu ***\n"
     <<"***1. using loop       ***\n"
     <<"***2. using 2D array   ***\n"
	 <<"***3. using functions  ***\n"
     <<"**************************\n"
	 <<"please choose one of the above-listed methods\n";

cin>>choise;
if(choise==1){
        cout<<"***Welcome to the looping c++ program***"<<endl;

    int oddNumber = 1; // Start with the first odd number
    int maxOdd = 59;   // Maximum odd number to consider
    int rows = 1;      // Counter for rows
    
    while (oddNumber <= maxOdd) {
        // Print spaces to align the pyramid
        for (int space = 1; space <= maxOdd / 2 - rows + 1; ++space) {
            cout << "  ";
        }
        
        // Print odd numbers for the current row
        for (int count = 1; count <= rows; ++count) {
            if (oddNumber <= maxOdd) {
                cout << oddNumber << " ";
                oddNumber += 2; // Move to the next odd number
            }
        }
        
        cout << endl; // Move to the next line
        rows++;       // Increase the row count
    }
    
   
}

  else if(choise==2)
  {  cout<<"*** Welcome to the 2_D array c++ program ***\n";
               const int rows = 5;  // Number of rows in the 2D array
    const int cols = 6;  // Number of columns in the 2D array
    int oddNumber = 1;   // Start with the first odd number
    int array[rows][cols]; // 2D array to store odd numbers

    // Fill the 2D array with odd numbers
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (oddNumber <= 59) {
                array[i][j] = oddNumber;
                oddNumber += 2; // Move to the next odd number
            } else {
                array[i][j] = 0; // Fill remaining cells with 0
            }
        }
    }

 // Display the 2D array
    cout << "2D Array of Odd Numbers (1 to 59):" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] != 0) {
                cout << array[i][j] << "\t"; // Display odd number
            } else {
                cout << " \t"; // Leave empty spaces for cells with 0
            }
        }
        cout << endl;
    }
}

//using function calculate sum and avarege
 else if(choise==3){
        cout<<"*** Welcome to the function c++ program ***\n";
      int SUM =0;
       int x=0;
       for(int i=1;i<=59;i+=2)
      {
        SUM=SUM+i;
         x++;
             }
       double AVG =static_cast<double>(SUM)/x;
        cout<<" "<<endl;
        cout<<"the sum of odd numbers from 1 to 59 = "<<SUM<<endl;
       cout<<"average of odd numbers from 1 to 59 = "<<AVG<<endl;
}
else{
    cout<<"please enter the correct choice"<<endl;
	}
cout<<" "<<endl;
cout<<"***Do you want to continue the execution of program?***\n if you want press 0 else pres any key"<<endl;
cin>>y;
}
while(y==0);
return 0;}



