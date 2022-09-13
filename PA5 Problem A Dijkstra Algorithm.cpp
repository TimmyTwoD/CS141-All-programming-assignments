/*
#include <iostream>
#include <vector>
#include <climits>   
using namespace std; 

int Dijsktra(vector<vector<int>> Matrix, int start, int destination, int size);
int minDist(vector<int> length, vector<bool> visited, int size);

int main() {
 
  ios_base::sync_with_stdio(false); //speeds up execution time
  int input1;
  int input2;
  int start;
  int destination;
  int value;
  int vertex1;
  int vertex2;

  cin >> input1 >> input2; 

  vector<vector<int>> Matrix(input1, vector<int> (input1, 0)); // initialize a input1 x input1 matrix with 0's

  cin >> start >> destination;
  
  for (int i = 0; i < input2; i++)
  {
    cin >> vertex1 >> vertex2 >> value;
    Matrix[vertex1][vertex2] = value;
    Matrix[vertex2][vertex1] = value;
  }
  
  cout << Dijsktra(Matrix, start, destination, input1) << endl;
 
  return 0;
 
}

int Dijsktra(vector<vector<int>> Matrix, int start, int destination, int size)
{
  vector<int> length(size, INT_MAX); // vector to hold the path lengths
  vector<bool> visited(size, false); // is vector visisted?

  length[start] = 0; // length from start to start is 0

  for(int i = 0; i<size; i++)                           
	{
		int m = minDist(length, visited, size);  
		visited[m]=true; 
		for(int i = 0; i<size; i++)                  
		{
			if(!visited[i] && Matrix[m][i] && length[m]!=INT_MAX && length[m]+Matrix[m][i]<length[i])
				length[i]=length[m]+Matrix[m][i];
		}
	}

  //^ taken from https://www.geeksforgeeks.org/dijkstras-shortest-path-algorithm-greedy-algo-7/

  return length[destination];
}

int minDist(vector<int> length, vector<bool> visited, int size)
{
  int min=INT_MAX,index;

  for(int i=0;i<size;i++) 
	{
		if(visited[i]==false && length[i]<=min)      
		{
			min=length[i];
			index=i;
		}
	}
	return index;
}
*/