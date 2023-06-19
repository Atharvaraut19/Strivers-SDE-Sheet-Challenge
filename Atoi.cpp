#include <bits/stdc++.h> 
int atoi(string str) {
     string s =str;
     int n = 0;
     int l = s.length();
     int j = 0;
     int flag =0;
     while(s[j]==' ')
     {
         j++;
     }
     if(s[j]=='-')
     {
         flag = -1;
     }
     else 
     {
         flag =1;
     }
     for (int i = j;i<=l-1;i++)
     {
         if(s[i]>='0'&& s[i]<='9')
         {
             int v = s[i]-'0';
             n = (n*10)+v;
         }
         
     }
     if(flag == -1)
     {
         return -n;
     }
     return n;
}