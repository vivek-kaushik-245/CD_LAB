e=input(("Enter expression in prefix form: ")) 
stack=[] 
operators=set(['+','-','*','/','^']) 
e=e[::-1] 
for i in e: 
    if i in operators: 
        a=stack.pop() 
        b=stack.pop() 
        temp=a+b+i 
        stack.append(temp) 
    else: 
        stack.append(i) 
print(*stack) 
