//节目类型说明
#include<iostream>
#include<string>
using namespace std;
int p,q,p1,q1;            //p，q分别为选手和裁判的个数 个数等于录入与读入之和（eg:p=p1+p2）
int p2=0,q2=0;      //将文件中选手和评委个数均初始化为0；
struct player{
    string name;
    string sex;
    string program;
    string type;
    string classs;
    string tel;
    double score[15];
    };
struct judge{
    string num;
    string name;
    string sex;
    
};
void player()
{
    struct player s1[100];
    int i;       //p1为程序中录入的选手的个数
    cout<<"请输入要录入的选手个数:"<<endl;
    cin>>p1;
    cout<<"请依次录入选手姓名、性别、节目名称、节目类型、选手班级与选手电话"<<endl;
    for(i=0;i<p1;i++)
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
void judge()
    {
        struct judge s2[20];
        int i;           //q1为程序中录入的评委的个数
        cout<<"请输入要录入的评委个数:"<<endl;
        cin>>q1;
        cout<<"请录入评委编号、姓名与性别"<<endl;
        for(i=0;i<q1;i++)
        {
            cin>>s2[i].num;
            cin>>s2[i].name;
            cin>>s2[i].sex;

        }
        cout<<"已成功录入评委信息!"<<endl;
    }
void begin()
{
    struct player s1[100];
    int n,i,max,min,z;
    p=p1+p2;
    q=q1+q2;
    min=s1[n].score[1];
    max=s1[n].score[2];
    cout<<"开始打分"<<endl;
    for(n=1;n<=p;n++)
    {
        cout<<1<<endl;
        cout<<"请给第"<<n<<"位选手打分："<<endl;
        for(i=1;i<=q;i++)
        {
            cout<<"请输入第"<<i<<"位评委的分数"<<endl;
            cin>>s1[n].score[i];
            for(z=1;z<=q;z++)
            {
                if(s1[n].score[z]>max)
                {
                    max=s1[n].score[z];
                }
                cout<<"去掉一个最高分"<<max<<endl;
            }
            for(z=1;z<=q;z++)
            {
                if(s1[n].score[z]<min)
                {
                    min=s1[n].score[z];
                }
                cout<<"去掉一个最低分"<<min<<endl;
            }
            
            
    
    
        }
        
    }
    
    
    
    /*max=s1[n].score[1];                   max,min,z;
    {
        for(z=1;z<=q;z++)
        {
            if(s1[n].score[z]>max)
            {
                max=s1[n].score[z];
            }
            cout<<"去掉一个最高分"<<max<<endl;
            cout<<"去掉一个最低分"<<min<<endl;
            cout<<"正在计算中.."<<endl;
        }
        
    }*/
    
    
    
    

}

int main()
{
    int x;
    while(1)
    {
        cout<<"----欢迎进入打分系统----"<<endl;
        cout<<"----1.录入选手信息----"<<endl;
        cout<<"----2.录入评委信息----"<<endl;
        cout<<"----3.读入选手信息----"<<endl;
        cout<<"----4.读入评委信息----"<<endl;
        cout<<"----5.开始打分----"<<endl;
        cout<<"----6.保存分数信息----"<<endl;
        cout<<"----7.退出打分系统----"<<endl;
        
        do
        {
            cout<<"请输入'1-7'选项:"<<endl;
            cin>>x;
        }
        while(x<1 ||x>7);
        
        switch(x)
        {
            case 1:
                player();
                break;
                
            case 2:
                judge();
                break;
            case 3:
                //read in1();
                break;
            case 4:
                //read in2();
                break;

            case 5:
                begin();
                break;
            case 7:
                cout<<"thanks for using!"<<endl;
                exit(1);
        }
    }
    
    return 0;
}
