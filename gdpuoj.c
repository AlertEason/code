int main()
{ int a[100],n,i,j,m,flag;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{ m=a[i];
flag=0; //先假定不需要插入
for(j=i-1;j>=0 && a[j]>m;j--) //大元素往后移 ，腾出插入的位置
【1】//请在此填入多行代码
if(flag) //若需要插入
a[j+1]=m;
}
for(i=0;i<n;i++)
printf("%5d",a[i]);
return 0;
}