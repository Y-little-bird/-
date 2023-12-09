#define _CRT_SECURE_NO_WARNINGS 1

#include "翻转课堂.h"




int main() 
{   
    int p;

    //打印菜单
    print_menu();

    //进行操作
    scanf("%d", &p);


    //创建数组接收信息
    Stu a = (Stu)malloc(sizeof(StuNode) * max_num);
    switch(p)
    {
        case 1:
            input_student_info(a);   //输入学生信息函数
            break;
        
        case 2: 
            search_grade(a); //根据学号，打印输出所有课程成绩
            break;
        case 3:
            grade_rank(a);    //降序排列所有学生成绩并输出
            break;
        case 4:
            score_statistics(a);//根据课程序号（10门课程从1开始编号），统计并输出该课程90~100、80~89、70~79、60~69、0~59这五个分数段的人数
            break;
        case 5:
            calculate_GPA(a);//根据学号，计算并输出该学生10门课程的绩点（按照东北大学绩点计算公式进行计算）
            break;
        case 6:
            GPA_rank(a);//根据10门课程的绩点，逆序排序并输出学生（即绩点最高的排在最前面）

            break;
        case 7:
            highest_score(a);//根据课程序号（10门课程从1开始编号），求出该门课程的最高分并输出其学号、姓名和分数（如果最高分有多个学生，则全部输出）
            break;
        case 8:
            lowest_score(a);//根据课程序号（10门课程从1开始编号），求出该门课程的最低分并输出其学号、姓名和分数（如果最低分有多个学生，则全部输出）
            break;
        case 9:
            average_score(a);//根据课程序号（10门课程从1开始编号），计算并输出该门课程的平均分
            break;
        case 10:
            class_highest_score(a);//根据班级、课程序号（10门课程从1开始编号），计算并输出该班级、该门课程的最高分并输出其学号、姓名和分数（如果最高分有多个学生，则全部输出）
            break;
        case 11:
            class_lowest_score(a);//根据班级、课程序号（10门课程从1开始编号），计算并输出该班级、该门课程的最高分并输出其学号、姓名和分数（如果最高分有多个学生，则全部输出）
            break;
        case 12:
            class_average_score(a);//根据班级、课程序号（10门课程从1开始编号），计算并输出该班级、该门课程的平均分
            break;
        case 0:
            break;
        default:
            printf("无效的选项\n");
            print_menu();
            scanf("%d", &p);
    }



    return 0;
}