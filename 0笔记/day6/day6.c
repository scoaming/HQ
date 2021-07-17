复习
{
	语句结构：顺序结构、选择结构、循环结构
	选择结构：
		if-else
			使用形式：
			if(表达式)
			{
				语句块;
			}
			else if(表达式)
			{
				语句块;
			}
			......
			else
			{
				语句块;
			}
			
		switch
			switch(表达式)  //一般填整型或者浮点型数据
			{
				case 表达式:
					语句块;      break;
				case 表达式:
					语句块;      break;
				case 表达式:
					语句块;      break;
				.......
				default:
					语句块;      break;(可省略)
			}
			
	循环结构：
		while
			while(表达式)
			{
				循环体;
			}
			
		do-while
			do
			{
				循环体;
			}while(表达式);


		for
			for(表达式1; 表达式2; 表达式3)
			{
				循环体;
			}
			
	辅助控制语句
		goto 
			使用方法：
				符号设置：
					标志符号名:
			
				go + 标志符号
		break:用于跳出当前循环
		continue:用于跳过一次循环
		return:用于结束当前函数

}

一、数组
	概念：数组是内存上的一片连续存储空间，是相同数据类型的集合
	
	1、数组的定义：
		数组定义的一般形式：
			<存储类型> <数据类型> 数组名[元素个数];
			存储类型：auto、register、extern、static
			数据类型：跟数组中存放的元素的数据类型一致
			数组名：跟标识符命名规则一致，还可以表示整个数组的起始地址   a == &a[0]
			元素个数：数组中存放数据的个数
			
			例：
				int a[10];
				
				
	2、数组的使用：
			元素下标的使用范围：0 ~ n-1，n表示元素个数   没有a[n]这个元素
			数组名[元素下标];   //根据元素下标表示数组中的某一个元素
				a[0];  //数组a的第一个元素
				a[n-1];  //数组a的最后一个元素
					
			注意：使用数组最好不要越界
			
	3、数组的初始化：
			<存储类型> <数据类型> 数组名[元素个数] = {依次给每一个元素赋值，多个元素之间用逗号隔开};
			例：
				int a[5] = {1,2,3,4,5};
			
		(1)完全初始化:定义多少元素，就赋值多少元素
			int a[4] = {1,2,3,4};
			a[0] == 1   
			a[1] == 2 
			a[3] == 4
		(2)不完全初始化:没有初始化到的元素，其值默认为0
			int b[4] = {1,2};
			b[0] == 1
			b[1] == 2
			b[2] == 0 
			
			int c[50] = {0};
			
		(3)缺省初始化:编译器会根据初始化的元素个数，决定为该数组开辟足够大的内存空间
			int d[] = {1,2,3,4,5};
			d[0] == 1;
			d[4] == 5;
			d[5] //error
			
			sizeof(d) == 5*sizeof(int) == 20
			
			
		练习：
			  1、将数组中的元素依次打印输出（数组的遍历）
			  2、定义一个整型数组，计算数组中所有元素的和
			  3、定义一个整型数组，输出数组中的最大值和最小值，并且打印元素下标
			  4、定义一个整型数组，将数组元素按升序排序，然后打印输出
				例：
					int a[10] = {1,22,3,44,5,66,7,88,9,100};
					
					int a = 2;
					int b = 3;
					a == 3;
					b == 2;
					
		作业：用选择排序和插入排序将指定数据进行排序
					
					
			
			
			
		
			
	
	
	
	
	

	