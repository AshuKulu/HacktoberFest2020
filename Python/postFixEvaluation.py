## Algorithm to evaluate any postfix expression in python using list as stack


def postFixOp(s):
	n = len(s)
	stk = []
	for i in s:
		#print(stk)
		if i.isnumeric() :
			stk.append(i)
		else:
			b = stk[-1]
			stk.pop()
			a = stk[-1]
			stk.pop()
			if i == '+':
				stk.append(int(a)+int(b))
			elif i == '-':
				stk.append(int(a)-int(b))
			elif i == '*':
				stk.append(int(a)*int(b))
			elif stk == '/':
				sk.append(int(a)/int(b))
			
	return stk[0]
	
s = input()
print(postFixOp(s))
