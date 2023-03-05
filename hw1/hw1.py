import math
class Stack:
    def __init__(self):
        self.stck = []
        self.top = -1
    def initialize(self):
        self.top = -1
    def push(self, ch):
        self.top += 1
        self.stck.append(int(ch))
    def Pop(self):
        #tmp = self.stck[self.top]
        #self.top -= 1
        tmp = self.stck.pop()
        self.top -= 1
        return tmp
    
#main
while True:
    new_stack = Stack()
    new_stack.initialize()

    line = input("enter your expression:")
    for i in range(len(line)):
        if line[i].isdigit():
            new_stack.push(line[i])
        else:
            if line[i] == "+":
                pop_right = new_stack.Pop()
                pop_left = new_stack.Pop()
                new_stack.push(int(pop_right + pop_left))
            elif line[i] == "-":
                pop_right = new_stack.Pop()
                pop_left = new_stack.Pop()
                new_stack.push(int(pop_left - pop_right))
            elif line[i] == "*":
                pop_right = new_stack.Pop()
                pop_left = new_stack.Pop()
                new_stack.push(int(pop_left * pop_right))
            elif line[i] == "/":
                pop_right = new_stack.Pop()
                pop_left = new_stack.Pop()
                new_stack.push(int(pop_left / pop_right))
            elif line[i] == "%":
                pop_right = new_stack.Pop()
                pop_left = new_stack.Pop()
                new_stack.push(int(pop_left % pop_right))
            elif line[i] == "^":
                pop_right = new_stack.Pop()
                pop_left = new_stack.Pop()
                new_stack.push(math.pow(pop_left, pop_right))
        
    
    ans = new_stack.Pop()
    print("the value if the expression is:", int(ans))

    while True:
        opt = input("continue?(Y,y/N,n)")
        if opt == "Y" or opt == "y":
            break
        elif opt == "N" or opt =="n":
            exit(0)
        else:
            print("enter Y/y or N/n")