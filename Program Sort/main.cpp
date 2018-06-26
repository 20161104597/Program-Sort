#include<iostream>
#include<string>
using namespace std;
struct player {
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
    string name[20];
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
        int n,i;
        cout<<"请输入要录入的评委个数:"<<endl;
        cin>>n;
        cout<<"请录入评委编号、姓名与性别"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>s2[i].num;
            cin>>s2[i].name;
            cin>>s2[i].sex;

        }
        cout<<"已成功录入评委信息!"<<endl;
    }

int main()
{
    cout<<"----欢迎进入打分系统----"<<endl;
    cout<<"----1.录入选手信息----"<<endl;
    cout<<"----2.录入评委信息----"<<endl;
    cout<<"----3.开始打分----"<<endl;
    cout<<"----4.保存分数信息----"<<endl;
    cout<<"----5.退出打分系统----"<<endl;
    while（1）
    {
        switch(menu())
        {
            case 1:
                input player(s1);
                break;
                
            case 2:
                input judge(s2);
                break;
                
            case 3:
                begin();
                break;
               
           case 4：
                save（）；
                break;
                
           case 5：
                cout<<"thanks for using!"<<endl;
                exit(1);
            
                
        }
    }
    return 0;
    
}
