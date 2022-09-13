/*
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std; 

int findDecreasing(vector<int> temp, int size);

vector<int> sequence;

int main() {

  int NumEntries = 0;
  int input = 0;
  int size = 0;
  int pointer = 0;
  int answer = 0;

  cin >> NumEntries;

  for (int i = 0; i < NumEntries; ++i) 
  {
    cin >> input;
    sequence.push_back(input);
  }

  size = sequence.size();

  answer = findDecreasing(sequence, size);

  cout << answer << endl;

  return 0;

}


int findDecreasing(vector<int> temp, int size) 
{
  int i = 0;
  int j = 0;
  vector<int> length;
  int longestDecreasing = 0;

  for ( i = 0; i < size; i++)
  {
    length.push_back(1);
  }

  // https://www.geeksforgeeks.org/longest-decreasing-subsequence/ with run time n^2

  for (i = 1; i < size; i++)
  {
    for (j = 0; j < i; j++)
    {
      if (temp[i] < temp[j] && length[i] < length[j] + 1)
      {
        length[i] = length[j] + 1;
      }
    }
  }

  for (i = 0; i < size; i++)
  {
    if (longestDecreasing < length[i])
    {
      longestDecreasing = length[i];
    }
  }

  return longestDecreasing;

}

*/