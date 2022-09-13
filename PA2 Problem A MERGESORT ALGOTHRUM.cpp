/*
#include <iostream>
#include <vector>

using namespace std; 

int totalCandies = 0; //the problem was that I forgot to declare total candies outside so the mergesort function can use it too...
vector<int> mergeSort(vector<int> temp); 

int main() {

  int totalStudents = 0; 
  int score = 0;

  cin >> totalStudents;

  vector<int> students;

  for (int i = 0; i < totalStudents; ++i) //putting student scores into vector
  {
    cin >> score;
    students.push_back(score);
  }
  
  mergeSort(students);

  cout << totalCandies << endl;

}

vector<int> mergeSort(vector<int> temp) 
{
    if (temp.size() > 1)
    {
      int midpoint = (temp.size()/2);

      vector<int> leftScores(temp.begin(),temp.begin()+midpoint);
      vector<int> rightScores(temp.begin()+midpoint,temp.begin()+(temp.size()));
    // idea from https://runestone.academy/runestone/books/published/cppds/Sort/TheMergeSort.html

      leftScores = mergeSort(leftScores);
      rightScores = mergeSort(rightScores); 
      // splitting vectors recursively

      int mainPointer = 0;
      int leftPointer = 0;
      int rightPointer = 0;

      while (leftPointer < leftScores.size() && rightPointer < rightScores.size()) 
      {
        if (leftScores[leftPointer] < rightScores[rightPointer]) 
        {
          temp[mainPointer]=leftScores[leftPointer];
          ++leftPointer;
        } 
        else 
        {
          temp[mainPointer] = rightScores[rightPointer];
          ++rightPointer;
        }

        ++mainPointer;
      }

      while (leftPointer < leftScores.size()) //remaining elements of each vector
      {
        temp[mainPointer] = leftScores[leftPointer];
        ++leftPointer;
        ++mainPointer;
      }

      while (rightPointer < rightScores.size())
      {
        temp[mainPointer]=rightScores[rightPointer];
        ++rightPointer;
        ++mainPointer;
      }

    }

    totalCandies += temp[temp.size()-1] - temp[0];

    return temp;

}
*/