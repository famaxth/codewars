def evil(n):
    b = bin(n)
    count = b.count('1')
    if(count % 2 == 0):
        return "It's Evil!"
    else:    
        return "It's Odious!"
