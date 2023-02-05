#include<stdio.h>

void sayi(int []);

int main()
{ 
int a[10];
int i;
for (i=1; i<=10; i++){
	printf("Dizinin %d. elemanini girin = ",i);
	scanf("%d",&a[i]);
}
printf("Dizinin eleman degerleri:\n");
for (i=0; i<10; i++)
printf("%d ",a[i]);
sayi(a);

printf("\nKare alma islemi sonrasi degerler:\n");
for (i=0; i<=9; i++)
printf("%d ",a[i]);
}
void sayi(int a[])
{ int i;
for (i=0; i<=9; i++)
a[i] = a[i] * a[i];
}

