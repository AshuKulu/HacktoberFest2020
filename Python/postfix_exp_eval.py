# Python program to evaluate 
# potfix expression consisting of 
# arithmetic operators like +,-,*,/,^
# and integer operands
# using stack


class postfixExpEval: 
	def __init__(self): 
		self.stack =[] 
		self.top =-1
    # pop element from top
	def pop(self): 
		if self.top ==-1: 
			return
		else: 
			self.top-= 1
			return self.stack.pop() 
    # push element on the top
	def push(self, i): 
		self.top+= 1
		self.stack.append(i) 
    # evaluation
	def evalFn(self, l): 
		for x in l: 
            # if x is an operand
			try: 
				self.push(int(x)) 
            # if x is an operator
			except ValueError: 
				val1 = self.pop() 
				val2 = self.pop() 

				op ={'+':val2 + val1,
                      '-':val2-val1, 
                      '*':val2 * val1, 
                      '/':val2 / val1, 
                      '^':val2**val1
                 } 
				self.push(op.get(x)) 
		return int(self.pop()) 

str ='10 30 + 4 / 5 * 19 + 30 -'

# splitting string into operands and operators
opList = str.split(' ') 
# object of class postfixExpEval
obj = postfixExpEval() 
print(obj.evalFn(opList)) 
