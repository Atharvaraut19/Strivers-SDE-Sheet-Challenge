void sortedInsert(stack<int> &stack,int num)
{
if(stack.empty()||(!stack.empty() && stack.top()<num))
	{
		stack.push(num);
		return;
	}

	int n = stack.top();
	stack.pop();

	// Recursive Call
	sortedInsert(stack,num);

	stack.push(n);

}

void sortStack(stack<int> &stack)
{
	//base case har example me
	if(stack.empty())
	{
		return;
	}
	int num = stack.top();
	stack.pop();

	sortStack(stack);

	sortedInsert(stack,num);
};
/* Ekdam end element me janeka usko nikal ke usko sahi position pe fit karneka
 fir uske pihe wale element pe fir uske piche*/1
 /* Ye next stack frame me store hoga and jab empty hoga tab usko sahi position me dalunga
 
 agar stack is empty then pehele fit karo then uske bad walo se check karo and firt karo*/

 /*Condition Agar mera s.top()<x then agar chota he tho no pop 
   agar false hua tho woh top pop hoga and fir waps woh add hoga  */