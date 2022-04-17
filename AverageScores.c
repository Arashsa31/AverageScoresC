/**
 * @author Arash
 *
 * Write a program that reads in exam scores and displays the average score.
 * (Extra credit +2 display the highest score)
 * You should first ask the user how many exams there are.
 * Your program must work for any number of exams.
 * How many exams? 5
 * Enter a score: 74
 * Enter a score: 91
 * Enter a score: 87
 * Enter a score: 93
 * Enter a score: 89
 * The average score is 86.8. (and the high score is 93. Extra credit)
 */

#include <stdio.h>

int main()
{
	//variables
	int n;
	float tempScore = 0.0, combinedScore = 0.0, highestScore = 0.0;

	//input
	printf("How many exams? ");
	scanf_s("%i", &n);

	//loop for each exam score
	for (int tempValue=0; tempValue<n; tempValue++)
	{
		printf("Enter a score: ");
		scanf_s("%f", &tempScore);

		//check score validity
		while (tempScore<0 || tempScore>100)
		{
			printf("Enter a score between 0 and 100: ");
			scanf_s("%f", &tempScore);
		}

		//adds all the scores into one variable
		combinedScore += tempScore;

		//captures the highest score
		if (tempScore > highestScore)
		{
			highestScore = tempScore;
		}
	}

	//calculations
	combinedScore /= n;

	//output
	printf("The average score is %.2f. (and the high score is %.2f.Extra credit)", combinedScore, highestScore);

	return 0;
}