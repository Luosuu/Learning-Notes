`
typedef struct student
{
	int id;
	char name[50];
	float chinese;
	float math;
	float english;
	float sum;
}student;

void swap(struct student*a, struct student*b)
{
    struct student temp = *a;
    *a = *b;
    *b = temp;
};

`
