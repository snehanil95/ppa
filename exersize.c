#include<stdio.h>

//extern int g;

void demo()
{
    // printf("global var=%d\n",g);
     // printf("inside demo");
}

int addition(int no1,int no2)
{

    int ans=0;


  // auto int ans;

   // extern int ans;//extern keyword 

    extern int g;

   // ans=999;

    printf("ans=%d\n",g);

    ans=no1+no2;

    //ans=no1+no2+ans;

   // printf("ans=%d\n",ans);

    return ans;

}

int main()
{

int ii=20;

int ino=20;

int ret=addition(ii,ino);

printf("addition is=%d\n",ret);

demo();





/*float ff=22.22;

//double dd=33.33;

//char cc='a';


//printf("int=%d\n",ii);

//printf("float=%f\n",ff);

//printf("double=%lf\n",dd);

//printf("char=%c\n",cc);

//printf("=%ld%ld%ld%ld\n",sizeof(ii),sizeof(ff),sizeof(dd),sizeof(cc));


//printf("int=%d\n",&ii);

//printf("float=%d\n",&ff);

//printf("double=%d\n",&dd);

//printf("char=%d\n",&cc);


//printf("int=%p\n",&ii);

//printf("float=%p\n",&ff);

//printf("double=%p\n",&dd);

//printf("char=%p\n",&cc);













//printf("=%d%d%d%d",&ii,&ff,&dd,&cc);
*/
return 0;
}
