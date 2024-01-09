#include<stdio.h> //Standard input output.
#include<conio.h> //when we use clrscr or getch then its use.
#include<string.h> //when we use strcpy then its use.
#include<process.h>// when we use exit then its use.
#include<math.h>// when we use pow() then its use.


void basic();
void add();
void add1();
void sub();
void sub1();
void product();
void area();
void inter();

void product1();
void divide();
void divide1();
void string();
void name();
void address();
void palstr();

void commp();
void big();
void big1();
void tall();
void mm();
void time();
void temp();
void tringle();
void angle();

void calculator();
void mod();
void factorial();
void rupees();
void lcm();
void pallen();
void rev();
void simple();
void compound();
void profit();

void number();
void dec_to_bin();
void dec_to_oct();
void dec_to_hex();
void bin_to_dec();
void bin_to_oct();
void bin_to_hex();
void oct_to_dec();
void oct_to_bin();
void oct_to_hex();
void hex_to_dec();
void hex_to_bin();
void hex_to_oct();
void array();
void singly();
void matrix();
void even();
void even1();
void odd1();
void odd2();

void doubley();
void student();
void emp();
void cons();
void same();
void pro();
void sum();
void trans();
void copy();
void trace();
void ds();
void triply();
void ad3();
void asitis();

void student1();
void student2();
void employee();
void admission();
struct address
{
char vill[20],ps[20],dist[15],po[20];
};
struct student
{
int roll,m1,m2,m3,total;
float per;
char name[20],div[6];
struct address a;
};
struct employee
{
int empno,bs;
float da,ta,hra,tax,gross,pay;
char empname[20];
struct address a;
};
struct admission
{
int adno,preyear,session1,session2,totalsub,marks;
float per;
struct address a;
};
struct student1
{
int roll,m1,m2,m3,total;
float per;
char name[20],div[6];
struct admission ad;

};
 struct employee1
 {
 int empno,bs;
 float da,ta,hra,tax,gross,pay;
 char empname[20];
 struct student s;
 };


void main()
{
 int ch;
 while(1)
 {
 clrscr();
 printf("\n*  *  *  *****    *        *****  ****  **  **   ****     *******  *****");
 printf("\n*  *  *  *        *        *      *  *  * ** *   *           *     *   *");
 printf("\n*  *  *  ****     *        *      *  *  * ** *   ****        *     *   *");
 printf("\n*  *  *  *        *        *      *  *  *    *   *           *     *   *");
 printf("\n *  *    *****    ******   *****  ****  *    *   ****        *     *****");
 printf("\n");
 printf("\n           *****    **    **    *****     *    *");
 printf("\n           *        *  **  *    *   *     *    *");
 printf("\n           *        *  **  *    * *       *    *");
 printf("\n           *****    *      *    *   *      ****  ");
 printf("\n**********************************************");
 printf("\n******* 1-> basic programm *******************");
 printf("\n******* 2-> Name & address *******************");
 printf("\n******* 3-> Comparision   ********************");
 printf("\n******* 4-> Calculator    ********************");
 printf("\n******* 5-> Array         ********************");
 printf("\n******* 6-> DATA STRUCTURE********************");
 printf("\n******* 7-> Exit          ********************");
 printf("\n**********************************************\n");
 printf("\n Enter any choice 1 to 7 ");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:
 basic();
 break;
 case 2:
 string();
 break;
 case 3:
 commp();
 break;
 case 4:
 calculator();
 break;
 case 5:
 array();
 break;
 case 6:
 ds();
 break;
 case 7:
 printf("\n Enter any number to exit...");
 getch();
 exit(0);
 default:
 printf("\n Wrong entry ~~!!! please try again ");
 getch();
 }
 }
 }
 void basic()
 {
 int ch;
 while(1)
 {
 printf("\n************************************************");
 printf("\n******** 1 -> ADD       **************************");
 printf("\n******** 2 -> SUBTRACT   **************************");
 printf("\n******** 3 -> MULTIPLY   **************************");
 printf("\n******** 4 -> DIVISION   **************************");
 printf("\n******** 5 -> Check Pallendrom ********************");
 printf("\n******** 6 -> Area of Circle   ********************");
 printf("\n******** 7 -> Interchange value *******************");
 printf("\n******** 8 -> BACK       **************************");
 printf("\n***************************************************");
 printf("\n Enter your choice 1 to 6 ...........");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  add();
  break;
  case 2:
  sub();
  break;
  case 3:
  product();
  break;
  case 4:
  divide();
  break;
  case 5:
  pallen();
  break;
  case 6:
  area();
  break;
  case 7:
  inter();
  break;
  case 8:
  break;
  default:
  printf("\n You have Wrong entry please try again");
  getch();
  }
  if(ch==8)
  {
  break;
  }
  }
  }

  void add()
  {
  int a,b,c,add;
  printf("\n Enter First number");
  scanf("%d",&a);
  printf("\n Enter Second number=");
  scanf("%d",&b);

  printf("\n Enter Third number=");
  scanf("%d",&c);
  add=a+b+c;
  clrscr();
  printf("\n Your First number is %d",a);
  printf("\n Your Second number is %d",b);
  printf("\n Your Third number is %d",c);
  printf("\n Sum of the number is %d",add);
  getch();
  }
  void sub()
  {
  int a,b,sub;
  printf("\n Enter First number=");
  scanf("%d",&a);
  printf("\n Enter Second number=");
  scanf("%d",&b);
  sub=a-b;
  clrscr();
  printf("\n Your First number is %d",a);
  printf("\n Your Second number is %d",b);
  printf("\n Subtracted number=%d",sub);
  getch();
  }
  void product()
  {
  int a,b,pro;
  printf("\n Enter First number");
  scanf("%d",&a);
  printf("\n Enter Second number");
  scanf("%d",&b);
  pro=a*b;
  clrscr();
  printf("\n First number is %d ",a);
  printf("\n Second number is %d",b);
  printf("\n Product of the number=%d",pro);
  getch();
  }
  void divide()
  {
  int a,b,div;
  printf("\n Enter First number=");
  scanf("%d",&a);
  printf("\n Enter Second number");
  scanf("%d",&b);
  if(a>b)
  {
  div=a/b;
  }
  else
  {
  div=b/a;
  }
  clrscr();
  printf("\n First number =%d",a);
  printf("\n Second number =%d",b);
  printf("\n divided number=%d",div);
  getch();
  }
  void pallen()
  {
  int num,j,n,rev,d,m,i;
  clrscr();
   printf("\n How many times you want to check pallendrome");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
   printf("\n Enter any %d number ",i);
   scanf("%d",&num);
   for(rev=0,n=num;n>0;n=n/10)
    {
    d=n%10;
    rev=rev*10+d;
    }
    if(rev==num)

    printf("\n %d Number %d is Pallendrome",i,rev);

    else

    printf("\n %d Number %d is not pallendrome", i,rev);

    }
    getch();
    }
    void area()
    {
    float a,r;
    int i,m;
    printf("\n How many times you want to find area of Circle");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
    printf("\n Enter %d Radious of Circle",i);
    scanf("%f",&r);
    a=3.14*r*r;
    printf("\n [%d] Radious is %.2f and Area is %.2f",i,r,a);
    }
    getch();
    }
    void inter()
    {
    int a,b,c,i,n;
    clrscr();
    printf("\n How many times you want to Interchange Number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\n Enter First number[%d]",i);
    scanf("%d",&a);
    printf("\n Enter Second number [%d]",i);
    scanf("%d",&b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("\n After Interchanging");
    printf("\n First value is %d",a);
    printf("\n Second value is %d",b);
    }
    getch();
    }



    void rev()
    {
    int num,i,rev,d,n;
    clrscr();
    printf("\n Enter any numbers to print reverse");
    scanf("%d",&num);
    for(rev=0,n=num;n>0;n=n/10)
    {
     d=n%10;
     rev=rev*10+d;
     }
     printf("\n Your Reverse number is %d = %d",num,rev);
     getch();
     }
  void string()
  {
  int ch;
  while(1)
  {
  printf("\n***********************************************");
  printf("\n************** 1-> Print simple name **********");
  printf("\n************** 2-> print Name and Address *****");
  printf("\n************** 3-> Pallendrom in charrecter ***");
  printf("\n************** 4-> Go Back ********************");
  printf("\n***********************************************");
  printf("\n enter any your choice....1 to 4...");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  name();
  break;
  case 2:
  address();
  break;
  case 3:
  palstr();
  break;
  case 4:
  break;
  default:
  printf("\n wrong entry !!!!!! try again ");
  getch();
  }
  if(ch==4)
  {
  break;
  }
  }
  }
  void name()
  {
  char name[20];
  clrscr();
  printf("\n Enter your name=");
  fflush(stdin);
  gets(name);
  printf("\n Your name is %s",name);
  getch();
  }
  void address()
  {
  char name[20],vill[20],ps[20],po[20],dist[20];

  long int pin;
  clrscr();
  printf("\n Enter your name ");
  fflush(stdin);
  gets(name);
  printf("\n Enter your address ");
  printf("\n");
  printf("\n Enter your village ");
  scanf("%s",&vill);
  printf("\n Ente your Post office ");
  scanf("%s",&po);
  printf("\n Enter your police station");
  scanf("%s",&ps);
  printf("\n Enter your district ");
  scanf("%s",&dist);
  printf("\n Enter Your Area pin ");
  scanf("%d",&pin);
  printf("\n");
  printf("\n Your name is %s",name);
  printf("\n Your Address ");
  printf("\n");
  printf("\n Your villageis %s",vill);
  printf("\n Your Post office %s",po);
  printf("\n Your police Station %s",ps);
  printf("\n Your District is %s",dist);
  printf("\n Your Area pin is %d",pin);
  getch();
  }
  void palstr()
  {
  char str[10];
  int i,length;
  clrscr();
  printf("\n Enter the string");
  fflush(stdin);
  gets(str);
  length=strlen(str);
  for(i=0;i<length/2;i++)
  if(str[i]!=str[length-1-i])

  printf("\n It is not a palindrome \n");

  else
  {
  printf("\n It is palindrome ");
  }
  getch();
  }

  void commp()
  {
   int ch;
  while (1)
  {
  printf("\n*******************************************************");
  printf("\n*** 1-> Find the biggest number ************************");
  printf("\n*** 2-> Find the tallest & shortest*********************");
  printf("\n*** 3-> Convert the reverse value *********************");
  printf("\n*** 4-> Convert distance mm into inch,cm,feet**********");
  printf("\n*** 5-> Convert Temperature fahrenheit to centigrate***");
  printf("\n*** 6-> convert Time in Second to Hours,Minute,second**");
  printf("\n*** 7-> Determlne the type of triangle         ********");
  printf("\n*** 8-> Determine the Angle Tringle            ********");
  printf("\n******** 9-> Goto Back        ************************");
  printf("\n*******************************************************");
  printf("\n Enter your any choice.....1 to 9");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  big();
  break;
  case 2:
  tall();
  break;
  case 3:
  rev();
  break;
  case 4:
  mm();
  break;
  case 5:
  temp();
  break;
  case 6:
  time();
  break;
  case 7:
  tringle();
  break;
  case 8:
  angle();
  break;
  case 9:
  break;
  default:
  printf("\n Wrong entry!! Do you want to Go back then press 3");
  getch();
  }
  if(ch==9)
  {
  break;
  }
  }
  }
  void big()
  {
  int a,b,c,big,small;
  clrscr();
  printf(" The compairs between only three numbers");
  printf("\n");
  printf("\n enter First number ");
  scanf("%d",&a);
  printf("\n Enter second number ");
  scanf("%d",&b);
  printf("\n Enter Third number ");
  scanf("%d",&c);
  big=small=0;
  if(a>b&&a>c)
  big=a;
  if(b>c&&b>a)
  big=b;
  if(c>a&&c>b)
  big=c;
  if(a<b&&a<c)
  small=a;
  if(b<c&&b<a)
  small=b;
  if(c<a&&c<b)
  small=c;
  clrscr();
  printf("\n You Entered First number=%d",a);
  printf("\n You Entered Second number=%d",b);
  printf("\n You Entered Third number=%d",c);
  printf("\n Your biggest number is %d",big);
  printf("\n Your Smallest number is %d",small);
  getch();
  }
  void tall()
  {
  int m1,m2,d1,d2,y1,y2,d,m,y,m3,d3,y3,r,s,t,tall1,tall2,tall3;
  char name1[20],name2[20];
  clrscr();
  printf("\n Enter first Student's name");
  fflush(stdin);
  gets(name1);
  printf("\n Enter Age of %s",name1);
  printf("\n Enter Date of Birth ");
  scanf("%d",&d1);
  printf("\n Enter Month of Birth ");
  scanf(" %d",&m1);
  printf("\n Enter Year of Birth ");
  scanf("%d",&y1);
  printf("\n Enter Second Student's name");
  fflush(stdin);
  gets(name2);
  printf("\n Enter Age of %s ",name2);
  printf("\n Enter Date of Birth");
  scanf("\n %d",&d2);
  printf("\n Enter Month of Birth");
  scanf("%d",&m2);
  printf("\n Enter Year of Birth");
  scanf("%d",&y2);
  printf("\n Enter Current Date Month Year ");
  printf("\n enter Current Date ");
  scanf("%d",&d3);
  printf("\n Enter Current Month ");
  scanf("%d",&m3);
  printf("\n Enter Current Year ");
  scanf("%d",&y3);
   d= abs (d3-d1);
   m= abs (m3-m1);
   y= abs (y3-y1);
   r= abs (d3-d2);
   s= abs (m3-m2);
   t= abs (y3-y2);
   if(d>r)
   {
   tall1=d;
   }
   else
   {
   tall1=r;
   }
   if(m>s)
   {
   tall2=m;
   }
   else
   {
   tall2=s;
   }
   if(y>t)
   {
   tall3=y;
   }
   else
   {
   tall3=t;
   }
   printf("\n %s age is %d day %d months %d year",name1,d,m,y);
   printf("\n %s age is %d day %d months %d year",name2,r,s,t);
   printf("\n Biggest age of student=%d %d %d",tall1,tall2,tall3);
   getch();
   }
   void mm()
   {
  float cm,inch,feet,mm;
  cm=inch=feet=0;
  printf("\n Enter Distance in Mili Meter");
  scanf("%f",&mm);
  cm=mm/10;
  inch=cm/2.5;
  feet=inch/12;
  printf("\n Your converted Distance ");
  printf("\n");
  printf("\n %.2f MM %.2f CM",mm,cm);
  printf("\n %.2f MM %.2f INCH",mm,inch);
  printf("\n %.2f MM %.2f FEET",mm,feet);
  getch();
  }
  void temp()
  {
  float t,c;
  t=c=0;
  printf("\n Enter any temprature in Centigrade to Fahrenhite");
  scanf("%f",&c);
  t=(c*9/5)+32;
  printf("\n %.2fCentigrate %.2f Fahrenhite",c,t);
  getch();
  }
  void tringle()
  {
  int a,b,c,m,i;
  clrscr();
  printf("\n How many times you want to determine Tringle");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
  printf("\n%d",i);
  printf("\n Enter First Side of Tringle=");
  scanf("%d",&a);
  printf("\n Enter Second Side of Tringle=");
  scanf("%d",&b);
  printf("\n Enter Third Side of Tringle =");
  scanf("%d",&c);
  if(a==b&&b==c)
  {
  printf("\n This is an Equilateral Tringle");
  }
  else if(a==b||a==c||b==c)
  {
  printf("\n This is an Isosceles Tringle");
  }
  else
  {
  printf("\n This is a Scalean Tringle");
  }
  }
  getch();
  }
  void angle()
  {
  int a,b,c;
  clrscr();
  printf("\n Enter Firs Side of angle Tringle ");
  scanf("%d",&a);
  printf("\n Enter Second Side of angle Tringle ");
  scanf("%d",&b);
  printf("\n Enter Third Side of angle Tringle ");
  scanf("%d",&c);
  if(((a*a)+(b*b)==(c*c))||((a*a)+(c*c)==(b*b))||((c*c)+(b*b)==(a*a)))
  {
  printf("\n This is a Right angle Tringle");
  }
  else if((((a*a)+(b*b)<(c*c))||((a*a)+(c*c)<(b*b))||((c*c)+(b*b)<(a*a)))||((b<=a&&c<=a)||(a<=c&&b<=c)||(a<=b&&c<=b)))
  {
  printf("\n This is an Acute Angle Tringle ");
  }
  else if((((a*a)+(b*b)>(c*c))||((a*a)+(c*c)>(b*b))||((c*c)+(b*b)>(a*a)))||((b>a&&c>a)||(a>c&&b>c)||(a>b&&c>b)))
  {
  printf("\n This is an Obtuse angle Tringle");
  }
  getch();
  }



   void calculator()
   {
   int ch;
   clrscr();
   while(1)
   {
   printf("\n*************************************************");
   printf("\n*&& You Enter tell the User want &&&&&&&&&&&&&&**");
   printf("\n************* 1-> ADDITION            ***********");
   printf("\n************* 2-> SUBTRACTION         ***********");
   printf("\n************* 3-> DIVISION            ***********");
   printf("\n************* 4-> MULTIPLY            ***********");
   printf("\n************* 5-> MODULATION          ***********");
   printf("\n************* 6-> Factorial           ***********");
   printf("\n************* 7-> Convert into rupees and paises*");
   printf("\n************* 8-> To find LCM and GCD ***********");
   printf("\n************* 9-> Simple Intreast     ***********");
   printf("\n************* 10-> Compound Intreast   **********");
   printf("\n************* 11-> Profit and Loss     **********");
   printf("\n************* 12-> Number System       ***********");
   printf("\n************* 13-> Go to Back         ***********");
   printf("\n*************************************************");
   printf("\n Please Enter your choice....1 to 13 ");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
   add1();
   break;
   case 2:
   sub1();
   break;
   case 3:
   divide1();
   break;
   case 4:
   product1();
   break;
   case 5:
   mod();
   break;
   case 6:
   factorial();
   break;
   case 7:
   rupees();
   break;
   case 8:
   lcm();
   break;
   case 9:
   simple();
   break;
   case 10:
   compound();
   break;
   case 11:
   profit();
   break;
   case 12:
   number();
   break;
   case 13:
   break;
   default:
   printf("\n Wrong Entry !!!!! Try again  cairfully");
   getch();
   }
   if(ch==13)
   {
   break;
   }
   }
   }
   void add1()
   {
   int n,num,i,sum;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter How many time to add number ");
   scanf("%d",&n);
   for(sum=0,i=1;i<=n;i++)
   {
   printf("\n Enter %d number=",i);
   scanf("%d",&num);
   sum=sum+num;
   }
   printf("\n Sum of the number %d =%d",num,sum);
   fflush(stdin);
   printf("\n Do you want to continoue press 'Y' or any key to exit");
   ans=getche();
   }
   }
   void sub1()
   {
   int i,n,num,sub;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();

   printf("\n Enter how many times to enter values");
   scanf("%d",&n);
   for(sub=0,i=1;i<=n;i++)
   {
   printf("\n Enter %d number",i);
   scanf("%d",&num);

   if(sub<num)

   sub=num-sub;
   else
   sub=sub-num;
   }
   printf("\n Subtracted number=%d",sub);
   fflush(stdin);
   printf("\n Do you want to continoue press 'Y' or press any key to exit");
   ans=getche();
   }
   }
   void divide1()
   {
   int i,n,num,div=1;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n enter How many times to divide");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("\n Enter a number");
   scanf("%d",&num);

   if(div<num)

   div=num/div;
   else
   div=div/num;
   }
   printf("\n Your cocent value is %d",div);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void product1()
   {
   int n,i,num,pro=1;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n  How many times you want to multiply");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("\n Enter a number");
   scanf("%d",&num);
   pro=pro*num;
   }
   printf("\n your Multipl number is %d",pro);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void mod()
   {
   int a,b,mod;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter First number");
   scanf("%d",&a);
   printf("\n Enter second number");
   scanf("%d",&b);
   if(a>b)
   mod=a%b;
   else
   mod=b%a;
   printf("\n Module of the number=%d",mod);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void factorial()
   {
   int i,fact=1,n;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter a number to print factorial value");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   fact=fact*i;
   printf("\n factorial value=%d",fact);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void rupees()
   {
   int r1,r2,p1,p2,r,p;
   char name1[20],name2[20];
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter first persion name");
   fflush(stdin);
   gets(name1);
   printf("\n Enter %s Rupees ",name1);
   scanf("%d",&r1);
   printf("\n Enter %s paises",name1);
   scanf("%d",&p1);
   printf("\n Enter Second Persion name");
   fflush(stdin);
   gets(name2);
   printf("\n Enter %s Rupees",name2);
   scanf("%d",&r2);
   printf("\n Enter %s paises",name2);
   scanf("%d",&p2);
   p=p1+p2;
   r=p/100;
   r=r1+r2+r;
   p=p%100;
   clrscr();
   printf("\n %s Amount is %d rupees and %d paises ",name1,r1,p1);
   printf("\n %s Amount is %d rupees and %d paises ",name2,r2,p2);
   printf("\n Total amount is %d Rupees and %d paises",r,p);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void lcm()
   {
   int m,n,prod,r,i,j,f,gcd,lcm;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n How many times you wants to find Lcm and gcd");
   scanf("%d",&i);
   for(j=0;j<i;j++)
   {
   printf("\n Enter first number %d ",j);
   scanf("%d",&m);
   printf("\n Enter Second number %d ",j);
   scanf("%d",&n);
   prod=m*n;
   while(r!=0)
   {
   m=n;
   n=r;
   r=r%n;
   }
   gcd=n;
   lcm=prod/gcd;
   printf("\n GCD =%d",gcd);
   printf("\n LCM =%d ",lcm);
   }
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void simple()
   {
   float si=0,princ,rate,time;
   int i,m;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n How many times You want to Find Simple Intrest");
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
    printf("%d",i);
    printf("\n Enter Any Principal Amount ");
    scanf("%f",&princ);
    printf("\n Enter Any Rate in Present ");
    scanf("%f",&rate);
    printf("\n Enter Any Time in Year ");
    scanf("%f",&time);
    si=(princ*rate*time)/100;
    printf("\n Your Entered Principal Amount is %.2f",princ);
    printf("\n Your Entered Rate is %.2f",rate);
    printf("\n Your Entered Time in %.2f Year",time);
    printf("\n Simple Intreast = %.2f",si);
    }
    fflush(stdin);
    printf("\n Do you want to continoue press 'y' or press any key to exit");
    ans=getche();
    }
    }

    void compound()
    {
    float ci,princ,rate,time;
    int j,k;
    char ans='y';
    while(ans=='y'||ans=='Y')
    {
    printf("\n How many times You want to Find Compound Intreast");
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
    printf("%d",j);
    printf("\n Enter Principal Amount ");
    scanf("%f",&princ);
    printf("\n Enter Rate in Percent ");
    scanf("%f",&rate);
    printf("\n Enter Time in Year ");
    scanf("%f",&time);
    ci=princ*pow(1+rate/100,time)-princ;
    printf("\n***********************************************");
    printf("\n* Your Entered Principal amount is %.2f   ",princ);
    printf("\n* Your Entered Rate  is %.2f Percent      ",rate);
    printf("\n* Your Entered Time is %.2f Year          ",time);
    printf("\n* Your Compound Intreast is %.2f          ",ci);
    printf("\n************************************************");
    }
    fflush(stdin);
    printf("\n Do you want to continoue press 'y' or press any key to exit");
    ans=getche();
    }
    }
    void profit()
    {
    int loss,profit,cp,sp,i,j;
    float per;
    char ans='y';
    while(ans=='y'||ans=='Y')
    {
    clrscr();
    printf("\n How many times You want to find Profit and Loss ");
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
    printf("%d",i);
    printf("\n Enter Cost Price ");
    scanf("%d",&cp);
    printf("\n Enter Selling price=");
    scanf("%d",&sp);
    if(cp>sp)
    {
    loss=cp-sp;
    per=loss*100/cp;
    printf("\n Loss =%d",loss);
    }
    else
    {
    profit=sp-cp;
    per=profit*100/cp;
    printf("\n Profit =%d",profit);
    }
    printf("\n************************************************");
    printf("\n***** You enterd cost price is %d",cp);
    printf("\n***** You enterd Selling price is %d",sp);
    printf("\n***** Your Profit percent is %.2f",per);
    printf("\n************************************************");
    }
    fflush(stdin);
    printf("\n Do you want to continoue press 'y' or press any key to exit");
    ans=getche();
    }
    }













   void number()
   {
   int ch;
   while(1)
   {
   printf("\n****************************************************");
   printf("\n***** 1-> Convert into Decimal to Binory      ******");
   printf("\n***** 2-> Convert into Decimal to Octa        ******");
   printf("\n***** 3-> Convert into Decimal to Hexa        ******");
   printf("\n***** 4-> Convert into Binory to Decimal      ******");
   printf("\n***** 5-> Convert into Binory to Octa         ******");
   printf("\n***** 6-> Convert into Binory to Hexa         ******");
   printf("\n***** 7-> Convert into Octa to Decimal        ******");
   printf("\n***** 8-> Convert into Octa to Binory         ******");
   printf("\n***** 9-> Convert into Octa to Hexa           ******");
   printf("\n***** 10-> Convert into Hexa to Decimal       ******");
   printf("\n***** 11-> Convert into Hexa to Binory        ******");
   printf("\n***** 12-> Convert into Hexa to Octa          ******");
   printf("\n***** 13-> Go to Back                         ******");
   printf("\n****************************************************");
   printf("\n Enter your choice ..... 1 to 13 ");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
   dec_to_bin();
   break;
   case 2:
   dec_to_oct();
   break;
   case 3:
   dec_to_hex();
   break;
   case 4:
   bin_to_dec();
   break;
   case 5:
   bin_to_oct();
   break;
   case 6:
   bin_to_hex();
   break;
   case 7:
   oct_to_dec();
   break;
   case 8:
   oct_to_bin();
   break;
   case 9:
   oct_to_hex();
   break;
   case 10:
   hex_to_dec();
   break;
   case 11:
   hex_to_bin();
   break;
   case 12:
   hex_to_oct();
   break;
   case 13:
   break;
   default:
   printf("\n Wrong Entry!!!!!! Try again ");
   getch();
   }
   if(ch==13)
   {
   break;
   }
   }
   }
   void dec_to_bin()
   {
   int i,n,num,d;
   long int bin;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter a Decimal number ");
   scanf("%d",&num);
   i=bin=0;
   for(n=num;n>0;n=n/2)
   {
   d=n%2;
   bin=bin+pow(10,i)*d;
   i++;
   }
   printf("\n Binory equivalent is %d=%ld",num,bin);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void dec_to_oct()
   {
   int i,n,num,d;
   long int oct;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   printf("\n Enter a number=");
   scanf("%d",&num);
   i=oct=0;
   for(n=num;n>0;n=n/8)
   {
   d=n%8;
   oct=oct+pow(10,i)*d;
   i++;
   }
   printf("\n Octal equivalent %d = %ld",num,oct);
   fflush(stdin);
   printf("\n Do you want to continour press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void dec_to_hex()
   {
   int i,n,d,num,hex;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter any Decimal number ");
   scanf("%d",&num);
   i=hex=0;
   for(n=num;n>0;n=n/16)
   {
   d=n%16;
   hex=hex+pow(10,i)*d;
   i++;
   }
   printf("\n Enter Hexa Decimal Number %d=%d ",num,hex);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void bin_to_dec()
   {
   int i,dec,d;
   long int bin,n;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter any Binory number ");
   scanf("%ld",&bin);
   i=dec=0;
   for(n=bin;n>0;n=n/10)
   {
   d=n%10;
   dec=dec+pow(2,i)*d;
   i++;
   }
   printf("\n Decimal Equivalent %ld = %d",bin,dec);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' and press any key to exit");
   ans=getche();
   }
   }
   void bin_to_oct()
   {
   int dec,i,d;
   long int bin,oct,n;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter any Binory number=");
   scanf("%ld",&bin);
   dec=i=0;
   for(n=bin;n>0;n=n/10)
   {
   d=n%10;
   dec=dec+pow(10,i)*d;
   i++;
   }

   for(i=oct=0;dec>0;dec=dec/8)
   {
   d=dec%8;
   oct=oct+pow(10,i)*d;
   i++;
   }
   printf("\n octal equivalent of %ld =%dl",bin,oct);
   fflush(stdin);
   printf("\n Do you want to Continoue press 'y' and press any key to exit");
   ans=getche();
   }
   }
   void bin_to_hex()
   {
   int i,d,dec,hex;
   long int bin,n;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter any binory number");
   scanf("%ld",&bin);
   i=dec=0;
   for(n=bin;n>0;n=n/10)
   {
   d=n%10;
   dec=dec+pow(2,i)*d;
   i++;
   }

   for(i=hex=0;dec>0;dec=dec/16)
   {
   d=dec%16;
   hex=hex+pow(10,i)*d;
   i++;
   }
   printf("\n Hexa Equivalent is %ld =%d",bin,hex);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void oct_to_dec()
   {
   int dec,i,d;
   long int n,oct;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter an octal number ");
   scanf("%ld",&oct);
   dec=i=0;
   for(n=oct;n>0;n=n/10)
   {
   d=n%10;
   dec=dec+pow(8,i)*d;
   i++;
   }
   printf("\n Decimal equivalent %ld = %d",oct,dec);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void oct_to_bin()
   {
   int n,i,d,dec;
   long int oct,bin;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter an Octal number");
   scanf("%ld",&oct);
   dec=i=0;
   for(n=oct;n>0;n=n/10)
   {
   d=n%10;
   dec=dec+pow(8,i)*d;
   i++;
   }
   for(i=bin=0;dec>0;dec=dec/2)
   {
   d=dec%2;
   bin=bin+pow(10,i)*d;
   i++;
   }
   printf("\n Binory equivalent of %ld octal and %ld Binory",oct,bin);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void oct_to_hex()
   {
   int i,d,dec,n;
   long int oct,hex;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n enter an octal number");
   scanf("%ld",&oct);
   i=dec=0;
   for(n=oct;n>0;n=n/10)
   {
   d=n%10;
   dec=dec+pow(8,i)*d;
   i++;
   }
   for(i=hex=0;dec>0;dec=dec/16)
   {
   d=n%16;
   hex=hex+pow(10,i)*d;
   i++;
   }
   printf("\n Hexa equivalent=%ld Octa and %ld Hexa",oct,hex);
   fflush(stdin);
   printf("\n Do you want to continoue press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void hex_to_dec()
   {
   int dec,i,d;
   long int hex,n;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n Enter a Hexadecimal number ");
   scanf("%ld",&hex);
   i=dec=0;
   for(n=hex;n>0;n=n/10)
   {
     d=n%10;
     dec=dec+pow(16,i)*d;
     i++;
   }
     printf("\n Decimal equivalent %ld Hexa and%d",hex,dec);
     fflush(stdin);
     printf("\n Do you want to continoue press 'y' or press any key to exit");
     ans=getche();
     }
     }
     void hex_to_bin()
     {
     int i,dec,d;
     long hex,bin,n;
     char ans='y';
     while(ans=='y'||ans=='Y')
     {
     clrscr();
     printf("\n Enter any Hexadecimal number");
     scanf("%ld",&hex);
     dec=i=0;
     for(n=hex;n>0;n=n/10)
     {
     d=n%10;
     dec=dec+pow(16,i)*d;
     i++;
     }
     for(i=bin=0;dec>0;dec=dec/2)
     {
     d=dec%2;
     bin=bin+pow(10,i)*d;
     i++;
     }
     printf("\n Binary Equivalent is %ld Hexa %ld Binary",hex,bin);
     fflush(stdin);
     ans=getche();
     }
     }
     void hex_to_oct()
     {
     int dec,i,d;
     long hex,oct,n;
     char ans='y';
     while(ans=='y'||ans=='Y')
     {
     clrscr();
     printf("\n Enter any hexa number");
     scanf("%ld",&hex);
     dec=i=0;
     for(n=hex;n>0;n=n/10)
     {
     d=n%10;
     dec=dec+pow(16,i)*d;
     i++;
     }
     for(i=oct=0;dec>0;dec=dec/8)
     {
     d=n%8;
     oct=oct+pow(10,i)*d;
     i++;
     }
     printf("\n Octal Equivalent %ld Hexadecimal and %ld octa",hex,oct);
     fflush(stdin);
     printf("\n Do you want to continoue press 'y' or press any key to exit");
     ans=getche();
     }
     }
     void array()
     {
     int ch;
     while(1)
     {
     printf("\n************************************************");
     printf("\n*********        ARRAY        ******************");
     printf("\n*********  1-> Singe Dimension******************");
     printf("\n*********  2-> Double Dimension*****************");
     printf("\n*********  3-> 2 Dimension and 3 Dimension *****");
     printf("\n*********  4-> Go to Back      *****************");
     printf("\n************************************************");
     printf("\n Enter your Choice.....1 or 4 ");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     singly();
     break;
     case 2:
     doubley();
     break;
     case 3:
     triply();
     break;
     case 4:
     break;
     default:
     printf("\n Wrong entry !!!! Try again ");
     getch();
     }
     if(ch==4)
     {
     break;
     }
     }
     }
   void singly()
   {
   int ch;
   while(1)
   {
   printf("\n******************************************************");
   printf("\n****** 1-> To find student marks                 *****");
   printf("\n****** 2-> To find employee sellary              *****");
   printf("\n****** 3-> To find Electrict consumer            *****");
   printf("\n****** 4-> To find Sum of Even or odd digit array*****");
   printf("\n****** 5-> To find biggest digit as well as binary****");
   printf("\n****** 6-> To GO to Back                         *****");
   printf("\n******************************************************");
   printf("\n Enter your choice......1 to 6 ");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
   student();
   break;
   case 2:
   emp();
   break;
   case 3:
   cons();
   break;
   case 4:
   even();
   break;
   case 5:
   big1();
   break;
   case 6:
   break;
   default:
   printf("\n Wrong entry !!!!!!!! Try after sum time");
   getch();
   }
   if(ch==6)
   {
   break;
   }
   }
   }
   void student()
   {
   int roll,i,marks,r,m,k,t=0;
   char name[20],div[10];
   float per;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n How many time's you enters students detailed ");
   scanf(" %d",&r);
   for(i=1;i<=r;i++)
   {
   printf("\n Enter name of roll of student ");
   scanf("%d",&roll);
   printf("\n Enter name of student ");
   fflush(stdin);
   gets(name);
   printf("\n How many subject's you entered");
   scanf("%d",&m);
   for( k=1;k<=m;k++)
   {
   printf("\n Enter %d Marks ",k);
   scanf("%d",&marks);
   t=t+marks;
   per=t/m;
   }

   printf("\n %d Roll number is %d",i,roll);
   printf("\n %d Name is %s",i,name);
   printf("\n %d Subjects=%d marks",i,marks);

   printf("\n Total marks of %d = %d",i,t);
   printf("\n Percent of %d Student= %.2f",i,per);

   if(per<33)
   printf("Division is Failed");
   if(per>=33&&per<45)
   printf(" Division is Third");
   if(per>=45&&per<60)
   printf(" Division is Second");
   if(per>60)
   printf(" Division is First");
   }
   fflush(stdin);
   ans=getche();
   }
   }
   void emp()
   {
   int empno,bs,i,n;
   char name[20];
   float da,ta,hra,tax,gross,pay;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
   clrscr();
   printf("\n How many employee's detailes you want to entered");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   printf("\n Enter %d Employee number",i);
   scanf("%d",&empno);
   printf("\n Enter %d Employee name",i);
   fflush(stdin);
   gets(name);
   printf("\n Enter %d Employee Basic selary",i);
   scanf("%d",&bs);
   if(bs<5000)
   {
   da=bs*5/100;
   ta=bs*6/100;
   hra=bs*6/100;
   tax=bs*2/100;
   }
   if(bs>=5000&&bs<10000)
   {
   da=bs*6/100;
   ta=bs*7/100;
   hra=bs*7/100;
   tax=bs*3.5/100;
   }
   if(bs>=10000&&bs<25000)
   {
   da=bs*7/100;
   ta=bs*8/100;
   hra=bs*8/100;
   tax=bs*6/100;
   }
   if(bs>25000)
   {
   da=bs*9/100;
   ta=bs*10/100;
   hra=bs*10/100;
   tax=bs*11/100;
   }
   gross=bs+da+ta+hra;
   pay=gross-tax;


   clrscr();

   printf("\n %d Employee's employee number= %d",i,empno);
   printf("\n %d Employee's Name=%s",i,name);
   printf("\n %d Employee's Basic selary is %d",i,bs);
   printf("\n %d Employee's DA is %.2f",i,da);
   printf("\n %d Employee's TA is %.2f",i,ta);
   printf("\n %d Employee's HRA is %.2f",i,hra);
   printf("\n %d Employee's TAX is %.2f",i,tax);
   printf("\n %d Employee's gross is %.2f",i,gross);
   printf("\n %d Employee's Total Payment is %.2f",i,pay);
   printf("\n");
   }
   fflush(stdin);
   printf("\n Do you want to continour press 'y' or press any key to exit");
   ans=getche();
   }
   }
   void cons()
   {
   int n,j,i,cono,smr,lmr,unit;
   char consname[20];
   float stax,total,scharge,otax,bill;
   char ans='y';
   while(ans=='y'||ans=='Y')
   {
    clrscr();
    printf("\n How many times you want to enter consumer detailed ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     printf("\n Enter %d Consumer number ",i);
     scanf("%d",&cono);
     printf("\n Enter %d Consumer name ",i);
     fflush(stdin);
     gets(consname);
     printf("\n Enter %d Consumer Starting Meter Reading",i);
     scanf("%d",&smr);
     printf("\n Enter %d Consumer Last Meter Reading",i);
     scanf("\t%d",&lmr);
     unit=lmr-smr;
     if(unit<100)
     {
     bill=unit*2.5;
     stax=bill*5/100;
     scharge=5.8;
     otax=bill*5/100;
     }
     if(unit>=100&&unit<200)
     {
     bill=unit*4;
     stax=bill*6/100;
     scharge=6;
     otax=bill*6/100;
     }
     if(unit>=200&&unit<300)
     {
     bill=unit*6;
     stax=bill*7/100;
     scharge=7;
     otax=bill*7/100;
     }
     if(unit>300)
     {
     bill=unit*7;
     stax=bill*8/100;
     scharge=8;
     otax=bill*8/100;
     }
     total=bill+stax+scharge+otax;



     printf("\n %d Consumer number is %d ",i,cono);
     printf("\n %d Consumer name is %s",i,consname);
     printf("\n %d Consumer Starting meter reading is %d",i,smr);
     printf("\n %d Consumer Last meter reading is %d",i,lmr);
     printf("\n %d Consumer Unit consumption is %d",i,unit);
     printf("\n %d Consumer Bill is %.2f",i,bill);
     printf("\n %d Consumer Service TAX is %.2f",i,stax);
     printf("\n %d Consumer Service Charge is %.2f",i,scharge);
     printf("\n %d Consumer Other TAX is %.2f",i,otax);
     printf("\n %d Consumer Total Payment is %.2f",i,total);
     printf("\n");
     }
     fflush(stdin);
     printf("\n Do you want to continoue press 'y' or press any key to exit");
     ans=getche();
     }
     }
     void even()
     {
     long int num[20],i,cp[20],odd[20],even,od,d,n,m;
     char ans='y';
     while(ans=='y'||ans=='Y')
     {
     clrscr();
     printf("\n How many times you want to number ");
     scanf("%ld",&m);
     for(i=0;i<m;i++)
     {
     printf("\n Enter %ld numbers ",i);
     scanf("%ld",&num[i]);
     even=od=0;
     for(n=num[i];n>0;n=n/10)
     {
     d=n%10;
     if(d%2==0)
     even=even+d;

     else
     od=od+d;
     cp[i]=even;
     odd[i]=od;
     }

     }
     printf("\n Main Array");
     for(i=0;i<m;i++)
     printf("\n Value of num[%ld]=%ld",i,num[i]);
     printf("\n Sum of the Even digits Array");
     for(i=0;i<m;i++)
     printf("\n value of even digits array elements [%ld]=%ld",i,cp[i]);
     for(i=0;i<m;i++)
     printf("\n Value of Odd digits array elements [%ld]=%ld",i,odd[i]);
     fflush(stdin);
     printf("\n Do you want to continoue press 'y' or press any key to exit");
     ans=getche();
     }
     }
      void big1()
      {
      int num[20],i,k,n,m,d,j,big;
      long int cp[20],bin=0;
      char ans='y';
      while(ans=='y'||ans=='Y')
      {
      printf("\n How many times you want to enter numbers");
      scanf("%d",&m);
      for(i=0;i<m;i++)
      {
      printf("\n Enter %d number ",i);
      scanf("%d",&num[i]);
      }

      for(big=0,n=num[i];n>0;n=n/10)
      {
      d=n%10;
      if( big<d)
      big=d;

      for(j=0,k=big;k>0;k=k/2)
      {
      d=k%2;
      bin=bin+pow(10,j)*d;
      j++;
      }
      cp[i]=bin;
      }
      printf("\n Main array element");
      for(i=0;i<m;i++)
      printf("\n Element is %d =%d",i,num[i]);
      printf("\n Coppyed arrayed");
      for(i=0;i<m;i++)
      printf("\n biggest array number is %d =%d",i,big);
      for(i=0;i<m;i++)
      printf("\n Coppyed array element is %d=%ld",i,cp[i]);
      fflush(stdin);
      printf("\n Do you want to continoue press 'y' or press any key to exit");
      ans=getche();
      }
      }





      void doubley()
     {
     int ch;
     while(1)
     {
     printf("\n********************************************************************");
     printf("\n*** 1-> Enter i,j matrix.print the matrix element        ***********");
     printf("\n*** 2-> Enter i,j matrix and print the sum of the matrix ***********");
     printf("\n*** 3-> Enter i,j matrix and print product of the matrix ***********");
     printf("\n*** 4-> Enter i,j matrix and print transpose of the matrix**********");
     printf("\n*** 5-> Enter i,j matrix and print copy of the matrix    ***********");
     printf("\n*** 6-> Enter i,j matrix and Find trace and norm of a squear matrix*");
     printf("\n*** 7-> Enter i,j matrix and add Row to column and column to row  **");
     printf("\n*** 8-> Go to back.......                                ***********");
     printf("\n********************************************************************");
     printf("\n Enter any your choice .............1 to 8 ");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
     same();
     break;
     case 2:
     sum();
     break;
     case 3:
     pro();
     break;
     case 4:
     trans();
     break;
     case 5:
     copy();
     break;
     case 6:
     trace();
     break;
     case 7:
     matrix();
     break;
     case 8:
     break;
     default:
     printf("\n @@@@@ Wrong Entry !!!!!! Try again later");
     getch();
     }
     if(ch==8)
     {
     break;
     }
     }
     }
     void same()
     {
     int num[10][10],i,j,n,m;
     char ans='y';
     while(ans=='y'||ans=='Y')
     {
     clrscr();
     printf("\n How many times you wants to enter i,j Matrix elements");
     scanf("%d %d",&n,&m);
     for(i=0;i<n;i++)
      for(j=0;j<m;j++)
      {
      printf("\n Enter %d%d Number=",i,j);
      scanf("%d",&num[i][j]);

      }
      clrscr();
      for(i=1;i<n;i++)
       for(j=0;j<m;j++)

       printf("\n Your Entered number is %d %d is %d ",i,j,num[i][j]);
       fflush(stdin);
       printf("\n Do you want to continoue press 'y' or press any key to exit");
       ans=getche();
       }
       }
       void sum()
       {
       int num[10][10],m,i,j,n,sum=0;
       char ans='y';
       while(ans=='y'||ans=='Y')
       {
       clrscr();
       printf("\n How many times you want to print rows ");
       scanf("%d",&n);
       printf("\n How many times you want to print column ");
       scanf("%d",&m);
       for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
	printf("\n Enter Rows and column matrix element %d %d",i,j);
	scanf("%d",&num[i][j]);

	sum=sum+num[i][j];
	}
	for(i=0;i<n;i++)
	 for(j=0;j<m;j++)

	 printf("\n your entered number is %d%d=%d",i,j,num[i][j]);

	 printf("\n Sum of the number is %d ",sum);

	 fflush(stdin);
	 printf("\n Do you want to continoue press 'y' or press any key to exit");
	 ans=getche();
	 }
	 }
	 void pro()
	 {
	 int num[10][10],i,j,m,n;
	 long int pro=1;
	 char ans='y';
	 while(ans=='y'||ans=='Y')
	 {
	 clrscr();
	 printf("\n How many times you want to enter rows ");
	 scanf("%d",&m);
	 printf("\n How many times you want to enter column");
	 scanf("%d",&n);
	 for(i=0;i<m;i++)
	  for(j=0;j<n;j++)
	  {
	   printf("\n Enter %d %d matrix element",i,j);
	   scanf("%d",&num[i][j]);
	   pro=pro*num[i][j];
	   }
	   for(i=0;i<m;i++)
	    for(j=0;j<n;j++)

	    printf("\n %d %d matrix element is %d",i,j,num[i][j]);
	    printf("\n Product of the matrix element is %4ld",pro);

	    fflush(stdin);
	    printf("\n Do you want to continoue press'y'or press any key to exit");
	    ans=getche();
	   }
	  }
	    void trans()
	    {
	     int a[10][10],t[10][10],i,j,r,c;
	     char ans='y';
	     while(ans=='y'||ans=='Y')
	     {
	      clrscr();
	     printf("\n Enter order of matrix r and c:");
	     scanf("%d %d",&r,&c);
	     printf("\n Enter matrix A elements\n");
	     for(i=0;i<r;i++)
	     for(j=0;j<c;j++)
	     scanf("%d",&a[i][j]);
	     for(i=0;i<r;i++)
	      for(j=0;j<c;j++)
	      {
	      printf("\n %4d",a[i][j]);
	      printf("\n");
	      }
	       for(i=0;i<r;i++)
	       for(j=0;j<c;j++)
	       t[i][j]=a[j][i];
	       printf("\n Transpose Matrix T\n");
	       for(i=0;i<r;i++)
	       for(j=0;j<c;j++)
	       {
	       printf("%d%d=%4d",i,j,t[i][j]);
	       printf("\n");
	       }
	       fflush(stdin);
	       printf("\n Do you want to continoue press 'y' or press any key to exit");
	       ans=getche();
	       }
	       }
       void copy()
       {
	int num[10][10],cp[10][10],i,j,m,n;
	char ans='y';
	while(ans=='y'||ans=='Y')
	{
	 clrscr();
	 printf("\n How many times you want to enter data in rows ");
	 scanf("%d",&m);
	 printf("\n How many times you want to enter data in column");
	 scanf("%d",&n);
	 for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	 {
	 printf("\n Enter %d row and %d column ",i,j);
	 scanf("%d",&num[i][j]);
	 cp[i][j]=num[i][j];
	 }
	  printf("\n Main Matrix element...");
	  for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   printf("\n %d %d = %d",i,j,num[i][j]);

	   printf("\n Coppied matrix element ..");
	   for(i=0;i<m;i++)
	    for(j=0;j<n;j++)
	    printf("\n %d %d = %d",i,j,cp[i][j]);
	    fflush(stdin);
	    printf("\n Do you want to continoue press 'y' or press any key to exit...");
	    ans=getche();
	    }
	    }

	    void trace()
	    {
	    int a[10][10],i,n,j,trace=0;
	    float sum=0,norm;
	    char ans='y';
	    while (ans=='y'||ans=='Y')
	    {
	    clrscr();
	    printf("\n How many Order you want to enter Matrix");
	    scanf("%d",&n);
	    printf("\n Enter The matrix Elements");
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    {
	     printf("%d %d",i,j);
	    scanf(" %d",& a[i][j]);
	    }

	    printf("\n Matrix A\n");
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    {
	    printf("%d %d= %4d",i,j,a[i][j]);
	    printf("\n");

	    }
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    if(i==j)
	    trace=trace+a[i][i];
	    printf("\n Trace of the matrix is %d",trace);
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    sum=sum+a[i][j]*a[i][j];
	    norm=sqrt(sum);
	    printf("\n Norma of matrix is %7.2f",norm);
	    fflush(stdin);
	    printf("\n Do you want to continoue press 'y' or press any key to exit");
	    ans=getche();
	    }
	    }
	     void matrix()
	     {
	     int a[10][10],b[10][10],prod[10][10],i,j,k,m,n,p;
	     char ans='y';
	     while(ans=='y'||ans=='Y')
	     {
	     clrscr();
	     printf("\n Enter order of Matrix A ");
	     scanf("%d %d",&m,&n);
	     printf("\n Enter Matrix A elements ");
	     for(i=0;i<m;i++)
	     for(j=0;j<n;j++)
	     {
	     printf("%d  %d ",i,j);
	     scanf("%d",&a[i][j]);
	     }
	     printf("\n Order of Matrix B: ");
	     scanf("%d %d",&n,&p);
	     printf("\n Enter order of Matrix B Element ");
	     for(k=0;k<n;k++)
	     for(j=0;j<p;j++)
	     {
	     printf("%d  %d ",k,j );
	     scanf("%d",&b[k][j] );
	     }
	     for(i=0;i<m;i++)
	     for(j=0;j<p;j++)

	     prod[i][j]=0;
	     for(k=0;k<n;k++)
	     prod[i][j]=prod[i][j]+a[i][j]*b[k][j];

	     for(i=0;i<m;i++)

	     for(j=0;j<p;j++)
	     {
	     printf("%4d ",prod[i][j]);
	     printf("\n");
	     }
	      fflush(stdin);
	      printf("\n Do you want to continoue press 'y' or press any key to exit");
	      ans=getche();
	      }
	      }
	      void triply()
	      {
	      int ch;
	      while(1)
	      {
	       printf("\n**************************************************");
	       printf("\n*********** 3 or 4 Dimmension Array **************");
	       printf("\n**************************************************");
	       printf("\n*** 1-> To find sum of the Entered Number *********");
	       printf("\n*** 2-> To product of the All 3 dimmension array **");
	       printf("\n*** 3-> Go to back                           *****");
	       printf("\n**************************************************");
	       printf("\n Enter your choice .. 1 to 3 ...");
	       scanf("%d",&ch);
	       switch(ch)
	       {
	       case 1:
	       asitis();
	       break;
	       case 2:
	       ad3();
	       break;
	       case 3:
	       break;
	       default:
	       printf("\n Wrong entry !!!!!!! Try again later...");
	       getch();
	       }
	       if(ch==3)
	       {
	       break;
	       }
	       }
	       }
       void asitis()
       {
       int num[10][5][3],i,j,k,n,l,m,sum;
       char ans='y';
       while(ans=='y'||ans=='y')
       {
       clrscr();
       printf("\n How many times you want to Enter 3 Dimmension Array ");
       scanf("%d",&n);
       for(l=0;l<n;l++)
       {
       printf("\n How many times you want to enter elements ");
       scanf("%d",&m);
       for(sum=0,i=0;i<m;i++)
	for(j=0;j<m;j++)
	 for(k=0;k<m;k++)
	 {
	 printf("\n Enter %d %d %d Number ",i,j,k);
	 scanf("%d",&num[i][j][k]);
	 sum=sum+num[i][j][k];
	 }

	 for(i=0;i<m;i++)
	  for(j=0;j<m;j++)
	   for(k=0;k<m;k++)
	   printf("\n You Entered Number is %d %d %d = %d ",i,j,k,num[i][j][k]);
	   printf("\n Sum of the number %d = %d ",l,sum);
	   }

	   fflush(stdin);
	   printf("\n Do you want to continoue press 'y' or press any key to exit");
	   ans=getche();
	   }
	   }

	void ad3()
	{
	int num[10][3][6],i,j,k,l,n,m;
	double pro;
	char ans='y';
	while(ans=='y'||ans=='y')
	{
	clrscr();
	printf("\n How many time you want to find product");
	scanf("%d",&m);
	for(l=0;l<m;l++)
	{
	printf("\n How many times you want to enter n*n*n vlaue ");
	scanf("%d",&n);
	for(pro=0,i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)
	{
	printf("\n Enter %d %d %d Number ",i,j,k);
	scanf("%d",&num[i][j][k]);
	pro=pro*num[i][j][k];
	}
	 for(i=0;i<n;i++)
	 for(j=0;j<n;j++)
	 for(k=0;k<n;k++)
	 printf("\n You Entered %d %d %d value is %d ",i,j,k,num[i][j][k]);

	 printf("\n Product of the value is %d = %lf ",l,pro);

	 }
	 fflush(stdin);
	 printf("\n Do you want to continoue press 'y' or press any key to exit");
	 ans=getche();
	 }
	 }









     void ds()
      {
       int ch;
       while(1)
       {
	printf("\n************************************************************");
	printf("\n** 1-> Address structure Nested into Student Structure *****");
	printf("\n** 2-> Address and Admission Nested into Student Structure**");
	printf("\n** 3-> Address Nested into Employee Structure             **");
	printf("\n** 4-> Address and Student Nested into Employee Structure **");
	printf("\n** 5-> Goto Back   .................                      **");
	printf("\n************************************************************");
	printf("\n Enter your choice  1 to 5......");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	student1();
	break;
	case 2:
	admission();
	break;
	case 3:
	employee();
	break;
	case 4:
	student2();
	break;
	case 5:
	break;
	default:
	printf("\n Wrong entry !!!! Try again ......");
	getch();
	}
	if(ch==5)
	break;
	}
	}
	void student1()
	{
	      struct student s;
	      printf("\n Enter roll number");
	      scanf("%d",&s.roll);
	      printf("\n Enter Name of Student");
	      fflush(stdin);
	      gets(s.name);
	      printf("\n Enter Student Address ");
	      printf("\n Enter village");
	      fflush(stdin);
	      gets(s.a.vill);
	      printf("\n Enter Post office");
	      fflush(stdin);
	      gets(s.a.po);
	      printf("\n Enter Police station ");
	      fflush(stdin);
	      gets(s.a.ps);
	      printf("\n Enter District");
	      fflush(stdin);
	      gets(s.a.dist);
	      printf("\n Enter Marks of Subjects");
	      printf("\n Enter Marks of Hindi ");
	      scanf("%d",&s.m1);
	      printf("\n Enter Marks of English");
	      scanf("%d",&s.m2);
	      printf("\n Enter Marks of Maths ");
	      scanf("%d",& s.m3);
	      s.total=s.m1+s.m2+s.m3;
	      s.per=s.total/3;
	      if(s.per<33)
	      {
	      strcpy(s.div,"failed");
	      }
	      if(s.per>=33&&s.per<45)
	      {
	      strcpy(s.div,"failed");
	      }
	      if(s.per>=45&&s.per<60)
	      {
	      strcpy(s.div,"Second");
	      }
	      if(s.per>=60)
	      {
	      strcpy(s.div,"first");
	      }
	      clrscr();
	      printf("\n Roll number =%d",&s.roll);
	      printf("\n Name of Student =%s",s.name);
	      printf("\n Address proof of Student");
	      printf("\n Village=%s",s.a.vill);
	      printf("\n Post office = %s",s.a.po);
	      printf("\n Police Station =%s",s.a.ps);
	      printf("\n District =%s",s.a.dist);
	      printf("\n Marks of Hindi =%d",s.m1);
	      printf("\n Marks of English =%d",s.m2);
	      printf("\n Marks of Math =%d",s.m3);
	      printf("\n Total marks=%d",s.total);
	      printf("\n Percent of marks = %.2f",s.per);
	      printf("\n Division =%s",s.div);
	      getch();
	      }
       void admission()
       {
	struct student1 s1;

	int i,m;
	clrscr();
	printf("\n How many times You want to Input Record of Employee");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
	printf("\n Enter Roll of Student ");
	scanf("%d",&s1.roll);
	printf("\n Enter name of Student");
	fflush(stdin);
	gets(s1.name);
	printf("\n Enter Admission detailed");
	printf("\n Admission Number ");
	scanf("%d",&s1.ad.adno);
	printf("\n Enter Passing Year ");
	scanf("%d",&s1.ad.preyear);
	printf("\n Enter Your Starting Session ");
	scanf("%d",&s1.ad.session1);
	printf("\n Enter Your Ending Session ");
	scanf("%d",&s1.ad.session2);
	printf("\n Enter Your previous Total Subjects ");
	scanf("%d",&s1.ad.totalsub);
	printf("\n Enter your obtand Marks ");
	scanf("%d",&s1.ad.marks);
	s1.ad.per=s1.ad.marks/s1.ad.totalsub;
	printf("\n Enter Your address");
	printf("\n Village= ");
	fflush(stdin);
	gets(s1.ad.a.vill);
	printf("\n Post office = ");
	fflush(stdin);
	gets(s1.ad.a.po);
	printf("\n Police Station =");
	fflush(stdin);
	gets(s1.ad.a.ps);
	printf("\n District =");
	fflush(stdin);
	gets(s1.ad.a.dist);
	printf("\n Enter your Current Marks...");
	printf("\n Enter Marks of Hindi...");
	scanf("%d",&s1.m1);
	printf("\n Enter Marks of English....");
	scanf("%d",&s1.m2);
	printf("\n Enter Marks of Math...");
	scanf("%d",&s1.m3);
	s1.total=s1.m1+s1.m2+s1.m3;
	s1.per=s1.total/3;
	if(s1.per<33)
	{
	strcpy(s1.div,"failed");
	}
	if(s1.per>=33&&s1.per<45)
	{
	strcpy(s1.div,"Third");
	}
	if(s1.per>=45&&s1.per<60)
	{
	strcpy(s1.div,"Second");
	}
	if(s1.per>60)
	{
	strcpy(s1.div,"First");
	}
	printf("\n press any key to Insert new record");
	getch();
	}
	 for(i=1;i<=m;i++)
	 {

	clrscr();
	printf("\n Roll number =%d",s1.roll);
	printf("\n Name of Student = %s",s1.name);
	printf("\n %s Admission Detailed...",s1.name);
	printf("\n Admission Number = %d",s1.ad.adno);
	printf("\n You Qualified previous year is %d",s1.ad.preyear);
	printf("\n Your Starting Session is %d",s1.ad.session1);
	printf("\n Your Ending Sessio is %d",s1.ad.session2);
	printf("\n Your Obtend Marks in previous Year is %d",s1.ad.marks);
	printf("\n Your Total Subjects is %d",s1.ad.totalsub);
	printf("\n Your obtend percentage is %.2f",s1.ad.per);
	printf("\n %s Address Detailed ",s1.name);
	printf("\n Village =%s",s1.ad.a.vill);
	printf("\n Post office =%s",s1.ad.a.po);
	printf("\n Police Station =%s",s1.ad.a.ps);
	printf("\n District =%s",s1.ad.a.dist);
	printf("\n Your Hindi marks is %d",s1.m1);
	printf("\n Your English marks is %d",s1.m2);
	printf("\n Your Mathematics Marks is %d",s1.m3);
	printf("\n Your Total marks = %d",s1.total);
	printf("\n Your Percent is %.2f",s1.per);
	printf("\n Your Division is %s ",s1.div);
	getch();
	}
	}
	void employee()
	{
	struct employee e;
	printf("\n Enter Employee number ");
	scanf("%d",&e.empno);
	printf("\n Enter Name of employee ");
	fflush(stdin);
	gets(e.empname);
	printf("\n Enter  Address Detailed ");
	printf("\n Enter Village = ");
	fflush(stdin);
	gets(e.a.vill);
	printf("\n Enter Post Office =");
	fflush(stdin);
	gets(e.a.po);
	printf("\n Enter Police Station =");
	fflush(stdin);
	gets(e.a.ps);
	printf("\n enter District ");
	fflush(stdin);
	gets(e.a.dist);
	printf("\n Enter %s Besic Selary ",e.empname);
	scanf("%d",&e.bs);
	if(e.bs<5000)
	{
	e.da=e.bs*4/100;
	e.ta=e.bs*5/100;
	e.hra=e.bs*6/100;
	e.tax=e.bs*5/100;
	}
	if(e.bs>=5000&&e.bs<10000)
	{
	e.da=e.bs*5/100;
	e.ta=e.bs*6/100;
	e.hra=e.bs*7/100;
	e.tax=e.bs*6/100;
	}
	if(e.bs>10000)
	{
	e.da=e.bs*7/100;
	e.ta=e.bs*9/100;
	e.hra=e.bs*10/100;
	e.tax=e.bs*8/100;
	}
	e.gross=e.bs+e.da+e.ta+e.hra;
	e.pay=e.gross-e.tax;
	clrscr();
	printf("\n Employee number = %d",e.empno);
	printf("\n Employee name =%s",e.empname);
	printf("\n Employee Address Detailed");
	printf("\n Village= %s",e.a.vill);
	printf("\n Post Office =%s",e.a.po);
	printf("\n Police Station =%s",e.a.ps);
	printf("\n District = %s",e.a.dist);
	printf("\n Employee Basic Selary =%d",e.bs);
	printf("\n D A =%.2f",e.da);
	printf("\n T A =%.2f",e.ta);
	printf("\n HRA = %.2f",e.hra);
	printf("\n Tax = %.2f",e.tax);
	printf("\n Gross Pay =%.2f",e.gross);
	printf("\n Total pay =%.2f", e.pay);
	getch();
	}
	 void student2()
	 {
	 struct employee1 e1;
	  printf("\n Enter Employee number ");
	  scanf("%d",&e1.empno);
	  printf("\n Enter Employee Name ");
	  fflush(stdin);
	  gets(e1.empname);
	  printf("\n Enter Studets Detaileds ");
	  printf("\n ");
	  printf("\n Enter Students Roll number");
	  scanf("%d",&e1.s.roll);
	  printf("\n  Enter Students Name =");
	  fflush(stdin);
	  gets(e1.s.name);
	  printf("\n Enter Employee or Students Address Proof");
	  printf("\n Village = ");
	  fflush(stdin);
	  gets(e1.s.a.vill);
	  printf("\n Post office =");
	  fflush(stdin);
	  gets(e1.s.a.vill);
	  printf("\n Police Station =");
	  fflush(stdin);
	  gets(e1.s.a.vill);
	  printf("\n District =");
	  fflush(stdin);
	  gets(e1.s.a.dist);
	  printf("\n Enter Students Subjects Marks");
	  printf("\n Hindi=");
	  scanf("%d",&e1.s.m1);
	  printf("\n English =");
	  scanf("%d",&e1.s.m2);
	  printf("\n Mathematics =");
	  scanf("%d",&e1.s.m3);
	  printf("\n Enter Employee Basic selary ");
	  scanf("%d",&e1.bs);
	  e1.s.total=e1.s.m1+e1.s.m2+e1.s.m3;
	  e1.s.per= e1.s.total/3;
	  if(e1.s.per<30)
	  strcpy(e1.s.div,"Failed");
	  if(e1.s.per>=30&&e1.s.per<45)
	  strcpy(e1.s.div,"Third");
	  if(e1.s.per>=45&&e1.s.per<60)
	  strcpy(e1.s.div,"Second");
	  if(e1.s.per>60)
	  strcpy(e1.s.div,"First");
	  if(e1.bs<5000)
	  {
	  e1.da=e1.bs*5/100;
	  e1.ta=e1.bs*6/100;
	  e1.hra=e1.bs*7/100;
	  e1.tax=e1.bs*5/100;
	  }
	  if(e1.bs>=5000&&e1.bs<10000)
	  {
	  e1.da=e1.bs*6/100;
	  e1.ta=e1.bs*7/100;
	  e1.hra=e1.bs*8/100;
	  e1.tax=e1.bs*7/100;
	  }
	  if(e1.bs>10000)
	  {
	  e1.da=e1.bs*8/100;
	  e1.ta=e1.bs*9/100;
	  e1.hra=e1.bs*10/100;
	  e1.tax=e1.bs*10/100;
	  }
	  e1.gross=e1.bs+e1.da+e1.ta+e1.hra;
	  e1.pay=e1.gross-e1.tax;
	  clrscr();
	  printf("\n******************************************************");
	  printf("\n Employee Number=%d",e1.empno);
	  printf("\n Employee Name =%s",e1.empname);
	  printf("\n Student Roll Number= %d",e1.s.roll);
	  printf("\n Student Name is %s ",e1.s.name);
	  printf("\n Address Proof");
	  printf("\n Village= %s",e1.s.a.vill);
	  printf("\n Post office =%s",e1.s.a.po);
	  printf("\n Police Station =%s",e1.s.a.ps);
	  printf("\n District =%s",e1.s.a.dist);
	  printf("\n Students Marks in Subject byes");
	  printf("\n Hindi= %d",e1.s.m1);
	  printf("\n English =%d",e1.s.m2);
	  printf("\n Math =%d",e1.s.m3);
	  printf("\n Besic Selary =%d",e1.bs);
	  printf("\n D A=%.2f",e1.da);
	  printf("\n T A =%.2f",e1.ta);
	  printf("\n HRA =%.2f",e1.hra);
	  printf("\n TAX= %.2f",e1.tax);
	  printf("\n Gross payment =%.2f",e1.gross);
	  printf("\n Total Payment =%.2f",e1.pay);
	  printf("\n Total Marks of Students =%d",e1.s.total);
	  printf("\n Percent of Marks  =%.2f",e1.s.per);
	  printf("\n Division =%s",e1.s.div);
	  printf("\n*************************************************");
	  getch();
	  }



















