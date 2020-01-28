# print("okay")

class Stack():
    def __init__(self):
        self.items=[]
    def push(self,item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def is_empty(self):
        return self.items == []
    def peek_value(self):
        if not self.is_empty():
            return self.items[-1]
    def print_stack(self):
        return self.items

# s=Stack()

# s.push(11)
# s.push(22)
# s.push(33)
# s.pop()
# values=s.print_stack()
# print(values)