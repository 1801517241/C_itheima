#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Attractions {
    char name[100];  // ��������
    int Votes;       // Ʊ��
} Att;

int main() 
{
    srand(time(NULL));  // ��ʼ�������������

    // ��ʼ���ĸ�����
    Att A = { "�Ͼ�ɽ", 0 };
    Att B = { "���嵺", 0 };
    Att C = { "��ɳ", 0 };
    Att D = { "����", 0 };

    // �������������
    Att attArr[4] = { A, B, C, D };

    // ����80��ͶƱ
    for (int i = 0; i < 80; i++) {
        int choose = rand() % 4;  // ���ѡ��һ������
        attArr[choose].Votes++;   // ���Ӹþ����Ʊ��
    }

    // ���ÿ�������Ʊ��
    for (int i = 0; i < 4; i++)
    {
        printf("%s��Ʊ����%d\n", attArr[i].name, attArr[i].Votes);
    }

    int maxNumber = attArr[0].Votes;

    //�ҳ�Ʊ�����ľ��㣨��ͬ�����˳����A>B>c>D��
    for (int i = 1; i < 4; i++)
    {
        if (maxNumber < attArr[i].Votes)
            maxNumber = attArr[i].Votes;
    }
    
    for (int i = 0; i < 4; i++)
    {
        if (maxNumber == attArr[i].Votes)
            printf("%s��Ʊ����࣬��%d��Ʊ\n", attArr[i].name, attArr[i].Votes);
        break;
    }
    
    return 0;
}