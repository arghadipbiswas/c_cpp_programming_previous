#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    int count=0,p=0,u=0;
	    scanf("%d",&n);
	    while(n--)
	    {
	        char c;
	        scanf("%c",&c);
	        if(c=='Y')
	        {
	             count++;
	        }
	        if(c=='N')
	        {
	           p++;
	        }
	        if(c=='I')
	        {
	            u++;
	        }
	    }
	    if(p>count)
	    {
	        printf("NOT INDIAN");
	    }
	    else if(p==u)
	    {
	        printf("INDIAN");
	    }
	    else 
	    {
	        printf("NOT SURE");
	    }
	}
	return 0;
}

