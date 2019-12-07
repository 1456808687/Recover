//#include <stdio.h>
//#include <stdlib.h> 
//
//typedef struct node 
//{
//	int data; 
//	struct node* next; 
//}N;
//
//void WordT1()
//{ void Creat_node_Readin(N * *node_old, N * *node_head);
//void Total_Times_Innode(N * node_head); 
//int n;  N* node_s = NULL;
//N* node_head = NULL;  scanf("%d", &n); 
//for (
//	int i = 0;
//	i < n; i++)
//{ Creat_node_Readin(&node_s, &node_head); }
//Total_Times_Innode(node_head); 
//return; }
//
//void Creat_node_Readin(N** node_old, N** node_head)
//{ N* node_next; 
//node_next = (N*)malloc(sizeof(N)); 
//node_next->data = 0;
//node_next->next = NULL; 
//scanf("%d", &node_next->data); 
//if (*node_old) { (*node_old)->next = node_next; }
//else { *node_head = node_next; }  *node_old = node_next; }
//
//void Total_Times_Innode(N* node_head)
//{
//	int m = 0, sum = 0; 
//	N* node_search = node_head; 
//	scanf("%d", &m); 
//	while (node_search) 
//	{ if (node_search->data == m)
//	{ sum++; } 
//	node_search = node_search->next; }
//	printf("%d", sum);
//}
//
//int main() {
//	WordT1(); 
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void fun(char s[], char c)
//{
//	int l, i;
//	l = strlen(s);
//	s[2 * l - 1] = '\0';
//	for (i = l - 1; i > 0; i--)
//	{
//		s[2 * i] = s[i];
//		s[2 * i - 1] = c;
//	}
//}
//
//int main()
//{
//	void fun(char s[], char c);
//	char s[80], c;
//	gets_s(s);
//	c = getchar();
//	fun(s, c);
//	puts(s);
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int _1(char a, char b);
//	char a[40] = {}, b;
//	gets_s(a);
//	b = getchar();
//#include<stdio.h>
//float fun(float a, char op1, float b)
//{
//	switch (op1)
//	{
//	case '+': return a + b;
//	case '-': return a - b;
//	case '*': return a * b;
//	case '/': return a / b;
//	}
//}
//int main()
//{
//	float a, b, c,d; char op1, op2;
//	scanf("%f", &a);
//	op1 = getchar();
//	scanf("%f", &b);
//	op2 = getchar();
//	scanf("%f", &c);
//	d = fun(a, op1, fun(b, op2, c));
//	if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '/'))
//		printf("%.2f", d);
//	else
//	    printf("%.2f", fun(fun(a, op1, b), op2, c));
//	return 0;
//
//}
//#include<stdio.h>  
//int fun(int a, char op, int b)
//{
//	switch (op)
//	{
//	case '+': return a + b;
//	case '-': return a - b;
//	case '*': return a * b;
//	case '%': return a % b;
//	}
//}
//int main()
//{
//	int a, b, c; char op1, op2;
//	scanf("%d", &a);
//	op1 = getchar();
//	scanf("%d", &b);
//	op2 = getchar();
//	scanf("%d", &c);
//	if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '%'))
//		printf("%d", fun(a, op1, fun(b, op2, c)));
//	else
//		printf("%d", fun(fun(a, op1, b), op2, c));
//	return 0;
//}
//#include<stdio.h>
//int fun(int a, char op, int b)
//{
//	switch (op)
//	{
//	case '+': return a + b;
//	case '-': return a - b;
//	case '*': return a * b;
//	case '^': 
//	    {int i,sum=1;
//
//	          for (i = 1; i <= b; i++)
//	          {
//		        sum=sum*a;
//	          }
//	       return sum;
//	     }
//	}
//}
//int main()
//{
//	int a, b, c; char op1, op2;
//	scanf("%d", &a);
//	op1 = getchar();
//	scanf("%d", &b);
//	op2 = getchar();
//	scanf("%d", &c);
//	if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '^'))
//		printf("%d", fun(a, op1, fun(b, op2, c)));
//	else
//		printf("%d", fun(fun(a, op1, b), op2, c));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//	char a[40], b;
//		gets_s(a);
//	b = getchar();
//	 fun(a, b);
//	 puts(a);
//		 return 0;
//
//}
//void fun(char a[], char b)
//{
//	int l, i;
//	l = strlen(a);
//	a[2 * l - 1] = '\0';
//	for (i = l-1; i >0; i--)
//	{
//		a[2 * i] = a[i];
//		a[2 * i -1] = b;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//char a[40],b;
//gets_s(a);
//b = getchar();
//fun(a, b);
//puts(a);
//return 0;
//}
//void fun(char a[], char b)
//{
//	int l, i;
//	l = strlen(a);
//	a[3 * l - 2] = '\0';
//	for (i = l - 1; i > 0; i--)
//	{
//		a[3 * i] = a[i];
//		a[3 * i - 1] = b;
//		a[3 * i - 2] = b;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//	char a[40], b;
//	gets_s(a);
//	b = getchar();
//	fun(a, b);
//	puts(a);
//	return 0;
//}
//void fun(char a[], char b)
//{
//	int l, i,j;
//	l = strlen(a);
//	
//	for (i = 0, j = 0; i < l; i++)
//	{
//		if (a[i] != b)
//		{
//			a[j] = a[i];
//			j++;
//		}
//		
//	}
//	a[j] = '\0';
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//	char a[40], b;
//	gets_s(a);
//	b = getchar();
//	fun(a, b);
//	puts(a);
//	return 0;
//}
//void fun(char a[], char b)
//{
//	int l, i, j, count = 0;
//	l = strlen(a);
//	for (i = 0, j = 0; i < l; i++)
//	
//		if (a[i] == b)
//		{
//			count++;
//		}
//
//
//		for (i = 0, j = 0; i < l; i++)
//		
//			if (a[i] != b)
//			{
//				a[j] = a[i];
//				j++;
//			}
//
//		
//		for (i = count; i > 0; i--)
//		{
//				a[j] = b;
//				j++;
//		}
//		a[j] = '\0';
//}


//#include<stdio.h>
//struct haha
//{
//	int a;
//	struct haha* next;
//}; struct haha b[80];
//int main()
//{
//	int i, j = 0, n, m;
//	
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	scanf("%d", &m);
//
//	for (i = 0; i < n - 1; i++)
//	{
//		b[i].next = &b[i + 1];
//	}
//	b[i].next = NULL;
//	for (i = 0; i < n; i++)
//	{
//
//		if (m == b[i].a)
//		{
//			j++;
//		}
//	}
//	printf("%d", j);
//	return 0;
//}

//#include<stdio.h>
//typedef struct node
//{
//	int data;
//	struct node* next;
//}; struct node a[80];
//int main()
//{
//	int j=0,i, n, m;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &m);
//	for (i = 0; i < n-1; i++)
//	{
//		a[i].next = &a[i + 1];
//	}
//	a[i].next = NULL;
//	for (i = 0; i < n; i++)
//		if (a[i].data == m)
//			j++;
//	printf("%d",j);
//	return 0;
//
//
//}

//#include<stdio.h>
//typedef struct node
//{
//	int data;
//	struct node* next;
//
//
//}; struct node a[80];
//int main()
//{
//	int i, j = 0, n, m;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &a[i]);
//	scanf("%d", &m);
//	for (i = 0; i < n-1; i++)
//		a[i].next = &a[i + 1];
//	a[i].next = NULL;
//	for (i = 0; i < n; i++)
//		if (a[i].data > m)
//			j++;
//	printf("%d", j);
//	return 0;
//
//
//
//
//}
//#include<stdio.h>
//struct haha
//{
//	int a;
//	struct haha* next;
//}; struct haha b[80];
//int main()
//{
//	int i, j = 0, n, m;
//	
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	scanf("%d", &m);
//
//	for (i = 0; i < n - 1; i++)
//	{
//		b[i].next = &b[i + 1];
//	}
//	b[i].next = NULL;
//	for (i = 0; i < n; i++)
//	{
//
//		if (m == b[i].a)
//		{
//			j++;
//		}
//	}
//	printf("%d", j);
//	return 0;
//}
//
//第一题
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node
//{
//	char info[20] = { NULL };
//	int grade[2] = { 0,0};
//	struct node* link;
//};
//
//void Creat(struct node** head)
//{
//	int i = 0, n = 0;
//	struct node* last = NULL, * now = NULL;
//	scanf("%d", &n);
//	do {
//		now = (struct node*)malloc(sizeof(struct node));
//		scanf("%s%d%d", now->info, &now->grade[0], &now->grade[1]);
//		now->link = NULL;
//		if (*head == NULL)
//		{
//			*head = now;
//		}
//		if (last)
//		{
//			last->link = now;
//		}
//		last = now;
//	} while (i++, i < n);
//}
//
//void printOut(struct node* now)
//{
//	for (; now; now = now->link)
//	{
//		printf("%s:%d %d\n", now->info, now->grade[0], now->grade[1]);
//	}
//}
//int main()
//{
//	struct node* head = NULL;
//	Creat(&head);
//	printOut(head);
//	return 0;
//}
//
//
//第五题
//
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node
//{
//	int data;
//	struct node* next;
//}N;
//
//void Creat_node_Readin(N **node_now, N** node_head)
//{
//	intn = 0;
//	scanf("%d", &n);
//	for (inti = 0; i < n; i++)
//	{
//		N* node_next;
//		node_next = (N*)malloc(sizeof(N));
//		node_next->data = 0;
//		node_next->next = NULL;
//		scanf("%d", &node_next->data);
//		if (*node_now)
//		{
//			(*node_now)->next = node_next;
//		}
//		else
//		{
//			*node_head = node_next;
//		}
//		*node_now = node_next;
//	}
//}
//
//voidthe_Sum_of_Higher_Data(N* node_head)
//{
//	intm = 0, sum = 0;
//	N* node_search = node_head;
//	scanf("%d", &m);
//	while (node_search)
//	{
//		if (node_search->data - m < 0)
//		{
//			sum += node_search->data;
//		}
//		node_search = node_search->next;
//
//	}
//	printf("%d", sum);
//}
//
//voidWordT5()
//{
//	N* node_now = NULL;
//	N* node_head = NULL;
//	Creat_node_Readin(&node_now, &node_head);
//	the_Sum_of_Higher_Data(node_head);
//}
//
//int main()
//{
//	WordT5();
//	return0;
//}
//
//第四题
//
//#include<stdio.h>#include<stdlib.h>
//
//typedefstructnode
//{
//	intdata;
//	structnode* next;
//}N;
//
//voidCreat_node_Readin(N** node_now, N** node_head)
//{
//	intn = 0;
//	scanf("%d", &n);
//	for (inti = 0; i < n; i++)
//	{
//		N* node_next;
//		node_next = (N*)malloc(sizeof(N));
//		node_next->data = 0;
//		node_next->next = NULL;
//		scanf("%d", &node_next->data);
//		if (*node_now)
//		{
//			(*node_now)->next = node_next;
//		}
//		else
//		{
//			*node_head = node_next;
//		}
//		*node_now = node_next;
//	}
//}
//
//void the_Sum_of_Higher_Data(N* node_head)
//{
//	int m = 0, sum = 0;
//	N* node_search = node_head;
//	scanf("%d", &m);
//	while (node_search)
//	{
//		if (node_search->data > m)
//		{
//			sum += node_search->data;
//		}
//		node_search = node_search->next;
//
//	}
//	printf("%d", sum);
//}
//
//void WordT4()
//{
//	N* node_now = NULL;
//	N* node_head = NULL;
//	Creat_node_Readin(&node_now, &node_head);
//	the_Sum_of_Higher_Data(node_head);
//}
//
//int main()
//{
//	WordT4();
//	return0;
//}
//
//
//第三题
//#include<stdio.h> #include<stdlib.h>
//
//typedef struct node
//{
//	int data;
//	struc tnode* next;
//}N;
//
//void Creat_node_Readin(N** node_now, N** node_head)
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		N* node_next;
//		node_next = (N*)malloc(sizeof(N));
//		node_next->data = 0;
//		node_next->next = NULL;
//		scanf("%d", &node_next->data);
//		if (*node_now)
//		{
//			(*node_now)->next = node_next;
//		}
//		else
//		{
//			*node_head = node_next;
//		}
//		*node_now = node_next;
//	}
//}
//
//void the_Sum_of_Higher_Data(N* node_head)
//{
//	int m = 0, sum = 0;
//	N* node_search = node_head;
//	scanf("%d", &m);
//	while (node_search)
//	{
//		if (node_search->data < m)
//		{
//			sum++;
//		}
//		node_search = node_search->next;
//
//	}
//	printf("%d", sum);
//}
//
//voidWordT3()
//{
//	N* node_now = NULL;
//	N* node_head = NULL;
//	Creat_node_Readin(&node_now, &node_head);
//	the_Sum_of_Higher_Data(node_head);
//}
//
//intmain()
//{
//	WordT3();
//	return0;
//}
//#include<stdio.h>
//int fun(int a, char op, int b)
//{
//	switch (op)
//	{
//	case '+': return a + b;
//	case '-': return a - b;
//	case '*': return a * b;
//	case '^': 
//	    {int i,sum=1;
//
//	          for (i = 1; i <= b; i++)
//	          {
//		        sum=sum*a;
//	          }
//	       return sum;
//	     }
//	}
//}
//int main()
//{
//	int a, b, c; char op1, op2;
//	scanf("%d", &a);
//	op1 = getchar();
//	scanf("%d", &b);
//	op2 = getchar();
//	scanf("%d", &c);
//	if ((op1 == '+' || op1 == '-') && (op2 == '*' || op2 == '^'))
//		printf("%d", fun(a, op1, fun(b, op2, c)));
//	else
//		printf("%d", fun(fun(a, op1, b), op2, c));
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//	char a[40], b;
//		gets_s(a);
//	b = getchar();
//	 fun(a, b);
//	 puts(a);
//		 return 0;
//
//}
//void fun(char a[], char b)
//{
//	int l, i;
//	l = strlen(a);
//	a[2 * l - 1] = '\0';
//	for (i = l-1; i >0; i--)
//	{
//		a[2 * i] = a[i];
//		a[2 * i -1] = b;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//char a[40],b;
//gets_s(a);
//b = getchar();
//fun(a, b);
//puts(a);
//return 0;
//}
//void fun(char a[], char b)
//{
//	int l, i;
//	l = strlen(a);
//	a[3 * l - 2] = '\0';
//	for (i = l - 1; i > 0; i--)
//	{
//		a[3 * i] = a[i];
//		a[3 * i - 1] = b;
//		a[3 * i - 2] = b;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	void fun(char a[], char b);
//	char a[40], b;
//	gets_s(a);
//	b = getchar();
//	fun(a, b);
//	puts(a);
//	return 0;
//}
//void fun(char a[], char b)
//{
//	int l, i,j;
//	l = strlen(a);
//	
//	for (i = 0, j = 0; i < l; i++)
//	{
//		if (a[i] != b)
//		{
//			a[j] = a[i];
//			j++;
//		}
//		
//	}
//	a[j] = '\0';
//}