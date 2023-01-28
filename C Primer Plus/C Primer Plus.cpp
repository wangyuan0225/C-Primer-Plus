#include<stdio.h>
#include<string.h>
#include<inttypes.h>




int main()
{
	float salary;
	printf("Enter your desired monthly salary:\n");
	scanf("%f", &salary);
	return 0;
}


//int main(void)
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf(" $_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, 
//		salary * 12.0);
//	printf("\rGee!\n");
//
//	return 0;
//}


//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n", n, m);
//	printf("%d %d %d\n", n);
//	printf("%d %d\n", f, g);
//	return 0;
//}


//int main(void)
//{
//	int oranges = 3;
//	int cost = 12.99;
//	float pi = 3.1415926536;
//	printf("%d %lf\n", cost, pi);
//	return 0;
//}


//int main(void)
//{
//	printf("Type int has a size of %u bytes.\n",sizeof(int));
//	printf("Type char has a size of %zd bytes.\n",sizeof(char));
//	printf("Type long has a size of %zd bytes.\n", sizeof(long));
//	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
//	printf("Type double has a size of %zd bytes.\n", sizeof(double));
//	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
//
//	return 0;
//}


//int main(void)
//{
//	float a, b;
//
//	b = 2.0e20 + 1.0;
//	a = b - 2.0e20;
//	printf("%f \n", a);
//
//	return 0;
//}


//int main(void)
//{
//	float toobig = 3.4E38 * 100.f;
//	printf("%e\n", toobig);
//
//	return 0;
//}


//int main(void)
//{
//	float aboat = 32000.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//	printf("%f can be written %e\n", aboat, aboat);
//	printf("And it's %a in hexadecimal,powers of 2 notation\n", aboat);
//	printf("%f can be written %e\n", abet, abet);
//	printf("%Lf can be written %Le\n", dip, dip);
//	return 0;
//}


//int main(void)
//{
//	int32_t me32;
//
//	me32 = 45933945;
//	printf("First, assume int32_t is int: ");
//	printf("me32 = %d\n", me32);
//	printf("Next,let's not make any assumptions.\n");
//	printf("Instead, use a \"macro\" from inttypes.h: ");
//	printf("me32 = %" PRId32 "\n", me32);
//	return 0;
//}


//int main(void)
//{
//	char ch;
//
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//
//	return 0;
//}


//int main(void)
//{
//	printf("Gramps sez, \"a \\ is a backslash.\"\n");
//	return 0;
//}



//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//	printf("un=%u and not %d\n", un, un);
//	printf("end=%hd and %d\n", end, end);
//	printf("big=%ld and not %hd\n", big, big);
//	printf("verybig=%lld and not %ld\n", verybig,verybig);
//	return 0;
//}


//int main(void)
//{
//	int i = 2147483647;
//	unsigned int j = 4294967295;
//	printf("%d %d %d\n", i, i + 1, i + 2);
//	printf("%u %u %u\n", j, j + 1, j + 2);
//	return 0;
//}


//int main(void)
//{
//	int x = 100;
//	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
//	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);
//
//	return 0;
//}

//int main(void)
//{
//	int ten = 10;
//	int two = 2;
//	printf("Doint it right:");
//	printf("%d minus %d is %d\n", ten, 2, ten - two);
//	printf("Doing it wrong:");
//	printf("%d minus %d is %d\n", ten);
//	return 0;
//}


//int main(void)
//{
//	float weight;
//	float value;
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds: ");
//	scanf("%f", &weight);
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n", value);
//	printf("You are easily worth that!If platinum prices drop,\n");
//
//	return 0;
//}


//void two(void)
//{
//	printf("two\n");
//}
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!\n");
//
//	return 0;
//}


//void s(void)//定义笑
//{
//	printf("Smile!");
//}
//int main(void)
//{
//	s();
//	s();
//	s();
//	printf("\n");
//	s();
//	s();
//	printf("\n");
//	s();
//
//	return 0;
//}


//int main(void)
//{
//    int toes = 10;
//    printf("初始值=%d\n", toes);
//    printf("初始值×2=%d\n", toes * 2);
//    printf("初始值的平方=%d\n", toes * toes);
//    return 0;
//}


//void br(void)
//{
//	printf("Brazil, Russia");
//}
//
//void ic(void)
//{
//	printf("India, China");
//}
//
//int main(void)
//{
//	br();
//	printf(", ");
//	ic();
//	printf("\n");
//	ic();
//	printf(",\n");
//	br();
//	printf("\n");
//	return 0;
//}


//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void)
//{
//	printf("Which nobody can deny!");
//}
//int main(void)
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}


//int main(void)
//{
//	int 姓名 = 18;
//	int 天数 = 姓名 * 365;
//	printf("%d %d\n", 姓名, 天数);
//	return 0;
//}


//int main(void)
//{
//	printf("王渊，家住黄土高坡");
//	return 0;
//}


//int main(void)
//{
//	printf("王渊\n");
//	printf("王\n渊\n");
//	printf("王");
//	printf("渊\n");
//	return 0;
//}


//int main(void)
//{
//	int x, y;
//	x = 10;
//	y = 5;
//	y = x + y;
//	x = x * y;
//	printf("%d %d\n", x, y);
//	return 0;
//}


//int main(void)
//{
//	int a, b;
//	a = 5;
//	b = 2;
//	b = a;
//	a = b;
//	printf("%d %d\n",b,a);
//	return 0;
//}


//int main(void)
//{
//	int a, b;
//	a = 3020;
//	b = 350;
//	printf("There were %d words and %d lines.\n", a, b);
//	return 0;
//
//}


//int main(void)
//{
//	int n, n2, n3;
//	n = 5;
//	n2 = n * n;
//	n3 = n2 * n2;
//	printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
//	return 0;
//}


//void butler(void);
//int main(void)
//{
//	printf("I will summon the butler function.\n");
//	butler();
//	printf("Yes.Bring me some tea and writeable DVDs.\n");
//
//	return 0;
//}
//void butler(void)
//{
//	printf("You rang,sir?\n");
//}


//int main()
//{
//	int feet, fathoms;
//	fathoms = 0;
//	scanf("%d", &fathoms);
//	feet = 6 * fathoms;
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	return 0;
//
//}


//int main()
//{
//	int doors;
//	doors = 5;
//	int dogs;
//	dogs = 3;
//	return 0;
//
//}


//int main()
//{
//	printf("hello\n");
//	printf("%d\n" , sizeof(char));
//	printf("%d\n", sizeof(short int));
//	printf("%d\n",sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d" , &num1, &num2);
//	sum = num1 + num2;
//	printf("%d\n", sum);
//	//const int n = 10;
//	//int arr[n] = {0};
//
//		return 0;
//}
//int main(void)
//{
//	int dogs;
//	printf("How many dogs do you have?\n");
//	scanf("%d", &dogs);
//	printf("So you have %d dog(s)!\n", dogs);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	num = 1;
//	printf("我是一个简单的");
//	printf("计算机\n");
//	printf("我最喜欢的数字是%d，因为它是第一个",num);
//
//	return 0;
//}


//void butler(void)
//{
//	printf("You rang,sir?\n");
//}

