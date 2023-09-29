//使用插入排序进行升序排列
#include <stdio.h>
int InsertSort(int A[], int n) {  /* 自定义函数 InsertSort()*/
	int i,j;
	for(i=2; i<=n; i++) { //数组下标从2开始，A[0]做监视哨，A[1]一个数据无可比性
		A[0]=A[i];    //A[0]为哨兵
		for(j=i-1; A[0]<A[j]; j--) {
			A[j+1]=A[j]; 	//元素后移
		}
		A[j+1]=A[0];    //将A[j+1] ,即A[i]插入
	}
	return 0;
}

int main() {
	int A[1024],n;
	int i;
	printf("请输入要输入的元素个数：");
	scanf("%d",&n);
	printf("\n请输入要排序的序列：\n");
	for ( i=1; i<=n; i++) //输入的元素从1开始，0做哨兵
		scanf("%d",&A[i]);
	printf("\n使用直接插入排序算法后的结果：\n");
	InsertSort(A,n);
	for( i=1; i<=n; i++)
		printf("%d\t",A[i]);
	printf("\n");
	return 0;
}


