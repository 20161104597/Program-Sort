//节目类型说明
//sing 唱歌
//dance 跳舞
//drama 舞台剧
//chant 朗诵
//rap 说唱
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
//p，q分别为选手和裁判的个数 个数等于录入与读入之和（eg:p=p1+p2）
int p=0,q=0;      //将文件中选手和评委个数均初始化为0；
struct player{
    string name;
    string sex;
    string program;
    string type;
    string classs;
    string tel;
    double score[15];
    double max;
    double min;
    double avg;
    double sum;
};
struct judge{
    string num;
    string name;
    string sex;
    
};

struct player s1[100];
struct judge s2[100];
void play(player *s1)
{
    int i;       //p1为程序中录入的选手的个数
    cout<<"请输入要录入的选手个数:"<<endl;
    cin>>p;
    cout<<"请依次录入选手姓名、性别、节目名称、节目类型、选手班级与选手电话"<<endl;
    for(i=1;i<=p;i++)
    {
        cin>>s1[i].name;
        cin>>s1[i].sex;
        cin>>s1[i].program;
        cin>>s1[i].type;
        cin>>s1[i].classs;
        cin>>s1[i].tel;
    }
    cout<<"已成功录入选手信息!"<<endl;
}
void jud(judge *s2)
{
    int i;           //q1为程序中录入的评委的个数
    cout<<"请输入要录入的评委个数:(至少三个评委)"<<endl;
    cin>>q;
    cout<<"请录入评委编号、姓名与性别"<<endl;
    for(i=0;i<q;i++)
    {
        cin>>s2[i].num;
        cin>>s2[i].name;
        cin>>s2[i].sex;
        
    }
    cout<<"已成功录入评委信息!"<<endl;
}


/*void Readplayer()
 321{
 FILE* fp;
 int i,k;
 fp=fopen("//Users//Stereophonic//Desktop//Program\ Sort//judge.csv","w");
 if(fp == NULL)
 cout<<"文件打开失败"<<endl;
 else
 {
 k=1;
 fprintf(fp,"选手姓名、选手性别、节目名称、节目类型、选手班级与选手电话\n");
 for(i=0;i<p2;i++)
 {
 fprintf(fp,"%s,%s,%s,%s,%s,%s\n",)
 k++
 }
 }
 
 }
 void Readjudge()
 {
 FILE* fp;
 int i,k;
 fp=fopen("//Users//Stereophonic//Desktop//Program\ Sort//judge.csv","w");
 if(fp == NULL)
 cout<<"文件打开失败"<<endl;
 else
 {
 k=1;
 fprintf(fp,"评委编号，评委姓名，评委性别,\n");
 for(i=0;i<q2;i++)
 {
 fprintf(fp,"%s,%s,%s\n",)
 k++
 }
 }
 
 
 }*/
void begin(player *s1)
{
    int n,i,z;
    cout<<"开始打分"<<endl;
    for(n=1;n<=p;n++)
    {
        cout<<"请给第"<<n<<"位选手打分："<<endl;
        for(i=1;i<=q;i++)
        {
            cout<<"请输入第"<<i<<"位评委的分数"<<endl;
            cin>>s1[n].score[i];
        }
        s1[n].min=s1[n].score[1];
        s1[n].max=s1[n].score[1];
        for(z=1;z<=q;z++)
        {
            if(s1[n].score[z]>s1[n].max)
            {
                s1[n].max=s1[n].score[z];
            }
            
        }
        for(z=1;z<=q;z++)
        {
            if(s1[n].score[z]<s1[n].min)
            {
                s1[n].min=s1[n].score[z];
            }
            
        }
        cout<<"去掉一个最高分"<<s1[n].max<<endl;
        cout<<"去掉一个最低分"<<s1[n].min<<endl;
        for(i=1; i<=q; i++)
        {
            s1[n].sum+=s1[n].score[i];
        }
        s1[n].avg=(s1[n].sum-s1[n].min-s1[n].max)/(q-2);
        cout<<"平均分为："<<s1[n].avg<<endl;
        cout<<"总分为："<<s1[n].sum<<endl;
    }
}
void save(player *s1)
{
    FILE *fp;
    int i,n;
    fp=fopen("C:\\Users\\Administrator\\Desktop\\save.txt","w");
    if(fp==NULL)
    {
        cout<<"文件保存失败！\n"<<endl;
    }
    else
    {
        fprintf(fp,"选手姓名、性别、节目名称、节目类型、选手班级与选手电话、总分、最高分、最低分、平均分\n");
        for(i=1;i<=p;i++)
        {
            fprintf(fp,"%s,%s,%s,%s,%s,%s,%lf,%lf,%lf,%lf\n",
                    s1[i].name.c_str(),s1[i].sex.c_str(),s1[i].program.c_str(),s1[i].type.c_str(),s1[i].classs.c_str(),s1[i].tel.c_str(),s1[i].sum,s1[i].max,s1[i].min,s1[i].avg);
            
            
        }
        cout<<("信息保存成功！\n")<<endl;
        fclose(fp);
    }
}
void displayPlayer(player *s1)
{
    int i;
    if(p==0)
    {
        cout<<"未录入选手信息！"<<endl;
    }
    else
    {
        cout<<"已录入选手信息如下:"<<endl;
        for(i=1;i<=p;i++)
        {
            cout<<"选手姓名："<<s1[i].name<<endl;
            cout<<"选手性别："<<s1[i].sex<<endl;
            cout<<"节目类型："<<s1[i].program<<endl;
            cout<<"节目类型："<<s1[i].type<<endl;
            cout<<"选手班级："<<s1[i].classs<<endl;
            cout<<"选手电话："<<s1[i].tel<<endl;
            cout<<"-----------------"<<endl;
        }
    }
    
    
    
}
void displayJudge(judge *s2)
{
    int i;
    if(q==0)
    {
        cout<<"未录入评委信息！"<<endl;
    }
    else
    {
        cout<<"已录入评委信息如下:"<<endl;
        for(i=0;i<q;i++)
        {
            cout<<"评委编号："<<s2[i].num<<endl;
            cout<<"评委姓名："<<s2[i].name<<endl;
            cout<<"评委性别："<<s2[i].sex<<endl;
            cout<<"-----------------"<<endl;
        }
    }
    
    
    
}
void sort(player *s1)
{
    struct player temp;
    int i,j;
    for(i=0;i<p;i++)
    {
        for(j=0;j<p-i;j++)
        {
            if(s1[j].avg<s1[j+1].avg)
            {
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }
    }
    for(i=0;i<p;i++)
    {
        cout<<"选手姓名:"<<s1[i].name;
        cout<<"    节目名称:"<<s1[i].program;
        cout<<"    节目类型"<<s1[i].type;
        cout<<"    平均分"<<s1[i].avg<<endl;
        cout<<"-----------------"<<endl;
        
    }
}
/*void typesort(player *s1)
 {
	string n;
	struct player a[15];
	struct player b;
	int i=0,count=0;
	int j;
	cout<<"请输入需要排序的节目类型:"<<endl;
	cin>>n;
	for(j=0;j<p;j++)
	{
 if(n==s1[i].type)
 {
 a[count]=s1[i].type;
 count++;
 i++;
 }
 else
 {
 i++;
 }
 
	}
	for(i=0;i<count;i++)
	{
 for(j=0;j<count-i;j++)
 {
 if(a[j].avg<a[j+1].avg)
 {
 b=a[j];
 a[j]=a[j+1];
 a[j+1]=b;
 }
 }
	}
	for(i=0;i<count;i++)
	{
 cout<<"选手姓名："<<s1[i].name;
 cout<<"节目名称:"<<s1[i].program;
 cout<<"节目类型"<<s1[i].type;
 cout<<"平均分"<<s1[i].avg<<endl;
	}
 }
 */

int main()
{
    int x;
    while(1)
    {
        cout<<"—————————————"<<endl;
        cout<<"|----欢迎进入打分系统---|"<<endl;
        cout<<"|----1.录入选手信息-----|"<<endl;
        cout<<"|----2.录入评委信息-----|"<<endl;
        cout<<"|----3.显示选手信息-----|"<<endl;
        cout<<"|----4.显示评委信息-----|"<<endl;
        cout<<"|----5.开始打分---------|"<<endl;
        cout<<"|----6.选手平均分排序---|"<<endl;
        cout<<"|----7.类型平均分排序---|"<<endl;
        cout<<"|----8.保存分数信息-----|"<<endl;
        cout<<"|----9.退出打分系统-----|"<<endl;
        cout<<"—————————————"<<endl;
        cout<<"|Copyright  2018 Vincent. All Rights Reserved.|"<<endl;
        
        do
        {
            cout<<"请输入'1-9'选项:"<<endl;
            cin>>x;
        }
        while(x<1 ||x>9);
        
        switch(x)
        {
            case 1:
                play(s1);
                break;
            case 2:
                jud(s2);
                break;
            case 3:
                displayPlayer(s1);
                break;
            case 4:
                displayJudge(s2);
                break;
            case 5:
                begin(s1);
                break;
            case 6:
                sort(s1);
                break;
                /*case 7:
                 typesort(s1);*/
            case 8:
                save(s1);
                break;
            case 9:
                cout<<"thanks for using!"<<endl;
                exit(1);
        }
    }
    return 0;
}
