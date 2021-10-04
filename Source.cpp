#include <iostream>

struct Student
{
	char name[100];
	int age = 0;
	int marks[100];
	int marks_count = 0;
};

double getAverageMark(Student s)
{
	double av = 0;
	for (int i = 0; i < s.marks_count; i++)
	{
		av += s.marks[i];
	}
	av /= s.marks_count;
	return av;
}

void FillStudentByHand(Student& s)
{
	printf("������� ���: ");
	do
		gets_s(s.name, 100);// ?
	while (s.name[0] == '\n' || s.name[0] == '\0');
	printf("������� �������: ");
	scanf_s("%i", &s.age);
	printf("�������  ���������� ������: ");
	scanf_s("%i", &s.marks_count);

	for (int i = 0; i < s.marks_count; i++)
	{
		printf("������� ������ �%i: ", i+1);
		scanf_s("%i", &s.marks[i]);
	}



}

void PrintStudent(Student s, bool detailed = false)
{
	printf("�������: %s, �������: %i, ������: %i\n", s.name, s.age, s.marks_count);
	if (detailed)
	{
		printf("������: ");
		for (int i = 0; i < s.marks_count; i++)
			printf("%i ", s.marks[i]);
		printf("\n");

	}
}

int main()
{
	system("chcp 1251");
	int s_counter = 5;
	Student group[50];

	for (int i = 0; i < s_counter; i++)
	{
		FillStudentByHand(group[i]);
	}

	system("cls");
	printf("��� ������ (%i �������):\n\n", s_counter);

	for (int i = 0; i < s_counter; i++)
	{
		PrintStudent(group[i], true);
	}

	system("pause");
	return 0;
}