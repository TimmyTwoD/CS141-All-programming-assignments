/*
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

int main() {

  int NumDepartments = 0; 
  int NumPeopleFaculty = 0;
  int NeededDepartments = 0;
  int totalPeople = 0;

  cin >> NumDepartments;

  vector<int> Faculty;

  for (int i = 0; i < NumDepartments; ++i) //putting faculty into vector
  {
    cin >> NumPeopleFaculty;
    Faculty.push_back(NumPeopleFaculty);
  }


  sort(Faculty.begin(), Faculty.end()); //sorting them in lowest to highest order.


  if (NumDepartments % 2 == 0) //if statement figures out # of departments needed 
  {
    NeededDepartments = ((NumDepartments/2)+1);
  }
  else
  {
    NeededDepartments = ((NumDepartments+1)/2);
  }



  for (int i = 0; i < NeededDepartments; ++i) 
  {
    if (Faculty.at(i) % 2 == 0) //if statement figures out # of people needed 
    {
      totalPeople += ((Faculty.at(i)/2)+1);
    }
    else
    {
      totalPeople += ((Faculty.at(i)+1)/2);
    }
  }
  
  cout << totalPeople;
  
}
*/