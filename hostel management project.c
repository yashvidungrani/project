#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
int rid,cnum,schar,pstatus,age,pdate,rtype,sstatus,stype,rstatus,gen;
int pay;
char name[20],mhis[10],cname[20];

printf("\n Enter  Room id: ");
scanf("%d",&rid);


printf("\n Enter Student Name: ");
scanf("%s",name);

printf("\n Enter Contact Number: ");
scanf("%d",&cnum);

printf("\n Pass status: ");
printf("\n Press 1 for inactive\n Press 0 for active\n");
scanf("%d",&pstatus);




printf("\n Age: ");
scanf("%d",&age);

printf("\nenter Medical history: ");
scanf("%s",mhis);

printf("\n Pass expiry date: ");
scanf("%d",&pdate);

printf("\n Enter your gender: ");
printf("\n press 1 for female\n press 0 for male\n  ");
scanf("%d",&gen);


printf("\n Colleg name: ");
scanf("%s",cname);

printf("\nRoom type: ");
printf("\n Press 1 for Deluxe\n press 0 for Simple\n  ");
scanf("%d",&rtype);

printf("\nStudent Status: ");
printf("\n press 1 for New Student\n press 0 Existing Student\n  ");
scanf("%d",&sstatus);

printf("\nStudent type: ");
printf("\n press 1 for Medical\n press 0 for Engineering:\n  ");
scanf("%d",&stype);

printf("Referral status: ");
printf("\n press  1 if refferd \n press 0 if not refferd\n  ");
scanf("\n %d",&rstatus);


if(gen==1){
    if(rtype==1&&sstatus==1&&stype==1&&pstatus==1&&rstatus==1){
    pay=9000+400-500-1000+200-500;
    
	
	printf("\n| Room_id     | Contact Number           | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                       | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge           | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable               | female           | 3000            | %d                  |                  |",age,pay);

    }
	
	else if(rtype==1&&sstatus==1&&stype==1&&pstatus==1&&rstatus==0){
    pay=9000+400-500-1000+200;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2500            | %d                  |                  |",age,pay);

    }
	
	else if(rtype==1&&sstatus==1&&stype==1&&pstatus==0&&rstatus==1){
    pay=9000+400-500-1000-500;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 3000            | %d                  |                  |",age,pay);

    }
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==1&&rstatus==1){
    pay=9000+400-500+200-500;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2000            | %d                  |                  |",age,pay);

    }
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==1&&rstatus==1){
    pay=9000+400-1000+200-500;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2500            | %d                  |                  |",age,pay);

    }
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==1&&rstatus==1){
    pay=9000-500-1000+200-500;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 3000            | %d                  |                  |",age,pay);
    
	}
	
	else if(rtype==1&&sstatus==1&&stype==1&&pstatus==0&&rstatus==0){
    pay=9000+400-500-1000;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 2500            | %d                  |                  |",age,pay);
    
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==1&&rstatus==0){
    pay=9000+400-500+200;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 1500            | %d                  |                  |",age,pay);
    
	}
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==1&&rstatus==0){
    pay=9000+400-1000+200;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2000            | %d                  |                  |",age,pay);
    
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==1&&rstatus==0){
    pay=9000-500-1000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==0&&rstatus==1){
    pay=9000+400-500-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==0&&rstatus==1){
    pay=9000+400-1000-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 2500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==0&&rstatus==1){
    pay=9000-500-1000-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 3000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==0&&pstatus==1&&rstatus==1){
    pay=9000+400+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==0&&pstatus==1&&rstatus==1){
    pay=9000-500+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==1&&pstatus==1&&rstatus==1){
    pay=9000-1000+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==0&&rstatus==0){
    pay=9000+400-500;
   
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==0&&rstatus==0){
    pay=9000+400-1000;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 2500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==0&&rstatus==0){
    pay=9000-500-1000;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 2500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==0&&pstatus==1&&rstatus==0){
    pay=9000+400+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==0&&pstatus==1&&rstatus==0){
    pay=9000-500+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==1&&pstatus==1&&rstatus==0){
    pay=9000-1000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==0&&pstatus==0&&rstatus==0){
    pay=9000+400;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==0&&pstatus==0&&rstatus==0){
    pay=9000-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==1&&pstatus==0&&rstatus==0){
    pay=9000-1000;
   
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==0&&pstatus==1&&rstatus==0){
    pay=9000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | female           | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==0&&pstatus==0&&rstatus==1){
    pay=9000-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==0&&pstatus==0&&rstatus==0){
    pay=9000;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | female           | 1000            | %d                  |                  |",age,pay);
	
	}
}
	
	
if(gen==0){
    if(rtype==1&&sstatus==1&&stype==1&&pstatus==1&&rstatus==1){
    pay=10000+400-500-1000+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==1&&pstatus==1&&rstatus==0){
    pay=10000+400-500-1000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==1&&pstatus==0&&rstatus==1){
    pay=10000+400-500-1000-500;
   
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==1&&rstatus==1){
    pay=10000+400-500+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==1&&rstatus==1){
    pay=10000+400-1000+200-500;
   
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==1&&rstatus==1){
    pay=10000-500-1000+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==1&&pstatus==0&&rstatus==0){
    pay=10000+400-500-1000;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==1&&rstatus==0){
    pay=10000+400-500+200;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 500             | %d                  |                  |",age,pay);
	
    }
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==1&&rstatus==0){
    pay=10000+400-1000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==1&&rstatus==0){
    pay=10000-500-1000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==0&&rstatus==1){
    pay=10000+400-500-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==0&&rstatus==1){
    pay=10000+400-1000-500;
   
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==0&&rstatus==1){
    pay=10000-500-1000-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 2000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==0&&pstatus==1&&rstatus==1){
    pay=10000+400+200-500;
   
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 500             | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==0&&pstatus==1&&rstatus==1){
    pay=10000-500+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==1&&pstatus==1&&rstatus==1){
    pay=10000-1000+200-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicabl           | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==1&&stype==0&&pstatus==0&&rstatus==0){
    pay=10000+400-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 500             | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==1&&pstatus==0&&rstatus==0){
    pay=10000+400-1000;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==1&&pstatus==0&&rstatus==0){
    pay=10000-500-1000;
 
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 1500            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==0&&pstatus==1&&rstatus==0){
    pay=10000+400+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 0               | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==0&&pstatus==1&&rstatus==0){
    pay=10000-500+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 500             | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==1&&pstatus==1&&rstatus==0){
    pay=10000-1000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==1&&sstatus==0&&stype==0&&pstatus==0&&rstatus==0){
    pay=10000+400;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 0               | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==1&&stype==0&&pstatus==0&&rstatus==0){
    pay=10000-500;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 500             | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==1&&pstatus==0&&rstatus==0){
    pay=10000-1000;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 1000            | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==0&&pstatus==1&&rstatus==0){
    pay=10000+200;
    
    
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | inactive        | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | applicable          | male             | 0               | %d                  |                  |",age,pay);
	
	}
	
	else if(rtype==0&&sstatus==0&&stype==0&&pstatus==0&&rstatus==1){
    pay=10000-500;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 500             | %d                  |                  |",age,pay);
	
    }
	
	else if(rtype==0&&sstatus==0&&stype==0&&pstatus==0&&rstatus==0){
    pay=10000;
    
	
	printf("\n| Room_id     | Contact Number      | Student Name     | Pass_Status     | Medical_history     | College Name     |");
	printf("\n| %d          | %d                  | %s               | active          | %s                  | %s               |",rid,cnum,name,mhis,cname);
	printf("\n| Age         | Service charge      | Gender           | Discount offered| Total Bill to payed |                  |");
	printf("\n| %d          | not applicable      | male             | 0               | %d                  |                  |",age,pay);
	
    }
}
	getch();
}	
