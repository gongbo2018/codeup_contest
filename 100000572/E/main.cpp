#include <cstdio>

struct student {
	int stu_no;
	char name[20];
	double score1;
	double score2;
	double score3;
};


int main() {
	student stu[10];
	for (int i=0;i<10;i++) {
		scanf("%d %s %lf %lf %lf", &stu[i].stu_no, stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
	}

	int k = 0;
	double total_score;
	double total_score1_sum, total_score2_sum, total_score3_sum;

	for (int j=0;j<10;j++) {
		total_score1_sum += stu[j].score1;
		total_score2_sum += stu[j].score2;
		total_score3_sum += stu[j].score3;
		double tmp_total = stu[j].score1 + stu[j].score2 + stu[j].score3;
		if (total_score < tmp_total) {
			total_score = tmp_total;
			k = j;
		}
	}

	printf("%.2f %.2f %.2f\n", total_score1_sum/10.0, total_score2_sum/10.0, total_score3_sum/10.0);
	printf("%d %s %d %d %d\n", stu[k].stu_no, stu[k].name, (int) stu[k].score1,(int) stu[k].score2, (int)stu[k].score3);
}
