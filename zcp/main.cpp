//
//  main.cpp
//  zcp
//
//  Created by 20161104604 on 18/6/25.
//  Copyright © 2018年 20161104604. All rights reserved.
//

#include <iostream.h>
struct pingwei   //定义结构类型
{
    int num;
    double score;
};ping [5]={1,1}{2,2}{3,3}{4,4}{5,5}

void sort(pingwei ping[],int n);
const int N=5;
void main()
{
    cout<<"请输入裁判的分数\n";
    cout<<endl;
    cin>>ping[0].score>>ping[1].score>>ping[2],score>>ping[3].score>>ping[4].score;
    sort(ping,N);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"最高分"<<ping[4].num<<"\t"<<"\t"<<ping[4].score<<endl;
    cout<<"最低分"<<ping[0].num<<"\t"<<"\t"<<ping[0].score<<endl;
    double jun,sum;
    jun=(ping[1].score+ping[2].score+ping[3].score)/3;
    sum=jun*5;
    cout<<endl;
    cout<<"选手得分":"<<""\t"<<sum<<endl;
}
  void sort(pingwei ping[],int n)
{
    pingwei temp;
    for(int i=0;i<N-1;i++)
        for(int j=0;j<N-1;j++)
            if(ping[j].score>ping[j+1].score)
            {
                temp=ping[j];
                ping[j]=ping[j+1];
                ping[j+1]=temp;
            }
}

