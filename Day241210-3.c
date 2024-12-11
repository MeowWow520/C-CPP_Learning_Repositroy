#include <stdio.h>


//新的类型--Student
struct Student {

	int ID;//学号
	char Name;//姓名
	float Score1;//分数1
	float Score2;//分数2
	float Score3;//分数3
	float Average;//平均分

};

//定义更简单的 struct Student 写法
typedef struct Student CreS ;

//创建10个学生s0~s9--全局变量
CreS s[2];

//函数--计算平均数
float AVERAGE(float a, float b, float c) {

	return ((a + b + c) / 3);
};

int main() {

	//输入信息计算区
	//输入10个学生s0~s9的数据
	for (int i = 0; i <= 1; i++) {

		printf("请输入第%d个学生的数据，用空格分开每一个数据。依次为学号、姓名、分数1~3\n", i+1);
		scanf("%d %s %f %f %f", &s[i].ID, &s[i].Name, &s[i].Score1, &s[i].Score2, &s[i].Score3);
	};

	//计算平均分Average
	for (int l = 0; l <= 1; l++) {

		int n = l;
		s[n].Average = AVERAGE(s[n].Score1, s[n].Score2, s[n].Score3);
		//打印平均分--Name打印不了？！
		printf("学号：%d 平均分：%.2f", s[0].ID, s[0].Average);
	};

	return 0;
}
