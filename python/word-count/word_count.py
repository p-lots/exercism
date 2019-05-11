def word_count(phrase):
    counts = {}
    for word in phrase.lower().split():
        if word not in counts:
            counts[word] = 1
        else:
            counts[word] += 1
    return counts
