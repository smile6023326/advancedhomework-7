#include <stdio.h>   
#include <stdlib.h> 
#include <string.h> 
#include <iostream> 
using namespace std;
#define MAXCHAR 100 
char c[MAXCHAR];
char *a[MAXCHAR];/
 

int comlen( char *p, char *q )
{
	int i = 0;
	while( *p && (*p++ == *q++))
	{
		i++;     
	}
 
	return i;
}

int pstrcmp( const void *p1, const void *p2 )
{
	return strcmp( *(char* const *)p1, *(char* const*)p2 );
}
 
int main(void)
{
	char ch;
	int n = 0;
	int i;
	int temp;
	int  maxlen=0;
	int maxi=0;
 
	printf("請輸入一個字串：");
	while ((ch=getchar()) != '\n')
	{

		a[n] = &c[n];
		c[n++] = ch;
	}
 
	c[n] = '\0';
	qsort (a, n, sizeof(char*), pstrcmp );
 
	for (i=0; i<n-1; ++i)
	{
		temp = comlen(a[i], a[i+1]);
		if( temp > maxlen )
		{
			maxlen = temp;
			maxi = i;
		}
	}
   printf("此字串中最長相同部分："); 
	for (int i = 0; i < maxlen; i ++)
	{
		cout<<a[maxi][i]; 
	}
	cout<<endl;
	system("PAUSE");
	return 0;
}

