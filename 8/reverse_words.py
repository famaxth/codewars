def reverse_words(s):
    arr = s.split(' ')
    str = ""
    i = len(arr) - 1
    while i >= 0:
        if i != 0:
            str += arr[i] + ' '
            i -= 1
        else:
            str += arr[i]
            i -= 1
    return str
