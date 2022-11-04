#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int count=0;
void option(int item);
int start(int game);
int name(int view);
int help(int r);
int question(int two);
int questions(int four);
int questionss(int six);
int powerplay(int op);
int googly(int io);
int scocover(int uo);
int googlyp(int one);
int googlys(int two);
int googlyss(int three);
int main()
{
	int b,c,f,item;
	char a,d,e,g,l;
	while(1)
	{
		printf("\t\t\t\t\t\t-:SIGN UP:- ");
	    printf("\n\n\t\t\tUsername :- ");
	    scanf("\n%s",&a);
	    printf("\n\t\t\tPassword :-");
	    scanf("\n%d",&b);
	    printf("\n\t\t\tConfirm Password :-");
	    scanf("\n%d",&c);
	    if(b==c)
	    {
		   printf("\n\t\t\t-:Congratulations ! your Account has been created:-\n\n");
		   break;
	    }
	    else
	   {
		printf("\n\t\t\topps ! sorry , Not match. Try again\n\n");
	   }
	}
    printf("\n\t\t\tPress any Key to continue...............\n\n");
	scanf("%s",&d);
	if(d!=0)
	{
		while(1)
	{
		printf("\n\n\t\t\t\t\t\t-:LOG IN:-");
	printf("\n\t\t\tName: ");
	scanf("%s",&e);
	printf("\n\t\t\tPassword:- ");
	scanf("%d",&f);
	if(c==f || b==f)
	{
		printf("\n\t\t\t--------------------------------------------------------");
		printf("\n\t\t\t........................................................\n\n");
		printf("\n\t\t\t\t-::     Welcome To The Quize Game::-\n\n");
		printf("\n\t\t\t........................................................");
		printf("\n\t\t\t--------------------------------------------------------\n\n");
		break; 
	}
	else
	{
		printf(" \n\n\t\t\tNot match . try again to Log in ......................\n\n");
	}
	}
	}
	printf("\n\t\t\tPress any Key to continue...............\n\n");
	scanf("%s",&l);
	if(l!=0)
	option(item);
	return 0;
	
	
}
void option(int item)
{
	int o,game,view,score,s,r;
	printf("\n\n\t\t\t> Press 1 to Start The Game\n\n");
	printf("\n\n\t\t\t> Press 2 to View The Score\n\n");
	printf("\n\n\t\t\t> Press 4 for Help\n\n");
	printf("\n\n\t\t\t> Press 5 to quit\n\n");
	while(1)
	{
		printf("\n\n\t\t\tChoose any option::");
	    scanf("%d",&o);
		switch(o)
		{
			case 1:
				printf("\n\n\t\t\t-:Start The Game:-");
				start(game);
			    break;
			    case 2:
			    	printf("\n\n\t\t\t-:View Your Score:-");
			    	name(view);
			    	break;
			    	case 3:
			    		printf("\n\n\t\t\t-:Help:-");
			    		help(r);
			    		break;
			    		case 4:
			    				exit(1);
			    				break;
			    				default:
			    					printf("wrong value");
			    					
		}
	}
}
int start(int game)
{
	int p,two,s,op,io,uo,item;
	printf("\n->Press 1 to play power play round ");
	printf("\n->Press 2 to play Googly round ");
	printf("\n->Press 3 to play scocover round ");
	printf("\n->Press 4 return previous Menu ");
	while(1)
	{
		printf("\nchoose any option:: ");
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				printf("\npower play round:");
				powerplay(op);
				break;
				case 2:
					printf("\nGoogly round:");
					googly(io);
					break;
					case 3:
						printf("\nscocover round:");
						scocover(uo);
						break;
						case 4:
							option(item);
							break;
							default :
								printf("\nwrong value.try again");
		}
	}
}
int name(int view)
{
	int o,x;
	printf("\n->Press 1 to check power play round Result : ");
	printf("\n->Press 2 to check Googly round Result : ");
	printf("\n->Press 3 to check scocover round Result : ");
	while(6)
	{
		printf("Enter the choice :: ");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				
				printf("%d",x);
		}
	}
}
int help(int r)
{
	printf(" \nwelcome to quizemaza game..It is created by Arghadip Biswas.\n");
	printf("\nso ,Let us see some Rules for playing game :- \n");
	printf("\n1. power play round : There will be 3 types of run questions (2/4/6)....\n");
	printf("\nfor 2 run question, you will get 2 options & 2 points.");
	printf("\nfor 4 run question, you will get 3 options & 4 points.");
	printf("\nfor 6 run question, you will get 4 options & 6 points.");
	printf("\n\n\n2. Googly round : There will be 3 rounds..you will get 6 points for each questions.");
	printf("\n\n\n3. scocover round : There will be 12 questions ....you will get 1 points for each questions. ");
}
int powerplay(int op)
{
	int p,two,four,six,game;
	printf("\n\nRun(2/4/6): ");
	scanf("%d",&p);
	switch(p)
	{
		case 2:
			printf("\nYou have choosen the question of 2 RUN: ");
			question(two);
			break;
			case 4:
				printf("\nYou have choosen the question of 4 RUN: ");
				questions(four);
				break;
				case 6:
					printf("\nYou have choosen the question of 6 RUN: ");
					questionss(six);
					break;
					default:
						printf("\nwrong value .Please Try again.");
	}
	start(game);
}
int googly(int io)
{
	int k,one,two,three,game;
	printf("\nGoogly No: ");
	scanf("%d",&k);
	switch(k)
	{
		case 1:
			printf("\nGoogly 1: ");
			googlyp(one);
			break;
			case 2:
				printf("\nGoogly 2: ");
				googlys(two);
				break;
				case 3:
					printf("\nGoogly 3: ");
					googlyss(three);
					break;
					default:
						printf("\nwrong value .Please Try again.");
	}
	start(game);
}
int scocover(int uo)
{
	int game,ans,b,s=0,view;
	char h,n;
	printf("\nyou will get 12 questions:");
	printf("\n\nReady to play?(1/0) ");
	scanf("%d",&b);
	if(b==1)
	{
		printf("\nQ(1). Frames from one LAN can be transmitted to another LAN via the device?");
		printf("\n1. Router   2. Bridge");
		printf("\n3. Repeater 4. Modem");
        printf("\n\nYour answer: ");  
        scanf("%d",&ans);  
        if(ans==2)
		{
		  printf("\nCorrect ans....\n");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 2.Bridge");  
	        count--;
		  }
	      
	    printf("\nQ(2). Which of the following condition is used to transmit two packets over a medium at the same time?");
		printf("\n1. Contention   2. Collision");
		printf("\n3. Synchronous 4. Asynchronous");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 2.Collision"); 
	        count--;
		  }
		  
		printf("\nQ(3). Epsom (England) is the place associated with ?");
		printf("\n1. Horse racing   2. Polo");
		printf("\n3. Shooting 4. Snooker");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 1.Horse racing");  
		    count--; 
		  }
		  
		printf("\nQ(4). Fastest shorthand writer was ?");
		printf("\n1. Dr. G. D. Bist   2. J.R.D. Tata");
		printf("\n3. J.M. Tagore 4.  Khudada Khan");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 1.Dr. G. D. Bist");
		    count--;  
		  }
		  
		printf("\nQ(5). FFC stands for ?");
		printf("\n1.Foreign Finance Corporation   2. Film Finance Corporation");
		printf("\n3. Federation of Football Council 4.None of the above");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 2.Film Finance Corporation");  
	        count--;
		  }
	      
	    printf("\nQ(6). Garampani sanctuary is located at ?");
		printf("\n1.Junagarh, Gujarat   2. Diphu, Assam");
		printf("\n3. Kohima, Nagaland   4. Gangtok, Sikkim");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 2.Diphu, Assamn"); 
	        count--;
		  }
	      
	    printf("\nQ(7). Garampani sanctuary is located at ?");
		printf("\n1.Junagarh, Gujarat   2. Diphu, Assam");
		printf("\n3. Kohima, Nagaland   4. Gangtok, Sikkim");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 2.Diphu, Assamn"); 
	        count--;
		  }
	      
	    printf("\nQ(8). Eritrea, which became the 182nd member of the UN in 1993, is in the continent of  ?");
		printf("\n1. Asia   2. Africa");
		printf("\n3. Europe   4. Australia");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	     {
	    	printf("\nincorrect ans....correct ans is 2.Africa"); 
	        count--;
		 }
	      
	    printf("\nQ(9). Which of the following TCP/IP protocol is used for transferring electronic mail messages from one machine to another ?");    
		printf("\n1. FTP   2. SNMP");
		printf("\n3. SMTP   4. RPC");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 3.SMTP"); 
	        count--;
		  }
	      
	    printf("\nQ(10). Which of the following device is used to connect two systems, especially if the systems use different protocols ?");    
		printf("\n1. hub   2. bridge");
		printf("\n3. gateway   4. repeate");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 3.gateway"); 
	        count--;
		  }
	      
	    printf("\nQ(11). The slowest transmission speeds are those of ?");    
		printf("\n1. twisted-pair wire   2. coaxial cable");
		printf("\n3. fiber-optic cable   4.  microwaves");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 1. twisted-pair wirey"); 
	        count--;
		  }
	      
	    printf("\nQ(12). What is the port number for NNTP? ?");    
		printf("\n1. 119   2. 80");
		printf("\n3. 79    4. 70");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)
		{
		  printf("\nCorrect ans....");
		  count+=1;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 1. 119"); 
	        count--;
		  }
		  s=s+count;
		  printf("%d",s);
	}
	else if(b==0)
	{
		printf("\nback to previous menu(5/0)?");
		scanf("%d",&h);
		if(h)
		{
			start(game);
		}
		else
		{
			printf("chal hat,,r koto option debo tke ,,kichutei mon vore na");
		}
	}
	else
	{
		printf("wrong value ..try again..");
		scocover(uo);
	}
	
 start(game);
}
int question(int two)
{
	int ans,x,view;
	    printf("\nQ. Hitler party which came into power in 1933 is known as ?");    
		printf("\n1. Nazi Party   2. Labour Party");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)
		{
		  printf("\nCorrect ans....");
		  count+=2;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 1. Nazi Party"); 
	        count--;
		  }
		  x=x+count;
}
int questions(int four)
{
	int ans,g,view;
	    printf("\nQ. For which of the following disciplines is Nobel Prize awarded ?");    
		printf("\n1. Literature, Peace and Economics   2. Physiology or Medicine");
		printf("\n   3. All of the above    ");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==3)
		{
		  printf("\nCorrect ans....");
		  count+=4;
		  
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 3. All of the above"); 
	        count--;
		  }
		  g=g+count;
}
int questionss(int six)
{
	int ans,h,view;
	      printf("\nQ. Recycling bin for a hard Disk ?");    
		printf("\n1. You can set different size for each recycle bin   2. You can choose which recycle bin to use to store your deleted files");
		printf("\n3. You can make any one of them default recycle bin    4. None of above");
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)
		{
		  printf("\nCorrect ans....");
		  count+=6;
		
	    }
	    else
	      {
	      	printf("\nincorrect ans....correct ans is 1. You can set different size for each recycle bin"); 
	        count--;
		  }
		  h=h+count;
}
int googlyp(int one)
{
	int v,c,view;
	printf("\nQ.What is the one thing that all wise men, regardless of their religion or politics, agree is between heaven and earth? What is it?");
	printf("\n 1. OR     2. AND\n");
	printf("\n 3. NOT   4. NOR");
	printf("\nenter your ans: ");
	scanf("%d",&v);
	if(v==2)
	{
		printf("\nCorrect ans....");
		count+=6;
		
	}
	else
	printf("\nincorrect ans....correct ans is 2.AND");
	c=c+count;
}
int googlys(int two)
{
	int t,E,a,view;
	printf("\nQ.What letter comes next: O T T F F S S ?");
	printf("\n 1. O     2. A\n");
	printf("\n 3. E   4. S");
	printf("\nenter your ans: ");
	scanf("%d",&t);
	if(t== 3) 
	{
		printf("\nCorrect ans....");
		count+=6;
	}
	else
	{
		printf("\nwrong ans.........3. E is the correct ans");
	}
	a=a+count;
}
int googlyss(int three)
{
	int i,M,z,view;
	printf("\nQ.It occurs once in a minute, twice in a moment, but never in an hour.");
	printf("\n 1. O     2. A\n");
	printf("\n 3. E   4. M");
	printf("\nenter your ans: ");
	scanf("%d",&i);
	if(i== 4) 
	{
		printf("\nCorrect ans....");
		count+=6;
	}
	else
	{
		printf("\nwrong ans.......4. M is the correct ans..");
	}
	z=z+count;
}
