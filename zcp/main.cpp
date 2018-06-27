//
//  main.cpp
//  zcp
//
//  Created by 20161104604 on 18/6/25.
//  Copyright © 2018年 20161104604. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int temp;
    int a[5];
    float ave=0;
    cout<<" 请输入5个评委的打分:\n";
    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    for(i=1;i<4;i++)
        ave+=a[i];
    ave=ave/3;
    cout<<ave<<endl;
    return 0;
    
}
