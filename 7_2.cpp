//Write a program that asks the use to enter up to 10 golf scores, which are to be stored 
//in an array. You should provide a means for the user to terminate input prior to entering 10 scores 
//The program should display all the scores on one line and report the average score.
//Handle input, display and the average calculation with three separate array-processing function.

#include <iostream>

using namespace std;

const int MAX = 10;

int input(int scores[], int max);

void display(const int score[], int numScores);

double average(const int scores[], int numScores);

int main(void)
{
	int arr[MAX];
	int entries = input(arr, MAX);
	
	if (entries)
	{
		display(arr, entries);
		cout << "The average score is " << average(arr, entries) << endl;
	}
	else
		cout << "There are no scores to display or calculate the average for." << endl;
	
	return 0;
}

int input(int scores[], int max)
{
	cout << "You may enter up to " << MAX << " scores" << endl;
	cout << "Enter socre #1 (enter \"f\" when finished): ";
	
	int score;
	int count = 0;
	while (count < max && cin >> score)
	{
		scores[count++] = score;
		if (count < max)
			cout << "Enter score #" << count + 1 << " (enter\"f\" when finished): ";
	}
	return count;
}

void display(const int scores[], int numScores)
{
	cout << "The scores are as follows: ";
	int i = 0;
	while (i < numScores)
		cout << scores[i++] << " ";
	cout << endl;
	
	return;
}

double average(const int scores[], int numScores)
{
	int sum = 0;
	int i = 0;
	while (i < numScores)
		sum += scores[i++];
	
	return (double) sum / numScores;
}

/*void input(double &array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	
}

void display(double array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "score: " << array[i] << " ";
	}
}

double average(double array[], int size)
{
	double sum = 0;
	double average;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	average = sum / (float) size;
	return average;
}

int main()
{
	const int size = 10;
	double score[size];
	
	
	return 0;
}*/