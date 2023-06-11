/*Brute Force:-
  For every element for 0 to n-1 and whicher for a[j]>a[i] nge[i] = a[aj] then brk 2 for loops se 
  But for 10 , 7, 5 , 3,1 sab -1 ayega tho
  Time complexity is (on2)*/

  /*Efficient Algo:-
   Using Stack
   4,12,5,3,1,2,5,3,1,2,4,6
   1. Empty for first time we  will iterate form last ekement also there are no element in the stack  
     USko -1 assign karo saying no greater element and push the 6 pointer moves to 4

    2. 4 check if lesser element in the stack if not then it will take the top most element of the stack, 
    push it self in the stack(4) and pointer moves to 2

    3. 2 check if lesser element in the stack if not then will take the top most element of the stack and
      push it self in the stack  and pointer moves to 2

    4.1 check if lesser the 1 in stack then it checks and same process repeats

patterns form stack contains in the increaseing order 6,4,2,1

    5. 3 compares with top since less then remove it until we get greateer the 3,
    once we get greater then  3 repeat same process 
    
    new stack 6,4,3

    6.for 5 remove 4 and 3 and check with 6 since 6 is greater. 5 keliye 6 he and push 5 in the stack

    7.2 keliye since stack top is only greater then 2 tho wahi uska next greater he.then piush 2 in stack  

    8.3 keliye sab smaller remove karo and wapas check untile bigger.

    9.5 keliye bhi same

    10. 12 keliuye since koi nai hee as we remove put -1 amnd insert 12 as the next greater number

    IMP:= We Can also use it for finding the greatest number in the stack 


    ABHI CiRCULAR 
    i%n karna he 

    Time complexity is 2n,2n
     */
   #include <bits/stdc++.h> 
vector<int> nextGreater(std::vector<int> &arr, int n) {
  vector<int> nge(n, -1);
  stack<int> st;

  for (int i = 2 * n - 1; i >= 0; i--) {
    while (!st.empty() && st.top() <= arr[i % n]) {
      st.pop();
    }
    if (i < n && !st.empty()) {
      nge[i] = st.top();
    }
    st.push(arr[i % n]);
  }

  return nge;
}