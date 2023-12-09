#pragma once
#include<stdio.h>
#include<stdlib.h>
#define max_num 1000  //系统存储的最大数量的学生信息
typedef struct Student
{
    int num; 		//学号
    char name[50]; 	//姓名
    char class[20];		//班级 
    int score[10];		//课程成绩，共有10门课程
    float credit[10];	//课程学分，对应10门课程 
}*Stu, StuNode;

//插入排序
void insertion_Sort(int arr[], int n);

void start_lead();            //开始引导


void print_menu();           //打印菜单

//switch进行选择功能

//1.成绩录入
void input_student_info(Stu a);   //输入学生信息函数

//2.成绩查询
void search_grade(Stu a); //根据学号，打印输出所有课程成绩

//3.成绩排序
void grade_rank(Stu a);    //降序排列所有学生成绩并输出

//4.成绩统计
void score_statistics(Stu a);//根据课程序号（10门课程从1开始编号），统计并输出该课程90~100、80~89、70~79、60~69、0~59这五个分数段的人数

//5. 绩点计算
void calculate_GPA(Stu a);//根据学号，计算并输出该学生10门课程的绩点（按照东北大学绩点计算公式进行计算）

//6. 绩点排名
void GPA_rank(Stu a);//根据10门课程的绩点，逆序排序并输出学生（即绩点最高的排在最前面）

//7. 最高分
void highest_score(Stu a);//根据课程序号（10门课程从1开始编号），求出该门课程的最高分并输出其学号、姓名和分数（如果最高分有多个学生，则全部输出）

//8. 最低分
void lowest_score( Stu a);//根据课程序号（10门课程从1开始编号），求出该门课程的最低分并输出其学号、姓名和分数（如果最低分有多个学生，则全部输出）

//9. 平均分
void average_score(Stu a);//根据课程序号（10门课程从1开始编号），计算并输出该门课程的平均分

//10. 班最高分
void class_highest_score(Stu a);//根据班级、课程序号（10门课程从1开始编号），计算并输出该班级、该门课程的最高分并输出其学号、姓名和分数（如果最高分有多个学生，则全部输出）

//11. 班最高分
void class_lowest_score(Stu a);//根据班级、课程序号（10门课程从1开始编号），计算并输出该班级、该门课程的最高分并输出其学号、姓名和分数（如果最高分有多个学生，则全部输出）

//12. 班平均分
void class_average_score(Stu a);//根据班级、课程序号（10门课程从1开始编号），计算并输出该班级、该门课程的平均分
