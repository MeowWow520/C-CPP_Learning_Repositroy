#include <stdio.h>


//新的类型--Student
struct Student
{
	int ID;//学号
	char Name;//姓名
	float Score1;//分数1
	float Score2;//分数2
	float Score3;//分数3
	float Average;//平均分

};

//定义更简单的 struct Student 写法
typedef struct Student CreS ;

//函数--计算平均数
float AVERAGE(float a, float b, float c) {
	return (a + b + c) / 3.0;
};

int main() {
	//创建10个学生s0~s9
	CreS s[10];
	//输入10个学生s0~s9的数据
	for (int i = 1; i <= 10; i++) {
		printf("请输入第%d个学生的数据，用空格分开每一个数据。依次为学号、姓名、分数1~3\n", i);
		scanf("%d %s %f %f %f", &s[i].ID, &s[i].Name, &s[i].Score1, &s[i].Score2, &s[i].Score3);
	}


	return 0;
}
