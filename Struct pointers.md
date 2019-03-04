C语言中的结构体的指针操作，以交换两个结构体为例
```C
typedef struct student
{
	int id;
	char name[50];
	float chinese;
	float math;
	float english;
	float sum;
}student;

//就像一个普通的变量一样，直接传指针就可以进行相应的操作，指针存储的是结构体首地址
void swap(struct student*a, struct student*b)
{
    struct student temp = *a;
    *a = *b;
    *b = temp;
};

```
结构体的操作一般都是以指针的方式进行，有的结构体会很大，直接进行拷贝操作代价太高，因此在函数的传参中，结构体一般也是通过指针的形式传经函数。
