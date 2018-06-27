#include<iostream>
#include<string>
using namespace std;
int o;
struct player{
    string name;
    string sex;
    string program;
    string type;
    string classs;
    string tel;
    double score;
    };
struct judge{
    string num;
    string name;
    string sex;
    
};
void player()
{
    struct player s1[100];
    int n,i;
    cout<<"请输入要录入的选手个数:"<<endl;
    cin>>n;
    cout<<"请依次录入选手姓名、性别、节目名称、节目类型、选手班级与选手电话"<<endl;
    for(i=0;i<n;i++)
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
        int i;
        cout<<"请输入要录入的评委个数:"<<endl;
        cin>>o;
        cout<<"请录入评委编号、姓名与性别"<<endl;
        for(i=0;i<o;i++)
        {
            cin>>s2[i].num;
            cin>>s2[i].name;
            cin>>s2[i].sex;

        }
        cout<<"已成功录入评委信息!"<<endl;
    }
void begin()
{
    int i,max,min,temp;
    for(i=0;i<o;i++)
    {
        cout<<"请输入第"<<i<<"位评委的分数"<<endl;
    }
    cout<<"正在计算中.."<<endl;
    
}

int main()
{
    int x;
    while(1)
    {
        cout<<"----欢迎进入打分系统----"<<endl;
        cout<<"----1.录入选手信息----"<<endl;
        cout<<"----2.录入评委信息----"<<endl;
        cout<<"----3.开始打分----"<<endl;
        cout<<"----4.保存分数信息----"<<endl;
        cout<<"----5.退出打分系统----"<<endl;
        do
        {
            cout<<"请输入'1-5'选项"<<endl;
            cin>>x;
        }
        while(x<1 ||x>5);
        
        switch(x)
        {
            case 1:
                player();
                break;
                
            case 2:
                judge();
                break;
            case 3:
                begin();
                break;
                
            case 5:
                cout<<"thanks for using!"<<endl;
                exit(1);
                
        }
    }
    
    return 0;
    
}
