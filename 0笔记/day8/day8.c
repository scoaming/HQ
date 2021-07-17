
复习
{
	数组：
		1、二维数组
			<存储类型> <数据类型> 二维数组名 [行数][列数];
			
			int a[3][4];
			a[2][2]; //第三行的第三个元素
			
			int b[2][3] = {{1, 2}, {3,4}};
			
		2、字符数组和字符串
		
			char a[6] = {'l', 'a'};
			char a[6] = "hello";
			a == &a[0];
			
			printf -- %s
				printf("%s\n", a);
			scanf -- %s
				scanf("%s", a);
			gets(a);
		
		3、字符串函数
			strlen
			strcat
			strcpy
			strcmp
				
}

一、指针
	概念：在计算机内存中，由一个一个的字节单元组成、每一个字节单元系统都会为其分配一个编号
		这个编号就称为地址，也叫做指针
		
	1、指针相关运算符
		&和*
		&：获取到指定数据的地址
			int a = 10;
			&a --> 获取到变量a的地址
		
		*：获取到对应地址中的内容
			int a = 10;
			*(&a) == a == 10
			
		&和*互为逆运算
		
	2、指针变量：用于存放地址的变量
		
		<存储类型> <数据类型> *指针变量名;
			数据类型:跟指针变量存放地址中的数据的数据类型一致		
			int a = 10;
			char b = 's';
			int *p = &a;
			char *q = &b;
			
			p == &a
			*p == a == 10
			
			a、&a、p、*p、&p(标志指针变量的地址)
			
	3、特殊指针
		(1)空指针：
			如果定义一个指针指向0值，那么该指针被称为空指针			
			int *p = NULL;
			int *q = 1000; //error
		
		
		(2)野指针:
			如果定义一个指针，没有明确指向，然后在后续过程中，也没有给该指针任何赋值
			那么该指针就被称为野指针。
			使用野指针由于不知道它的明确指向，有可能会指向非法区域，这是容易造成程序崩溃
			
			int *p;
			*p = 12;  //error
		
	4、指针的运算
		(1)关系运算
			> < == != >= <=
			int a,b;
			int *p = &a;
			int *q = &b;
			p == q   p > q  p < q
			
		(2)算数运算
			在指针的运算中，没有指针+指针、指针*指针、指针/指针，但是有指针-指针
			int a = 2;
			int *p = &a;   //&a == 0x2000
			
			p+n --> 指针p向高地址位偏移n个元素
			p+n -->  p + n*sizeof(数据类型)
			
			p-n --> 指针p向低地址位偏移n个元素
			p-n -->  p - n*sizeof(数据类型)
			
			指针-指针，可以计算相同数据类型的两个指针之间相差多少个元素
			指针-指针的结果为一个整型值
			q - p ==  (q-p)/sizeof(数据类型)
		
		(3)赋值运算
			1)把一个已有变量的地址赋给一个具有相同数据类型的指针
				int a = 2;
				int *p = &a;
				
			2)把一个已有的指针变量赋给一个具有相同数据类型的指针
				int a = 2;
				int *p = &a;	
				int *q = p;
				
			3)把0值赋给一个指针 -- 空指针
				int *p = NULL;
				
			4)把数组的数组名赋给一个具有相同数据类型的指针
				int a[5] = {1,2,3,4,5};
				int *p = a;   // a == &a[0]
			5)复合赋值运算
				int a = 2;
				int *p = &a;
				int *q = p+1;
				
			
		(4)指针和一维数组
			把数组的数组名赋给一个具有相同数据类型的指针
				int a[5] = {1,2,3,4,5};
				int *p = a;   // a == &a[0]					
				*p == a[0] == 1
				p+1 == &a[1]
				
			练习：1、用指针遍历一维数组
				  2、用指针将整型数组中的元素倒序存放
				  
		(5)指针和二维数组
				二维数组的数组名表示该数组首行的地址
		
				int a[2][3] = {1,2,3,4,5,6};
				
			行指针(数组指针):
				<存储类型> <数据类型> (*数组指针变量名)[列数];
				例：
					int a[2][3] = {1,2,3,4,5,6};
					int (*p)[3] = a;
				
				p = &a[0];
				p+1 = &a[1];
				*(p+1) = a[1];
				**(p+1) = a[1][0];
				
				*(*(p+n)+n) == a[n][n];
				
				
			练习：用一级指针遍历二维数组
				  用行指针遍历二维数组
		
			
				
						
			
			
			
		
		
		
		
		
	
		
		
		
		
		
		
	