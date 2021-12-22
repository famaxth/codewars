def sum_str(a, b):
    if len(a) != 0:
        if len(b) != 0:
            return str(int(a) + int(b))
        else:
            return a
    if len(b) != 0:
       return b
    else:
        return str(0)
