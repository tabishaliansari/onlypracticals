operator=['+', '-', '*', '/', '(', ')', '^']
priority={'+':1, '-':1, '/':2, '*':2, '^':3}

def infixToPostfix(string):
    stack=[]
    output=''
    for char in string:
        if char not in operator:
            output+=char
        elif char=='(':
            stack.append('(')
        elif char==')':
            while stack and stack[-1]!='(':
                output+=stack.pop()
            stack.pop()
        else:
            while stack and stack[-1]!='(' and priority[char]<=priority[stack[-1]]:
                output+=stack.pop()
            stack.append(char)
    while stack:
        output+=stack.pop()
    return output


#def is_operand(char):
#    return char.isalnum()

def evaluate_postfix(postfix_expression, variables):
    stack = []

    for char in postfix_expression:
        if char.isalnum():
            if char.isalpha():
                stack.append(variables.get(char, 0))
            else:
                stack.append(float(char))
        else:
            operand2 = stack.pop()
            operand1 = stack.pop()

            if char == '+':
                stack.append(operand1 + operand2)
            elif char == '-':
                stack.append(operand1 - operand2)
            elif char == '*':
                stack.append(operand1 * operand2)
            elif char == '/':
                stack.append(operand1 / operand2)
            elif char == '^':
                stack.append(operand1 ** operand2)

    return stack.pop()


count = int(input("Enter the number of variables: "))
print()
expression = input('Enter infix expression: ')
postfixExpression = infixToPostfix(expression)
print('infix notation: ',expression)
print('postfix notation: ',postfixExpression)


VarValues={}
temp=65
for i in range(count):
    v=int(input("Enter the key value: "))
    VarValues[chr(temp+i)]=v
for value in VarValues:
    print('value of {} : {}'.format(value,VarValues[value]))

postfix_evaluation = evaluate_postfix(postfixExpression, VarValues)
print('postfix evaluation: ',postfix_evaluation)
