#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void getJudgeData(double &judgescores);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main() {

	double s1, s2, s3, s4, s5;
	cout << "For the 5 judges, enter their scores for the performance." << endl;
	
	getJudgeData(s1);
	getJudgeData(s2);
	getJudgeData(s3);
	getJudgeData(s4);
	getJudgeData(s5);

	calcScore(s1, s2, s3, s4, s5);

	
}

void getJudgeData(double& judgescores) {
	cout << "Enter the judge's score: ";
	cin >> judgescores;
	while (judgescores < 0 || judgescores>10) {
		cout << "Re-enter the judge's score (The value cannot be less than 0 or greater than 10): " ;
		cin >> judgescores;
	}

}
void calcScore(double s1, double s2, double s3, double s4, double s5) {
	double sum = 0;
	double lowestscore;
	double highestscore;
	double performancescore;

	sum = (s1 + s2 + s3 + s4 + s5);
	lowestscore = findLowest(s1, s2, s3, s4, s5);
	highestscore = findHighest(s1, s2, s3, s4, s5);
	performancescore = (sum - lowestscore - highestscore) / 3;

	cout << "The average score of the performance is: " << performancescore <<  " points!" << endl;	
}

double findLowest(double s1, double s2, double s3, double s4, double s5) {
	if (s1 < s2 && s1 < s3 && s1 < s4 && s1 < s5) {
		return s1;
	}
	else if (s2 < s1 && s2 < s3 && s2 < s4 && s2 < s5) {
		return s2;
	}
	else if (s3 < s1 && s3 < s2 && s3 < s4 && s3 < s5) {
		return s3;
	}
	else if (s4 < s1 && s4 < s2 && s4 < s3 && s4 < s5) {
		return s4;
	}
	else if (s5 < s1 && s5 < s2 && s5 < s3 && s5 < s4) {
		return s5;
	}
}
double findHighest(double s1, double s2, double s3, double s4, double s5) {
	if (s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5) {
		return s1;
	}
	else if (s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5) {
		return s2;
	}
	else if (s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5){
		return s2;
}
	else if (s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5) {
		return s4;
	}
	else if (s5 > s1 && s5 > s2 && s5 > s3 && s5 > s4) {
		return s5;
	}
}
