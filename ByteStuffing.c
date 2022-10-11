#include<stdio.h>
#include<string.h>
void byteDestuffing(char a[],char f,char e,int n);
void byteStuffing1(char a[],char f,char e,int n)
{
	char b[20];
	int i,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i] == f)
        {
            b[j] = e;
            j++;
            b[j] = a[i];
            j++;
            
        }
        else
        {
            b[j] = a[i];
            j++;
        }
        
    }
    printf("\n");
    for(i=0; i<j; i++)
    {
        printf("%c", b[i]);
    }    
}

void byteStuffing2(char a[],char f,char e,int n)
{
    char b[20];
	int i,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i] == e || a[i] == f)
        {
            b[i] = e;
            j++;
            b[j] = a[i];
            j++;
        }
        else
        {
            b[j] = a[i];
            j++;
        }        
    }
    printf("\n");
    for(i=0; i<j; i++)
    {
        printf("%c", b[i]);
    }      
}
void byteStuffing3(char a[],char f,char e,int n)
{
    char b[20];
	int i,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i] == f ||  a[i] == f)
        {
            b[i] = e;
            j++;
            b[j] = a[i];
            j++;
        }
        else
        {
            b[j] = a[i];
            j++;
        }        
    }
    printf("\n");
    for(i=0; i<j; i++)
    {
        printf("%c", b[i]);
    }         
}
void byteStuffing4(char a[],char f,char e,int n)
{
    char b[20];
	int i,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i] == e || a[i] == e)
        {
            b[i] = e;
            j++;
            b[j] = a[i];
            j++;
        }
        else
        {
            b[j] = a[i];
            j++;
        }        
    }
    printf("\n");
    for(i=0; i<j; i++)
    {
        printf("%c", b[i]);
    }      
    
    byteDestuffing(b,f,e,j);
}
void byteDestuffing(char a[],char f,char e,int n)
{
	char b[20];
	int i,j=0;

    int flag=0;
    j=0;
    for(i=0;i<n;i++)
    {
    	if(a[i]==e)
        {
    		if(flag==1)
    		 {
    		 	b[j++]=a[i];
    		 	flag=0;
			 }
			 else
			 {
			 	flag=1;
			 }
        }
		else
        {
			b[j++]=a[i];
        }
	}
    printf("\n Destuffed Byte Result : ");
    for(i=0;i<j;i++)
    {
        printf("%c",b[i]);
    }	
}
int main()
{
    char a[20],e,f;
    int i,n;
    printf("Enter the size of the frame : ");
    scanf("%d",&n);
    printf("\nEnter the data: ");
    for(i=0;i<n;i++)
        scanf("\n%c",&a[i]);
    printf("\nEnter the Flag character : ");
    scanf("\n%c",&f);
    printf("\nEnter the Escape character : ");
    scanf("\n%c",&e);
    byteStuffing1(a,f,e,n);
    byteStuffing2(a,f,e,n);
    byteStuffing3(a,f,e,n);
    byteStuffing4(a,f,e,n);    
}