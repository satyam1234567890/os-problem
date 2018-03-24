//os project:-
//Q.
#include<stdio.h>
int main()
{
	int a,b,c,i;
	int s[a],f[b],cs[c];
	
	
	// here i define the no of person present to play the game
	printf("enter the no of student in row\n");
	scanf("%d",&a);
	printf("enter the no of facilty in row\n");
	scanf("%d",&b);
	printf("enter the no of computer center staff in a row \n");
	scanf("%d",&c);
	
	A:
	
	//array of student with postion:-
		printf(" the position of student:-\n");

	for(i=1;i<=a;i++)
	{
		s[i]=i;
		printf("position at entry time:s[a]=%d\n",i);
	}
	
	//array of facilty with position:-
	    printf(" the position of facilty:-\n");
	
	for(i=1;i<=b;i++)
	{
		s[i]=i;
		printf("position at entry time:s[b]=%d\n",i);
	}    
	//array of computer center staff with position:-
	    printf("the position of computer center staff:-\n");  
	for(i=1;i<=c;i++)
	{
		s[i]=i;
		printf("position at entery time:s[c]=%d\n",i);
	}
	
	/*
	time priority
	alloted time for:-
	student:-     10:00pm  to   6:00am
	faculty:-      5:00pm  to   8:00am
	computer center staff:-  all time
	*/
	
	
	int h;
	//A:
	printf("enter the time in hour(0-24):-\n");
	scanf("%d",&h);
	
	
	if(a==0&&b==0&&c==0)
   {      
         printf("no person present in row\n");
   }
	
	else if(h>=22||h<=6)
	{
			if(a!=NULL)
		{
		printf("student allow to play\n");
		a=--a;
	    }
	    else
	    {
	    	if(b!=NULL)
	    	{
	    		printf("faculty allow to play\n");
	    		b=--b;
			}
			else
			{
				if(c!=NULL)
				{
					printf("computer staff allow to play\n");
					c=--c;
						
				}
			
			}
		}
			 	
   }
	
	
	//problem:-	
	else if((h>6 && h<=8)||(h>=17 && h<22))
	{
			if(b!=NULL)
	    	{
	    		printf("faculty allow to play\n");
	    		b=--b;
			}
			else
			{
				if(c!=NULL)
				{
					printf("computer staff allow to play\n");
					c=--c;
						 
				}
			
           	}
          	
    }
    
    
	else if(h>8 || h<17)
	{
		
				if(c!=NULL)
				{
					printf("computer staff allow to play\n");
					c=--c;
				
				}
			  
			
	}
	

   // goto A;
	

     	int k;
  do {
     
	
		
		printf("1.if one student enter in queue k:-1\n");
		printf("1.if one facilty enter in queue k:-2\n");
		printf("3.if one computer staff enter in a queue k:-3\n");
		printf("4.exit k:-4\n");

				
	

	printf("enter the value of k  \n"); 
	scanf("%d",&k);
	switch(k)
	{
		case 1:
		
			a=++a;
			
		
			break;
			
		case 2:
		
			b=++b;
			
			
			break;
			
		case 3:
			
			 c=++c;
		    
		    
			break;
		case 4:
		    printf("exit if no one person is left:\n");
		    
		    
		    break;
	
		default:
				printf("wrong button you are pressed: \n");
			
	}
	

   }while(k!=4);
   		
      goto A;  	
} 
	
	
	
	
	
	
	
	
	

