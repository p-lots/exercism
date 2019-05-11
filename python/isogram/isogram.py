def is_isogram(s):
    return sum(1 if ch.isalpha() and s.lower().count(ch) > 1 else 0 for ch in s.lower()) == 0