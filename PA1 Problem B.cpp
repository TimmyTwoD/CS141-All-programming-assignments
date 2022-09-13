/*


#include <iostream>
#include <vector>
#include <algorithm> // for sort from TA's idea of using sort

using namespace std; 


int main() {

  int NumEntries = 0; //first input
  int Entries = 0; // second inputs
  int NumberOfQueries = 0; //number of questions that need to be answered
  int WhichScore = 0; //For outputting which score

  cin >> NumEntries;

  vector<int> TotalScores;

  for (int i = 0; i < NumEntries; ++i) //putting student scores into vector
  {
    cin >> Entries;
    TotalScores.push_back(Entries);
  }

  sort(TotalScores.begin(), TotalScores.end(), greater<int>()); //sorting them in descending order idea from geeksforgeeks 

  cin >> NumEntries; 

  for (int i = 0; i < NumEntries; ++i) // outputting based on number of queries
  {

    cin >> WhichScore;

    int ScorePlace = 0; //to hold the place of the score

    while (TotalScores.at(ScorePlace) != WhichScore)
    {
      ++ScorePlace;
    }

    cout << ScorePlace + 1 << endl;

  }

}



*/