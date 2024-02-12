#include<stdio.h>
#include<conio.h>
#include<string.h>
void login();
void playerlogin();
void sport();
void staff();
void players();
void sponsors();
void prizes();
void diet();
void categor();
//sports
void addsport();
void displaysport();
void searchsport();
void deletesport();
struct sport
{
int id;
char name[10];
char fee[7];

};
struct sport s;
//player
void addplayer();
void displayplayer();
void searchplayer();
void deleteplayer();

struct player
{
int id;
char name[7];
char gender[3];
char contact[11];
char sportsname[7];
};

struct player p;
//staff
void addstaff();
void displaystaff();
void searchstaff();
void deletestaff();

struct staff
{
int id;
char name[10];
char salary[7];
char contact[7];
char category[8];
};

struct staff st;
//sponsor
void addsponsor();
void displaysponsor();
void searchsponsor();
void deletesponsor();

struct sponsor
{
int id;
char name[10];
};
struct sponsor sp;
//prizes
void addprizes();
void displayprizes();
void searchprizes();
void deleteprizes();

struct prizes
{
int id;
char name[7];
char position[2];
char team[12];
char sportsname[10];
char title[10];
};

struct prizes pr;
//diet
void adddiet();
void displaydiet();
void searchdiet();
void deletediet();
void catgory();

struct diet
{
int id;
char category[10];
char carbs[7];
char fat[3];
char iron[11];
char protein[7];
};

struct diet d;
main()
{

int ch;
char username[20];
char userpassword[20];
char user[20];
char pass[20];


    printf("\n\t **** Welcome to Sports Management System ****");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\t\t");
    printf("\n\t\t [1] to login as an admin");
    printf("\n\t\t [2] to login as a player");
    printf("\n\t\t [0] Exit\n\t\t=================\n\t\t");
    printf("Enter the choice:");

    scanf("%d",&ch);

    switch(ch)
    {
    case 0:
    printf("\n\n\t\tAre you sure you want to exit?");
    break;
    shape:
    case 1:
        


        printf("\n\n\t\t username:");
        scanf("%s", &username);

        printf("\n\t\t Password:");
        scanf("%s", &userpassword);
        // printf("\n\n****\tEnter Any Key to Continue\t****");
	    // getch();

	    if(!strcmp(username, "exampleuser") && !strcmp(userpassword, "example123")){
	    system("cls");	
		printf("\n\n\t\t****\tLogin Successful\t****\n");
		login();
	    }else{
	    system("cls");	
		printf("\n\n****\tProvided Information Incorrect. Please Provide Right Information!!\t****");
		goto shape;
	    }
    //    return 0;
       player:
       case 2:
       	printf("\n\n\t\t username:");
        scanf("%s", &user);

        printf("\n\t\t Password:");
        scanf("%s", &pass);
        // printf("\n\n****\tEnter Any Key to Continue\t****");
	    // getch();

	    if(!strcmp(user, "user") && !strcmp(pass, "123")){
	    system("cls");
		printf("\n\n****\tLogin Successful\t****");
		playerlogin();
	    }else{
	    system("cls");
		printf("\n\n****\tProvided Information Incorrect. Please Provide Right Information!!\t****");
		goto player;
       
}}}


void login()
{
	int c;
	h:
	printf("\n\t **** \tWelcome to Sports Management System \t****");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\t\t");
    printf("\n\t\t[1] SPORTS");
	printf("\n\t\t[2] STAFF");
	printf("\n\t\t[3] PLAYERS");
	printf("\n\t\t[4] SPONSORS");
	printf("\n\t\t[5] DIET");
	printf("\n\t\t[6] PRIZES");
	printf("\n\t\t[7] LOGOUT\n\t\t=====================\n");
    printf("\t\tEnter the choice:");

    scanf("%d",&c);

    switch(c)
    {
    
     
    case 1: system("cls");
	    	sport();
	    	break;
	case 2: system("cls");
	    	staff();
	    	break;
	case 3: system("cls");
	    	players();
	    	break;
	case 4: system("cls");
	    	sponsors();
	    	break;
	case 5: system("cls");
	    	diet();
	    	break;
	case 6: system("cls");
	    	prizes();
	    	break;	
	case 7: system("cls");
	    	main();
	    	break;				
	default:
	printf("\n\n\t\twrong choice!!! Please Try Again");
	printf("\n\n\t\tEnter 1 to 5 only");
	printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	getch();
	system("cls");
	goto h;							    	
        
	
}}
void playerlogin()
{
	int c;
	h:
	printf("\n\t **** \tWelcome to Sports Management System \t****");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\t\t");
    printf("\n\t\t[1] DIET");
//	printf("\n\t\t[2] STAFF");
//	printf("\n\t\t[3] PLAYERS");
//	printf("\n\t\t[4] SPONSORS");
//	printf("\n\t\t[5] DIET");
	printf("\n\t\t[2] LOGOUT\n\t\t=====================\n");
    printf("\t\tEnter the choice:");

    scanf("%d",&c);

    switch(c)
    {
    
     
    case 1: system("cls");
	    	displaydiet();
	    	break;
	case 2: system("cls");
	    	main();
	    	break;
/*	case 3: system("cls");
	    	players();
	    	break;
	case 4: system("cls");
	    	sponsors();
	    	break;
	case 5: system("cls");
	    	prizes();
	    	break;
	case 6: system("cls");
	    	diet();
	    	break;	*/		
	default:
	printf("\n\n\t\twrong choice!!! Please Try Again");
	printf("\n\n\t\tEnter 1 to 5 only");
	printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	getch();
	system("cls");
	goto h;							    	
        
	
}}
void players()
{
	int sh;
    system("cls");
     
     while(sh!=5)
     {
     	s:
     	system("cls");
     	printf("\n\t\t ****Player ****\n\t\t=====================\t\t");
	    printf("\n\t\t[1] add a player");
	    printf("\n\t\t[2] Display");
	    printf("\n\t\t[3] Search");
	    //printf("\n\t\t[4] Edit");
	    printf("\n\t\t[4] Delete");
	//  printf("\n\t\t[6] Menu");
	    printf("\n\t\t[5] Menu\n\t\t=====================");
	    printf("\n\n\t\tEnter the choice:");
	    scanf("%d",&sh);
	    switch(sh)
	    {
	    	case 1: system("cls");
	    	        addplayer();
	    	        break;
	    	case 2: system("cls");
			        displayplayer();
					break;
			case 3: system("cls");
			        searchplayer();
					break;
			case 4: system("cls");
			        deleteplayer();
					break;
			case 5: system("cls");
			        login();
					break;						
//			case 5: exit(1);
			default:
	        printf("\n\n\t\twrong choice!!! Please Try Again");
	        printf("\n\n\t\tEnter 1 to 5 only");
	        printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	        getch();
	        system("cls");
 	        goto s;	
			        		        
		}
		
		printf("\n\n\t\tpress any key");
		getch();
	 }
}
void addplayer()
{
	FILE *fptr;
	fptr=fopen("player.txt","ab+");
	if(fptr==NULL)
	{
		printf("\n\t\t ERROR cannot open file");
		return;
	}
	
	printf("\t previous stored data");
	displayplayer();
	
	printf("\n\n\t*****Enter New Player******\n\n");
	printf("\n\t\tEnter the Player id\n");  
    scanf("%d",&p.id);
	fflush(stdin);
    printf("\n\t\tEnter the name of the Player \n");  
	gets(p.name);   
    printf("\n\t\tEnter the Gender\n");   
    gets(p.gender);
    printf("\n\t\tEnter the Sports Name\n");   
    gets(p.sportsname);
    printf("\n\t\tEnter the Contact\n");   
    gets(p.contact);
   fwrite(&p, sizeof(p),1,fptr);
    {
    	
    	printf("\n\n\t record added succesfully");
	}
	fclose(fptr);
	printf("\n\t\t updated record");
	displayplayer();
}

void displayplayer()
{
	FILE *fptr;
	fptr=fopen("player.txt","rb");
	
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	printf("\n******************** LIST OF ALL Player RECORDS ********************\n");
    printf("\n  ID\t\tName  \t Gender\t   Sports Name \tContact\n");
    printf("-----------------------------------------------------------------------");

	while(fread(&p,sizeof(p),1,fptr)==1)
	{
	
		printf("\n %-13d%-12s%-13s%-10s%-2s\n",p.id,p.name,p.gender,p.sportsname,p.contact);
	}
	fclose(fptr);
}
void searchplayer()
{
	int r,flag=0;
	FILE *fptr;
	fptr=fopen("player.txt","rb");
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	
	printf("\n\n\tenter the id which you want to search");
	scanf("%d",&r);
	while(fread(&p,sizeof(p),1,fptr)>0&&flag==0)
	{
		if(p.id==r)
		{
			flag=1;
			printf("\n\n\tSearch Succesfull: \n\n");
			printf("\n******************** LIST OF ALL Player RECORDS ********************\n");
            printf("\n  ID\t\tName  \t Gender\t   Sports Name \tContact\n");
            printf("-----------------------------------------------------------------------");
			printf("\n %-13d%-12s%-13s%-10s%-2s\n",p.id,p.name,p.gender,p.sportsname,p.contact);
		}
	}
	if(flag==0)
	{
		printf("\n\n\tNO Search Found!!!!\n");
	}
	fclose(fptr);
}
void deleteplayer()
{
	
	FILE *fptr,*fttr;
    fptr=fopen("player.txt","r");
    fttr=fopen("player1.txt","w");
    int ID,found=0;
    displayplayer();
    printf("Enter ID to search\n");
    scanf("%d",&ID);
    while(fread(&p,sizeof(p),1,fptr))
    {
        if(p.id==ID)
        {
            found=1;
        }
        else
            fwrite(&p,sizeof(p),1,fttr);
    }
    fclose(fptr);
    fclose(fttr);
    if(found)
    {
        fttr = fopen("player1.txt","r");
        fptr = fopen("player.txt","w");

        while(fread(&p,sizeof(p),1,fttr))
        {
            fwrite(&p,sizeof(p),1,fptr);
        }
        fclose(fptr);
        fclose(fttr);
    }
    else
    {
        printf("Record is not found!\n");
    }
    fclose(fptr);
    system("cls");
    printf(" Record is Deleted successfully\n");
    displayplayer();

}
void sponsors()
{
	int ph;
    system("cls");
     
     while(ph!=5)
     {
     	a:
     	system("cls");
     	printf("\n\t\t ****SPONSOR ****\n\t\t=====================\t\t");
	    printf("\n\t\t[1] add a sponsor");
	    printf("\n\t\t[2] Display");
	    printf("\n\t\t[3] Search");
	    printf("\n\t\t[4] Delete");
	    printf("\n\t\t[5] Menu");	    
	    printf("\n\n\t\tEnter the choice:");
	    scanf("%d",&ph);
	    switch(ph)
	    {
	    	case 1: system("cls");
	    	        addsponsor();
	    	        break;
	    	case 2: system("cls");
			        displaysponsor();
					break;
			case 3: system("cls");
			        searchsponsor();
					break;
			case 4: system("cls");
			        deletesponsor();
					break;				
			case 5: system("cls");
			        login();
			        break;
			default:
	        printf("\n\n\t\twrong choice!!! Please Try Again");
	        printf("\n\n\t\tEnter 1 to 5 only");
	        printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	        getch();
	        system("cls");
 	        goto a;	
			        		        
		}
		
		printf("\n\n\t\tpress any key");
		getch();
	 }
}
void addsponsor()
{
	FILE *fptr;
	fptr=fopen("spon.txt","ab+");
	if(fptr==NULL)
	{
		printf("\n\t\t ERROR cannot open file");
		return;
	}
	
	printf("\t previous stored data");
	displaysponsor();
	
	printf("\n\n\t*****Enter New Sponsor******\n\n");
	printf("\n\t\tEnter the Sponsor id\n");  
    scanf("%d",&sp.id);
	fflush(stdin);
    printf("\n\t\tEnter the name of the sponsor \n");  
    //scanf("%s", &s.name);
	gets(sp.name);   
//    printf("\n\t\tEnter the fee\n");  
    //scanf("%s", &s.fee);  
 //   gets(s.fee);
   fwrite(&sp, sizeof(sp),1,fptr);
    {
    	
    	printf("\n\n\t record added succesfully");
	}
	fclose(fptr);
	printf("\n\t\t updated record");
	displaysponsor();
}

void displaysponsor()
{
	FILE *fptr;
	fptr=fopen("spon.txt","rb");
	
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	printf("\n******************** LIST OF ALL Sponsor RECORDS ********************\n");
    printf("\n ID\t\tName\n");
    printf("-----------------------------------------------------------------------");
//	printf("\n\t\t\t\nDetails are as follows");
//	printf("\n\t\t\t\nID\tNAME\tFee\n\n");
	while(fread(&sp,sizeof(sp),1,fptr)==1)
	{
	//	printf("\n%d\t%s\t%s\n",s.id,s.name,s.fee);
		printf("\n %-13d%-22s%\n",sp.id,sp.name);
	}
	fclose(fptr);
}
void searchsponsor()
{
	int r,flag=0;
	FILE *fptr;
	fptr=fopen("spon.txt","rb");
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	
	printf("\n\n\tenter the id which you want to search");
	scanf("%d",&r);
	while(fread(&sp,sizeof(sp),1,fptr)>0&&flag==0)
	{
		if(sp.id==r)
		{
			flag=1;
			printf("\n\n\tSearch Succesfull: \n\n");
			printf("\n******************** LIST OF ALL Sponsor RECORDS ********************\n");
            printf("\n ID\t\tName\n");
            printf("-----------------------------------------------------------------------");
		//	printf("\nID\tName\tFee\n\n");
		//	printf("%d\t%s\t%s\n",s.id,s.name,s.fee);
			printf("\n %-13d%-22s%\n",sp.id,sp.name);
		}
	}
	if(flag==0)
	{
		printf("\n\n\tNO Search Found!!!!\n");
	}
	fclose(fptr);
}
void deletesponsor()
{
	
	FILE *fptr,*fttr;
    fptr=fopen("spon.txt","r");
    fttr=fopen("spon1.txt","w");
    int ID,found=0;
    displaysponsor();
    printf("Enter ID to search\n");
    scanf("%d",&ID);
    while(fread(&sp,sizeof(sp),1,fptr))
    {
        if(sp.id==ID)
        {
            found=1;
        }
        else
            fwrite(&sp,sizeof(sp),1,fttr);
    }
    fclose(fptr);
    fclose(fttr);
    if(found)
    {
        fttr = fopen("spon1.txt","r");
        fptr = fopen("spon.txt","w");

        while(fread(&sp,sizeof(sp),1,fttr))
        {
            fwrite(&sp,sizeof(sp),1,fptr);
        }
        fclose(fptr);
        fclose(fttr);
    }
    else
    {
        printf("Record is not found!\n");
    }
    fclose(fptr);
    system("cls");
    printf(" Record is Deleted successfully\n");
    displaysponsor();

	
}
void staff()
{
	int h;
    system("cls");
     
     while(h!=5)
     {
     	b:
     	system("cls");
     	printf("\n\t\t ****STAFF ****\n\t\t=====================\t\t");
	    printf("\n\t\t[1] add a Staff");
	    printf("\n\t\t[2] Display");
	    printf("\n\t\t[3] Search");
	    //printf("\n\t\t[4] Edit");
	    printf("\n\t\t[4] Delete");
//	    printf("\n\t\t[6] Menu");
	    printf("\n\t\t[5] Menu\n\t\t=====================");
	    printf("\n\n\t\tEnter the choice:");
	    scanf("%d",&h);
	    switch(h)
	    {
	    	case 1: system("cls");
	    	        addstaff();
	    	        break;
	    	case 2: system("cls");
			        displaystaff();
					break;
			case 3: system("cls");
			        searchstaff();
					break;
			case 4: system("cls");
			        deletestaff();
					break;
			case 5: system("cls");
			        login();
					break;						
		//	case 5: exit(1);
			default:
	        printf("\n\n\t\twrong choice!!! Please Try Again");
	        printf("\n\n\t\tEnter 1 to 5 only");
	        printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	        getch();
	        system("cls");
 	        goto b;	
			        		        
		}
		
		printf("\n\n\t\tpress any key");
		getch();
	 }
}
void addstaff()
{
	FILE *fptr;
	fptr=fopen("staff.txt","ab+");
	if(fptr==NULL)
	{
		printf("\n\t\t ERROR cannot open file");
		return;
	}
	
	printf("\t previous stored data");
	displaystaff();
	
	printf("\n\n\t*****Enter New Staff******\n\n");
	printf("\n\t\tEnter the Staff id\n");  
    scanf("%d",&st.id);
	fflush(stdin);
    printf("\n\t\tEnter the name of the staff \n");  
    //scanf("%s", &s.name);
	gets(st.name);   
    printf("\n\t\tEnter the Salary\n");   
    gets(st.salary);
    printf("\n\t\tEnter the Category\n");   
    gets(st.category);
    printf("\n\t\tEnter the Contact\n");   
    gets(st.contact);
   fwrite(&st, sizeof(st),1,fptr);
    {
    	
    	printf("\n\n\t record added succesfully");
	}
	fclose(fptr);
	printf("\n\t\t updated record");
	displaystaff();
}

void displaystaff()
{
	FILE *fptr;
	fptr=fopen("staff.txt","rb");
	
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	printf("\n******************** LIST OF ALL Staff RECORDS ********************\n");
    printf("\n  ID\t\tName  \t Salary\t   Category \tContact\n");
    printf("-----------------------------------------------------------------------");

	while(fread(&st,sizeof(st),1,fptr)==1)
	{
	
		printf("\n %-13d%-12s%-13s%-10s%-2s\n",st.id,st.name,st.salary,st.category,st.contact);
	}
	fclose(fptr);
}
void searchstaff()
{
	int r,flag=0;
	FILE *fptr;
	fptr=fopen("staff.txt","rb");
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	
	printf("\n\n\tenter the id which you want to search");
	scanf("%d",&r);
	while(fread(&st,sizeof(st),1,fptr)>0&&flag==0)
	{
		if(st.id==r)
		{
			flag=1;
			printf("\n\n\tSearch Succesfull: \n\n");
			printf("\n******************** LIST OF ALL Staff RECORDS ********************\n");
            printf("\n  ID\t\tName  \t Salary\t   Category \tContact\n");
            printf("-----------------------------------------------------------------------");
			printf("\n %-13d%-12s%-13s%-10s%-2s\n",st.id,st.name,st.salary,st.category,st.contact);
		}
	}
	if(flag==0)
	{
		printf("\n\n\tNO Search Found!!!!\n");
	}
	fclose(fptr);
}
void deletestaff()
{
	
	FILE *fptr,*fttr;
    fptr=fopen("staff.txt","r");
    fttr=fopen("staff1.txt","w");
    int ID,found=0;
    displaystaff();
    printf("Enter ID to search\n");
    scanf("%d",&ID);
    while(fread(&st,sizeof(st),1,fptr))
    {
        if(st.id==ID)
        {
            found=1;
        }
        else
            fwrite(&st,sizeof(st),1,fttr);
    }
    fclose(fptr);
    fclose(fttr);
    if(found)
    {
        fttr = fopen("staff1.txt","r");
        fptr = fopen("staff.txt","w");

        while(fread(&st,sizeof(st),1,fttr))
        {
            fwrite(&st,sizeof(st),1,fptr);
        }
        fclose(fptr);
        fclose(fttr);
    }
    else
    {
        printf("Record is not found!\n");
    }
    fclose(fptr);
    system("cls");
    printf(" Record is Deleted successfully\n");
    displaystaff();

}
void sport()
{
	int ch;
    system("cls");
     
     while(ch!=5)
     {
     	c:
     	system("cls");
     	printf("\n\t\t ****SPORTS ****\n\t\t=====================\t\t");
	    printf("\n\t\t[1] add a sport");
	    printf("\n\t\t[2] Display");
	    printf("\n\t\t[3] Search");
	    //printf("\n\t\t[4] Edit");
	    printf("\n\t\t[4] Delete");
//	    printf("\n\t\t[6] Menu");
	    printf("\n\t\t[5] Menu\n\t\t=====================");
	    printf("\n\n\t\tEnter the choice:");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1: system("cls");
	    	        addsport();
	    	        break;
	    	case 2: system("cls");
			        displaysport();
					break;
			case 3: system("cls");
			        searchsport();
					break;
			case 4: system("cls");
			        deletesport();
					break;
			case 5: system("cls");
			        login();
					break;						
		//	case 5: exit(1);
			default:
	        printf("\n\n\t\twrong choice!!! Please Try Again");
	        printf("\n\n\t\tEnter 1 to 5 only");
	        printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	        getch();
	        system("cls");
 	        goto c;	
			        		        
		}
		
		printf("\n\n\t\tpress any key");
		getch();
	 }
}
void addsport()
{
	FILE *fptr;
	fptr=fopen("emp.txt","ab+");
	if(fptr==NULL)
	{
		printf("\n\t\t ERROR cannot open file");
		return;
	}
	
	printf("\t previous stored data");
	displaysport();
	
	printf("\n\n\t*****Enter New Sport******\n\n");
	printf("\n\t\tEnter the Sport id\n");  
    scanf("%d",&s.id);
	fflush(stdin);
    printf("\n\t\tEnter the name of the sport \n");  
    //scanf("%s", &s.name);
	gets(s.name);   
    printf("\n\t\tEnter the fee\n");  
    //scanf("%s", &s.fee);  
    gets(s.fee);
   fwrite(&s, sizeof(s),1,fptr);
    {
    	
    	printf("\n\n\t record added succesfully");
	}
	fclose(fptr);
	printf("\n\t\t updated record");
	displaysport();
}

void displaysport()
{
	FILE *fptr;
	fptr=fopen("emp.txt","rb");
	
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	printf("\n******************** LIST OF ALL Sports RECORDS ********************\n");
    printf("\n ID\t\tName \t\t  Fee\n");
    printf("-----------------------------------------------------------------------");
//	printf("\n\t\t\t\nDetails are as follows");
//	printf("\n\t\t\t\nID\tNAME\tFee\n\n");
	while(fread(&s,sizeof(s),1,fptr)==1)
	{
	//	printf("\n%d\t%s\t%s\n",s.id,s.name,s.fee);
		printf("\n %-13d%-22s%-12s%\n",s.id,s.name,s.fee);
	}
	fclose(fptr);
}
void searchsport()
{
	int r,flag=0;
	FILE *fptr;
	fptr=fopen("emp.txt","rb");
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	
	printf("\n\n\tenter the id which you want to search");
	scanf("%d",&r);
	while(fread(&s,sizeof(s),1,fptr)>0&&flag==0)
	{
		if(s.id==r)
		{
			flag=1;
			printf("\n\n\tSearch Succesfull: \n\n");
			printf("\n******************** LIST OF ALL Sports RECORDS ********************\n");
            printf("\n ID\t\tName \t\t  Fee\n");
            printf("-----------------------------------------------------------------------");
		//	printf("\nID\tName\tFee\n\n");
		//	printf("%d\t%s\t%s\n",s.id,s.name,s.fee);
			printf("\n %-13d%-22s%-12s%\n",s.id,s.name,s.fee);
		}
	}
	if(flag==0)
	{
		printf("\n\n\tNO Search Found!!!!\n");
	}
	fclose(fptr);
}
void deletesport()
{
	
	FILE *fptr,*fttr;
    fptr=fopen("emp.txt","r");
    fttr=fopen("emp1.txt","w");
    int ID,found=0;
    displaysport();
    printf("Enter ID to search\n");
    scanf("%d",&ID);
    while(fread(&s,sizeof(s),1,fptr))
    {
        if(s.id==ID)
        {
            found=1;
        }
        else
            fwrite(&s,sizeof(s),1,fttr);
    }
    fclose(fptr);
    fclose(fttr);
    if(found)
    {
        fttr = fopen("emp1.txt","r");
        fptr = fopen("emp.txt","w");

        while(fread(&s,sizeof(s),1,fttr))
        {
            fwrite(&s,sizeof(s),1,fptr);
        }
        fclose(fptr);
        fclose(fttr);
    }
    else
    {
        printf("Record is not found!\n");
    }
    fclose(fptr);
    system("cls");
    printf(" Record is Deleted successfully\n");
    displaysport();

	
}
void prizes()
{
	int xh;
    system("cls");
     
     while(xh!=5)
     {
     	d:
     	system("cls");
     	printf("\n\t\t ****Prizes ****\n\t\t=====================\t\t");
	    printf("\n\t\t[1] add a prizes");
	    printf("\n\t\t[2] Display");
	    printf("\n\t\t[3] Search");
	    printf("\n\t\t[4] Delete");
	    printf("\n\t\t[5] MENU\n\t\t=====================");
	    printf("\n\n\t\tEnter the choice:");
	    scanf("%d",&xh);
	    switch(xh)
	    {
	    	case 1: system("cls");
	    	        addprizes();
	    	        break;
	    	case 2: system("cls");
			        displayprizes();
					break;
			case 3: system("cls");
			        searchprizes();
					break;
			case 4: system("cls");
			        deleteprizes();
					break;				
			case 5: system("cls");
			        login();
			        break;
			default:
	        printf("\n\n\t\twrong choice!!! Please Try Again");
	        printf("\n\n\t\tEnter 1 to 5 only");
	        printf("\n\n\t\t****\tEnter Any Key to Continue\t****");
	        getch();
	        system("cls");
 	        goto d;	
			        		        
		}
		
		printf("\n\n\t\tpress any key");
		getch();
	 }
}
void addprizes()
{
	FILE *fptr;
	fptr=fopen("prizes.txt","ab+");
	if(fptr==NULL)
	{
		printf("\n\t\t ERROR cannot open file");
		return;
	}
	
	printf("\t previous stored data");
	displayprizes();
	
	printf("\n\n\t*****Enter New Prize******\n\n");
	printf("\n\t\tEnter the Player id\n");  
    scanf("%d",&pr.id);
	fflush(stdin);
    printf("\n\t\tEnter the name of the Player \n");  
	gets(pr.name);   
    printf("\n\t\tEnter the Title Of the prize\n");   
    gets(pr.title);
    printf("\n\t\tEnter the Sports Name\n");   
    gets(pr.sportsname);
    printf("\n\t\tTEAM/INDIVIDUAL\n");   
    gets(pr.team);
    printf("\n\t\tPosition\n");   
    gets(pr.position);
   fwrite(&pr, sizeof(pr),1,fptr);
    {
    	
    	printf("\n\n\t record added succesfully");
	}
	fclose(fptr);
	printf("\n\t\t updated record");
	displayprizes();
}

void displayprizes()
{
	FILE *fptr;
	fptr=fopen("prizes.txt","rb");
	
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	printf("\n******************** LIST OF ALL PRIZE RECORDS ********************\n");
    printf("\n  ID\t\tName  \t Title\t   Sports Name \tTEAM/INDIVIDUAL\tPOSITION\n");
    printf("-----------------------------------------------------------------------");

	while(fread(&pr,sizeof(pr),1,fptr)==1)
	{
	
		printf("\n %-13d%-12s%-13s%-10s%-17s%-10s\n",pr.id,pr.name,pr.title,pr.sportsname,pr.team,pr.position);
	}
	fclose(fptr);
}
void searchprizes()
{
	int r,flag=0;
	FILE *fptr;
	fptr=fopen("prizes.txt","rb");
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	
	printf("\n\n\tenter the id which you want to search");
	scanf("%d",&r);
	while(fread(&pr,sizeof(pr),1,fptr)>0&&flag==0)
	{
		if(pr.id==r)
		{
			flag=1;
			printf("\n\n\tSearch Succesfull: \n\n");
			printf("\n******************** LIST OF ALL Player RECORDS ********************\n");
            printf("\n  ID\t\tName  \t Gender\t   Sports Name \tContact\tPOSITION\n");
            printf("-----------------------------------------------------------------------");
			printf("\n %-13d%-12s%-13s%-10s%-17s%-2s\n",pr.id,pr.name,pr.title,pr.sportsname,pr.team,pr.position);
		}
	}
	if(flag==0)
	{
		printf("\n\n\tNO Search Found!!!!\n");
	}
	fclose(fptr);
}
void deleteprizes()
{
	
	FILE *fptr,*fttr;
    fptr=fopen("prizes.txt","r");
    fttr=fopen("prizes1.txt","w");
    int ID,found=0;
    displayprizes();
    printf("Enter ID to search\n");
    scanf("%d",&ID);
    while(fread(&pr,sizeof(pr),1,fptr))
    {
        if(pr.id==ID)
        {
            found=1;
        }
        else
            fwrite(&pr,sizeof(pr),1,fttr);
    }
    fclose(fptr);
    fclose(fttr);
    if(found)
    {
        fttr = fopen("prizes1.txt","r");
        fptr = fopen("prizes.txt","w");

        while(fread(&pr,sizeof(pr),1,fttr))
        {
            fwrite(&pr,sizeof(pr),1,fptr);
        }
        fclose(fptr);
        fclose(fttr);
    }
    else
    {
        printf("Record is not found!\n");
    }
    fclose(fptr);
    system("cls");
    printf(" Record is Deleted successfully\n");
    displayprizes();

}
void diet()
{
	int dh;
    system("cls");
     
     while(dh!=5)
     {
     	system("cls");
     	printf("\n\t\t ****Diet Plan ****\n\t\t=====================\t\t");
	    printf("\n\t\t[1] add a new Diet");
	    printf("\n\t\t[2] Display");
	    printf("\n\t\t[3] Search");
	    //printf("\n\t\t[4] Edit");
	    printf("\n\t\t[4] Delete");
//	    printf("\n\t\t[5] Menu");
	    printf("\n\t\t[5] Menu\n\t\t=====================");
	    printf("\n\n\t\tEnter the choice:");
	    scanf("%d",&dh);
	    switch(dh)
	    {
	    	case 1: system("cls");
	    	        adddiet();
	    	        break;
	    	case 2: system("cls");
			        displaydiet();
					break;
			case 3: system("cls");
			        searchdiet();
					break;
			case 4: system("cls");
			        deletediet();
					break;				
			case 5: system("cls");
			        login();
			        break;
			default: 
			         printf("\n\t\twrong choice");
			        		        
		}
		
		printf("\n\n\t\tpress any key");
		getch();
	 }
}
void adddiet()
{
	FILE *fptr;
	fptr=fopen("diet.txt","ab+");
	if(fptr==NULL)
	{
		printf("\n\t\t ERROR cannot open file");
		return;
	}
	
	printf("\t previous stored data");
	displaydiet();
	
	printf("\n\n\t*****Enter New DIET******\n\n");
	printf("\n\t\tEnter the DIET CATEGORY\n");  
    scanf("%d",&d.id);
 	fflush(stdin);
    printf("\n\t\tEnter the Amount of carbohydrate \n");  
	gets(d.carbs);   
    printf("\n\t\tEnter the Amount of fat\n");   
    gets(d.fat);
    printf("\n\t\tEnter the Amount of IRON\n");   
    gets(d.iron);
    printf("\n\t\tEnter the Amount of Protein\n");   
    gets(d.protein);
   fwrite(&d, sizeof(d),1,fptr);
    {
    	
    	printf("\n\n\t record added succesfully");
	}
	fclose(fptr);
	printf("\n\t\t updated record");
	displaydiet();
	
}
void displaydiet()
{
	FILE *fptr;
	fptr=fopen("diet.txt","rb");
	
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	categor();
	printf("\n******************** LIST OF ALL DIET PLANS ********************\n");
    printf("\n  CATEGORY\tFAT  \t CARBOHYDRATE\t   IRON \tPROTEIN\n");
    printf("-----------------------------------------------------------------------");

	while(fread(&d,sizeof(d),1,fptr)==1)
	{
	
		printf("\n %-13d%-14s%-16s%-18s%-2s\n",d.id,d.fat,d.carbs,d.iron,d.protein);
	}
	fclose(fptr);
}
void searchdiet()
{
	int flag=0;
	int r;
	FILE *fptr;
	fptr=fopen("diet.txt","rb");
	if(fptr==NULL)
	{
		printf("\n\t\t Error : cannot open the file");
		return;
	}
	displaydiet();
	
	printf("\n\n\tenter the CATEGORY which you want to search");
	scanf("%d",&r);
	while(fread(&d,sizeof(d),1,fptr)>0&&flag==0)
	{
		if(d.id==r)
		{
			flag=1;
			printf("\n\n\tSearch Succesfull: \n\n");
			printf("\n******************** LIST OF ALL Player RECORDS ********************\n");
            printf("\n CATEGORY\tFAT  \t CARBOHYDRATE\t   IRON \tPROTEIN\n");
            printf("-----------------------------------------------------------------------");
			printf("\n %-13d%-14s%-16s%-18s%-2s\n",d.id,d.fat,d.carbs,d.iron,d.protein);
		}
	}
	if(flag==0)
	{
		printf("\n\n\tNO Search Found!!!!\n");
	}
	fclose(fptr);
}

void deletediet()
{
		FILE *fptr,*fttr;
    fptr=fopen("diet.txt","r");
    fttr=fopen("diet1.txt","w");
    int found=0;
    int ID;
    displaydiet();
    printf("Enter CATEGORY YOU WANT to search\n");
    scanf("%s",&ID);
    while(fread(&d,sizeof(d),1,fptr))
    {
        if(d.id==ID)
        {
            found=1;
        }
        else
            fwrite(&d,sizeof(d),1,fttr);
    }
    fclose(fptr);
    fclose(fttr);
    if(found)
    {
        fttr = fopen("diet1.txt","r");
        fptr = fopen("diet.txt","w");

        while(fread(&d,sizeof(d),1,fttr))
        {
            fwrite(&d,sizeof(d),1,fptr);
        }
        fclose(fptr);
        fclose(fttr);
    }
    else
    {
        printf("Record is not found!\n");
    }
    fclose(fptr);
    system("cls");
    printf(" Record is Deleted successfully\n");
    displaydiet();
}
void categor()
{
	printf("\t\t__________________\n");
	printf("\t\t|----------------|\n");
	printf("\t\t|--CATEGORY LIST-|\n");
	printf("\t\t|1. CRICKET-     |\n");
	printf("\t\t|2. FOOTBALL-    |\n");
	printf("\t\t|3. HOCKEY-      |\n");
	printf("\t\t|4. TENNIS-      |\n");
	printf("\t\t|5. BADMINTON-   |\n");
	printf("\t\t|6. BASKETBALL-  |\n");
	printf("\t\t|7. TABLE-TENNIS-|\n");
	printf("\t\t__________________\n");
}
