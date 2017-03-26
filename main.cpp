//
//  main.cpp
//  shuffle
//
//  Created by 郭悟清 on 2017/3/18.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;
void swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
void Randomshuffle(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=rand()%(n-i)+i;//产生i到n-1间的随机数
        swap(a[i],a[j]);
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    srand((unsigned)time(0));
    int n=9;
    int a[]={1,2,3,4,5,6,7,8,9};
    Randomshuffle(a, n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
