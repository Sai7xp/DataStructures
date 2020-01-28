from stack import Stack

def is_match(p1,p2):
    if p1 == '{' and p2 == '}':
        return True
    elif p1 == '[' and p2 == ']':
        return True
    elif p1 == '(' and p2 == ')':
        return True
    else:
        return False
def is_paren_balanced(paren_string):
    b=Stack()
    is_balanced=True
    index=0

    while index < len(paren_string) and is_balanced:
        paren=paren_string[index]
        if paren in "{[(":
            b.push(paren)
        else:
            if b.is_empty():
                is_balanced=False
            else:
                top=b.pop()
                if not is_match(top,paren):
                    is_balanced=False
        index+=1
    
    if is_balanced and b.is_empty():
        return True
    else:
        return False

print(is_paren_balanced(']]]'))