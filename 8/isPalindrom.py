def is_palindrome(s):
    i = len(s) - 1
    new_str = ""
    while i >= 0:
        new_str += s[i]
        i -= 1
    return s.lower() == new_str.lower()
