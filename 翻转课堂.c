#define _CRT_SECURE_NO_WARNINGS 1

#include "��ת����.h"




int main() 
{   
    int p;

    //��ӡ�˵�
    print_menu();

    //���в���
    scanf("%d", &p);


    //�������������Ϣ
    Stu a = (Stu)malloc(sizeof(StuNode) * max_num);
    switch(p)
    {
        case 1:
            input_student_info(a);   //����ѧ����Ϣ����
            break;
        
        case 2: 
            search_grade(a); //����ѧ�ţ���ӡ������пγ̳ɼ�
            break;
        case 3:
            grade_rank(a);    //������������ѧ���ɼ������
            break;
        case 4:
            score_statistics(a);//���ݿγ���ţ�10�ſγ̴�1��ʼ��ţ���ͳ�Ʋ�����ÿγ�90~100��80~89��70~79��60~69��0~59����������ε�����
            break;
        case 5:
            calculate_GPA(a);//����ѧ�ţ����㲢�����ѧ��10�ſγ̵ļ��㣨���ն�����ѧ������㹫ʽ���м��㣩
            break;
        case 6:
            GPA_rank(a);//����10�ſγ̵ļ��㣬�����������ѧ������������ߵ�������ǰ�棩

            break;
        case 7:
            highest_score(a);//���ݿγ���ţ�10�ſγ̴�1��ʼ��ţ���������ſγ̵���߷ֲ������ѧ�š������ͷ����������߷��ж��ѧ������ȫ�������
            break;
        case 8:
            lowest_score(a);//���ݿγ���ţ�10�ſγ̴�1��ʼ��ţ���������ſγ̵���ͷֲ������ѧ�š������ͷ����������ͷ��ж��ѧ������ȫ�������
            break;
        case 9:
            average_score(a);//���ݿγ���ţ�10�ſγ̴�1��ʼ��ţ������㲢������ſγ̵�ƽ����
            break;
        case 10:
            class_highest_score(a);//���ݰ༶���γ���ţ�10�ſγ̴�1��ʼ��ţ������㲢����ð༶�����ſγ̵���߷ֲ������ѧ�š������ͷ����������߷��ж��ѧ������ȫ�������
            break;
        case 11:
            class_lowest_score(a);//���ݰ༶���γ���ţ�10�ſγ̴�1��ʼ��ţ������㲢����ð༶�����ſγ̵���߷ֲ������ѧ�š������ͷ����������߷��ж��ѧ������ȫ�������
            break;
        case 12:
            class_average_score(a);//���ݰ༶���γ���ţ�10�ſγ̴�1��ʼ��ţ������㲢����ð༶�����ſγ̵�ƽ����
            break;
        case 0:
            break;
        default:
            printf("��Ч��ѡ��\n");
            print_menu();
            scanf("%d", &p);
    }



    return 0;
}