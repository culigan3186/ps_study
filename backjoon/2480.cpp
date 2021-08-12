#include <stdio.h>

int main()
{
	int a[3];
	int max=0;
	int same=0;
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	if (a[0]==a[1] && a[1]==a[2]) printf("%d",10000+a[0]*1000);
	else if(a[0]==a[1] || a[2]==a[0])
	{
		printf("%d",1000+a[0]*100);
	}
	else if (a[1]==a[2]) printf("%d",1000+a[1]*100);
	else{
	
		for(int i=0;i<3;i++){
			if(a[i]>max) max = a[i];
		}
		printf("%d",max*100);
	}
}
